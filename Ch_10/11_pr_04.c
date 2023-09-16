#include<stdio.h>

int main(){
    FILE *ptr,*p;

    ptr = fopen("Double_the_contents.txt","r");
    int num ;
    fscanf(ptr,"%d",&num);
    fclose(ptr);

    printf("\nContent of the file is : %d\nOverwriting double its value, that is, %d ...\n",num,num*2);
    p = fopen("Double_the_contents.txt","w");
    fprintf(p,"%d",num*2);
    fclose(p);
    printf("\nThe desired value is written in the file.\nThank you !\n\n");
    return 0;
}