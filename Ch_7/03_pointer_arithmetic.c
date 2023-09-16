#include<stdio.h>

int main(){
    float i=34, *ptr = &i;
    printf("\nThe original value of ptr : %u\n\n",ptr);   
    unsigned int u,v,d;
    u = ptr;
    v = ++ptr;
    d = v-u;
    for(int i=0;i<10;i++){        
        printf("The value of ptr : %u\n",ptr+i );
    }
    printf("\nThe size of the variable is %u\n",d);
    printf("\nThe original value of ptr : %u\n",ptr);

    return 0;
}