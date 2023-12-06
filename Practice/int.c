#include<stdio.h>

int main(){
    int phy=74, chem=88, bio = 72, math = 92, comp = 80;
    float per= (phy+chem+bio+math+comp)/5.0;
    printf("%.2f\n",per);
    if(per>=90)
    printf("Grade A");
    else if(per>=80)
    printf("Grade B");
    else if(per>=70)
    printf("Grade C");
    else if(per>=60)
    printf("Grade D");
    else if(per>=40)
    printf("Grade E");
    else
    printf("Grade F");
    return 0;
}