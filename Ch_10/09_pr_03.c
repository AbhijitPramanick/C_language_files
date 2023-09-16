#include<stdio.h>

int main(){
    FILE *ptr,*p;
    ptr = fopen("sample.txt","r");
    p = fopen("pr_03_sample.txt","w");
    char s[30],c;
    int i=0;
    c = fgetc(ptr);
    while(c!=EOF){
        s[i] = c;
        c = fgetc(ptr);
        i++;
    }
    fclose(ptr);
    s[i] = '\0';
    printf("%s\n%d\n",s,i);
    fprintf(p,"%s\n%s",s,s);
    fclose(p);
    return 0;
}