#include <stdio.h>

typedef struct {
    int id;
    char name[30];
    int grade;
    long contact_num;
} student;

void st_mutate(student*);
void print_student(student*);

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    student st[n];
    for (int i = 0; i < n; i++) {
        st_mutate(&st[i]);
    }
    for (int i = 0; i < n; i++) {
        print_student(&st[i]);
    }
}

void st_mutate(student* st) {
    printf("give me the id name grade and contact number in order\n");
    scanf("%d %s %d %ld", &st->id, st->name, &st->grade, &st->contact_num);
}

void print_student(student* st) {
    printf("id: %d\n name: %s\n grade: %d\n contact number: %ld\n", st->id, st->name, st->grade, st->contact_num);
}

