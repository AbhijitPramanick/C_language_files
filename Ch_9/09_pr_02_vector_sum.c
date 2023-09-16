// #include<stdio.h>
// typedef struct vector{
//     float x;
//     float y;
// }v;
// void sum(v *m, v *n){
//     m->x += n->x;
//     m->y += n->y;
// }
// int main(){
//     v v1={26.882,52.263};
//     v v2={20.892,50.263};
//     v *x,*y;
//     x=&v1;
//     y=&v2;
//     printf("\nThe given 1st vector is:\n %0.3fi + %0.3fj\n",v1.x,v1.y);
//     printf("\nThe given 2nd vector is:\n %0.3fi + %0.3fj\n",v2.x,v2.y);
//     printf("\nCalling sum function...");
//     sum(x,y);
//     printf("\nSum function called and executed.\n");
//     printf("\nThe sum vector is:\n %0.3fi + %0.3fj\n\n",v1.x,v1.y);
//     return 0;
// }

#include<stdio.h>
typedef struct vector{
    float x;
    float y;
}v;
void sum(v *a, v *b){
    a->x += b->x;
    a->y += b->y;
}
int main(){
    v v1={123.456,321.654};
    v v2={357.403,751.695};
    v *m,*n;
    m=&v1;
    n=&v2;
    printf("Vector 1 : %0.3fi + %0.3fj\n",v1.x,v1.y);
    printf("Vector 2 : %0.3fi + %0.3fj\n",v2.x,v2.y);
    printf("Calling the sum function...\n");
    printf("Vector sum : %0.3fi + %0.3fj\n",v1.x,v1.y);
    sum(m,n);
    return 0;
}