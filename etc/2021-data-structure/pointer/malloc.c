#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char name[20];
    int id;
    double grade;
} Student;

void strcpyPtr(char *src, char *dst) {
    for (; *dst++ = *src++; ) ;
}

int main() {
    Student *A, *B;

    A = (Student*)malloc(sizeof(Student));
    B = (Student*)calloc(1, sizeof(Student));

    strcpyPtr("Kim", A->name);
    A->id = 20200123;
    A->grade = 4.3;

    strcpyPtr("Lee", A->name);
    B->id = 20200789;
    B->grade = 3.8;

    printf("A: %s, %d, %lf\n", A->name, A->id, A->grade);
    printf("B: %s, %d, %lf\n", B->name, B->id, B->grade);
}