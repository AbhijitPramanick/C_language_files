// Print the following star pattern
// *
// **
// ***
// ****

#include<stdio.h>

int main(){
    int n;
    printf("Enter number of lines of the pttern to be printed : ");
    scanf("%d",&n);
    printf("Following is the pattern :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}