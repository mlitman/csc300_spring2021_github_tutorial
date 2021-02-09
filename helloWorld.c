#include<stdio.h>

// public static void main(String[] args)
int main(int argc, char** argv)
{
    int a = 5;
    int* a_ptr = &a;
    int b = *a_ptr;
    int* b_ptr = &b;
    printf("a = %d, a_ptr = %p\n b = %d, b_ptr = %p", a,a_ptr, b, b_ptr);
    return 0;
}
