#include <stdio.h>

void cir_shift(int *p1, int *p2, int *p3);
int main()
{
    int x,y,z;
    printf("Enter x, y, z: ");
    scanf("%d %d %d", &x, &y, &z);
    int *a,*b,*c;
    a=&x;
    b=&y;
    c=&z;
    cir_shift(a, b, c);
    printf("%d %d %d", x, y, z);
    
    return 0;
}

void cir_shift(int *p1, int *p2, int *p3)
{
    int temp1 = *p1;
    *p1 = *p3;
    *p3 = *p2;
    *p2 = temp1;
}
