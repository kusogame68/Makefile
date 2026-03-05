#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char *student_ID;
    char *name;
    double *score;
};

int main(){
    char id_buffer[50], name_buffer[50];
    struct Student *st;
    st = malloc(sizeof(struct Student));
    FILE *fptr;

    fptr = fopen("student_score.txt", "w");
    if(fptr == NULL){
        printf("Open data FAIL.");
        exit(1);
    }
    printf("Student ID : ");
    scanf("%49s", id_buffer);
    st -> student_ID = malloc((strlen(id_buffer) + 1) * sizeof(char));
    getchar();

    printf("Name : ");
    fgets(name_buffer, 50, stdin);
    name_buffer[strcspn(name_buffer, "\n")] = '\0';
    st -> name = malloc((strlen(name_buffer) + 1) * sizeof(char));

    st -> score = malloc(sizeof(double));
    printf("Score : ");
    scanf("%lf",st -> score);

    strcpy(st -> student_ID, id_buffer);
    strcpy(st -> name, name_buffer);

    puts("\n=====OUTPUT=====");
    printf("Student ID (%zu bytes) : %s\n", strlen(st -> student_ID) + 1, st -> student_ID);
    printf("Student name (%zu bytes) : %s\n", strlen(st -> name) + 1, st -> name);
    printf("Student score (%zu bytes) : %.1f\n", sizeof(double), *(st -> score));
    puts("\n================");

    fprintf(fptr,"Student ID : %s\n",st -> student_ID);
    fprintf(fptr,"Student name : %s\n",st -> name);
    fprintf(fptr,"Student score : %.1f\n",*(st -> score));
    printf("Write Success.\n");
    
    fclose(fptr);
    printf("Close the file.\n");
    free(st -> student_ID);
    free(st -> name);
    free(st -> score);
    free(st);
    getchar();
    return 0;
}