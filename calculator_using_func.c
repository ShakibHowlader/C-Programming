#include<stdio.h>
float add(float a, float b)
{
    return a + b;
}
float sub(float a, float b)
{
    return a - b;
}
float mul(float a, float b)
{
    return a * b;
}
float div(float a, float b)
{
    return a / b;
}

int main()
{
    float a,b;
    printf("Enter your Numbers : ");
    scanf("%f %f",&a,&b);
    float add_result = add(a,b);
    float sub_result = sub(a,b);
    float mul_result = mul(a,b);
    float div_result = div(a,b);

    printf("Add : %.2f\n",add_result);
    printf("Sub : %.2f\n",sub_result);
    printf("Mul : %.2f\n",mul_result);
    printf("Div : %.2f\n",div_result);

    return 0;
}
