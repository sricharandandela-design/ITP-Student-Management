#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "students.dat"

typedef struct {
    int id;
    char name[50];
    int age;
    char gender[10];
    char grade[20];
    char course[50];
    char contact[20];
} Student;


void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();
void loadStudents(Student students[], int *count);
void writeAllStudents(Student students[], int count);


int main() {
    int choice;

    while (1) {
        printf("\n======= STUDENT MANAGEMENT SYSTEM =======\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}


void addStudent() {
    FILE *fp = fopen(FILE_NAME, "ab");
    if (!fp) {
        printf("Error opening file!\n");
        return;
    }

    Student s;

    printf("Enter ID: ");
    scanf("%d", &s.id);
    getchar();

    printf("Enter Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter Age: ");
    scanf("%d", &s.age);
    getchar();

    printf("Enter Gender: ");
    fgets(s.gender, sizeof(s.gender), stdin);
    s.gender[strcspn(s.gender, "\n")] = '\0';

    printf("Enter Grade/Class: ");
    fgets(s.grade, sizeof(s.grade), stdin);
    s.grade[strcspn(s.grade, "\n")] = '\0';

    printf("Enter Course: ");
    fgets(s.course, sizeof(s.course), stdin);
    s.course[strcspn(s.course, "\n")] = '\0';

    printf("Enter Contact: ");
    fgets(s.contact, sizeof(s.contact), stdin);
    s.contact[strcspn(s.contact, "\n")] = '\0';

    fwrite(&s, sizeof(Student), 1, fp);
    fclose(fp);

    printf("Student added successfully!\n");
}


void displayStudents() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (!fp) {
        printf("No record found!\n");
        return;
    }

    Student s;
    printf("\n------ STUDENT LIST ------\n");

    while (fread(&s, sizeof(Student), 1, fp)) {
        printf("\nID: %d\nName: %s\nAge: %d\nGender: %s\nGrade: %s\nCourse: %s\nContact: %s\n",
               s.id, s.name, s.age, s.gender, s.grade, s.course, s.contact);
    }

    fclose(fp);
}


void searchStudent() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (!fp) {
        printf("No record found!\n");
        return;
    }

    int id, found = 0;
    Student s;

    printf("\nEnter Student ID to search: ");
    scanf("%d", &id);

    while (fread(&s, sizeof(Student), 1, fp)) {
        if (s.id == id) {
            printf("\nStudent Found:\n");
            printf("ID: %d\nName: %s\nAge: %d\nGender: %s\nGrade: %s\nCourse: %s\nContact: %s\n",
                   s.id, s.name, s.age, s.gender, s.grade, s.course, s.contact);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("No student found with ID %d.\n", id);

    fclose(fp);
}


void updateStudent() {
    Student students[100];
    int count = 0, id, found = 0;

    loadStudents(students, &count);

    printf("\nEnter Student ID to update: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            found = 1;

            printf("Enter new contact info: ");
            fgets(students[i].contact, sizeof(students[i].contact), stdin);
            students[i].contact[strcspn(students[i].contact, "\n")] = '\0';

            printf("Enter new grade: ");
            fgets(students[i].grade, sizeof(students[i].grade), stdin);
            students[i].grade[strcspn(students[i].grade, "\n")] = '\0';

            printf("Enter new course: ");
            fgets(students[i].course, sizeof(students[i].course), stdin);
            students[i].course[strcspn(students[i].course, "\n")] = '\0';

            break;
        }
    }

    if (found) {
        writeAllStudents(students, count);
        printf("Record updated successfully.\n");
    } else {
        printf("Student ID not found.\n");
    }
}


void deleteStudent() {
    Student students[100];
    int count = 0, id, found = 0;

    loadStudents(students, &count);

    printf("\nEnter Student ID to delete: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            found = 1;

            printf("Are you sure you want to delete %s (ID %d)? (y/n): ", students[i].name, id);
            char confirm = getchar();
            getchar();

            if (confirm == 'y' || confirm == 'Y') {
                for (int j = i; j < count - 1; j++)
                    students[j] = students[j + 1];

                count--;
                writeAllStudents(students, count);
                printf("Record deleted successfully.\n");
            } else {
                printf("Deletion cancelled.\n");
            }
            break;
        }
    }

    if (!found)
        printf("Student ID not found.\n");
}


void loadStudents(Student students[], int *count) {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (!fp) return;

    *count = 0;
    while (fread(&students[*count], sizeof(Student), 1, fp))
        (*count)++;

    fclose(fp);
}

void writeAllStudents(Student students[], int count) {
    FILE *fp = fopen(FILE_NAME, "wb");
    if (!fp) {
        perror("Error opening file");
        return;
    }

    fwrite(students, sizeof(Student), count, fp);
    fclose(fp);
}
