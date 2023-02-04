#include<stdio.h>

typedef struct {
    char name[20];
    int id;
    double grade;
} Student;

void swapCallByValue(Student A, Student B) {
    Student temp;
    for (int i=0; i<3; i++) {
        temp.name[i] = A.name[i];
        A.name[i] = B.name[i];
        B.name[i] = temp.name[i];
    }
    temp.id = A.id;
    A.id = B.id;
    B.id = temp.id;

    temp.grade = A.grade;
    A.grade = B.grade;
    B.grade = temp.grade;
}

void swapCallByRef(Student *A, Student *B) {
    Student temp;
    
    for(int i=0; i<3; i++) {
        temp.name[i] = A->name[i];
        A->name[i] = B->name[i];
        B->name[i] = temp.name[i];
    }

    temp.id = A->id;
    A->id = B->id;
    B->id = temp.id;

    temp.grade = A->grade;
    A->grade = B->grade;
    B->grade = temp.grade;
}

int main() {
    Student IoT[2] = {
        {"Kim", 20200123, 4.3},
        {"Lee", 20200789, 3.8}
    };

    swapCallByValue(IoT[0], IoT[1]);
    printf("Call By Value\n");
    for(int i=0; i<2; i++)
        printf("Student[%d]: %s, %d, %lf\n", i, IoT[i].name, IoT[i].id, IoT[i].grade);

    swapCallByRef(&IoT[0], &IoT[1]);
    printf("Call By Reference\n");
    for(int i=0; i<2; i++)
        printf("Student[%d]: %s, %d, %lf\n", i, IoT[i].name, IoT[i].id, IoT[i].grade);
}