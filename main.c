#include <stdio.h>

void pifunction(float *ptrpi) //*ptrf points to main local variable (pi)
{
    puts("\n<< In the pifuncion >>");
    printf("pi value is %f, address pointed is %X\n", *ptrpi, ptrpi);
    *ptrpi = 3.141592;
    printf("pi value is %f, address pointed is %X\n", *ptrpi, ptrpi);
}

void abfunction(int a, int b, int *ptr) //parameters a and b are local variables in this function
{
    puts("\n<< In the abfuncion >>");
    printf("a value is %d, b value is %d, pointer value is %d, address pointed (a) is %X\n", a, b, *ptr, ptr);
    ptr = &b; //now, the pointer is b address
    printf("a value is %d, b value is %d, pointer value is %d, address pointed (b) is %X\n", a, b, *ptr, ptr);
    *ptr = 9; //assigning value to the pointed variable (b)
    printf("a value is %d, b value is %d, pointer value is %d, address pointed (b) is %X\n", a, b, *ptr, ptr);
}

void main(void)
{
    float pi = 3.1;
    pifunction(&pi);

    int a = 2, b = 4;
    abfunction(a, b, &a);

    puts("\n<< After functions >>\v");
    puts("In the pifunction, pi has its value changed through the pointer");
    printf("pi value is %f, address pointed (a) is %X\n\v", pi, &pi);
    puts("In the abfunction, b has its value changed, only in local variable");
    printf("a value is %d, b value is %d\n\v", a, b);
}