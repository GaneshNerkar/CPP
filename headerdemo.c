#include"marvellous.h"

int main()
{
    struct Demo obj;
    int no = 11;
    float radius = 30.6f;
    float Area  = PI*radius*radius;
    printf("Area is : %f\n",Area);

    IPTR Ptr = &no;
    
    printf("Values of no is %d\n", *Ptr);

    return 0;
}