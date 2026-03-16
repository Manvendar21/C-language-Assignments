#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int mul(int, int);
float div(float, float);

int main()
{
    int ch;
    int a, b;

    printf("------Menu------\n");
    printf("1: Addition");
    printf("2: Subtraction");
    printf("3: Multiplication");
    printf("4: Division");

    printf("select choice");
    scanf("%d" ,&ch);
    printf("Enter two numbers");
    scanf("%d %d" , &a,&b);;

    switch(ch) {
        case 1: 
          printf("Result is : %d", add(a,b));
            break;
        case 2:
          printf("Result is : %d", sub(a,b));
            break;
        case 3:
          printf("Result is : %d" , mul(a,b));
            break;
        case 4: 
          printf("Result is : %.2f" , div(a,b));
            break;
        default:
          printf("Invalid Choice");

    }
}
    int add(int x , int y)
    {
    return x + y ;  
}
    int sub(int x , int y)
    {
    return x - y ;
}
    int mul(int x , int y)
    {
     return x*y ;
}
    float div(float x , float y)
    {
    return x/y;
}