#include <stdio.h>

void pifunction(float *ptrf) //*ptrf points to main local variable (pi)
{
    puts("\n<< In the pifuncion >>");
    printf("pi value is %f, address pointed is %X\n", *ptrf, ptrf);
    *ptrf = 3.141592;
    printf("pi value is %f, address pointed is %X\n", *ptrf, ptrf);
}

void abfunction(int a, int b, int *ptr) //parameters a and b are local variables in this function
{
    puts("\n<< In the abfuncion >>");
    printf("a value is %d, b value is %d, pointer value is %d, address pointed (a) is %X\n", a, b, *ptr, ptr);
    ptr = &b;
    printf("a value is %d, b value is %d, pointer value is %d, address pointed (b) is %X\n", a, b, *ptr, ptr);
    *ptr = 9;
    printf("a value is %d, b value is %d, pointer value is %d, address pointed (b) is %X\n", a, b, *ptr, ptr);
}

void main(void)
{
    float pi = 3.1;
    pifunction(&pi);

    int a = 2, b = 4;
    abfunction(a, b, &a);

    puts("\n<< After functions >>\v");
    puts("In the function, pi has its value changed through the pointer\v");
    printf("pi value is %f, address pointed (a) is %X\n\v", pi, &pi);
    puts("In the function, b has its value changed, only in local variable\v");
    printf("a value is %d, b value is %d\n\v", a, b);
}