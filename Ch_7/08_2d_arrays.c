#include<stdio.h>

int main(){
    int n_students=3, n_subjects=3, m[n_students][n_subjects];
    for(int i=0;i<n_students;i++){
        for(int j=0;j<n_subjects;j++){
            printf("Enter the subject %d marks of student %d : ",j+1, i+1);
            scanf("%d",&m[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<n_students;i++){
        for(int j=0;j<n_subjects;j++){
            printf("Subject %d marks of student %d : %d\n",j+1, i+1,m[i][j]);
        }
        printf("\n");
    }
    return 0;
}