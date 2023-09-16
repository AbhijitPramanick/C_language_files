#include<stdio.h>
typedef struct vector{
    float x;
    float y;
}v;

int main(){
    v v1={26.882,52.263};
    printf("The given vector is:\n %0.3fi + %0.3fj\n",v1.x,v1.y);
    return 0;
}