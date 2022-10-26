#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    float avg=(a+b+c)/3.0;
    printf("Average is %f",avg);
    return 0;
}
