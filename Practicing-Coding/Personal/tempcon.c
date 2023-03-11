#include<stdio.h>
float temp(float f);
float temp(float f)
{
    float c;
    c=(5*(f-32))/9;
    return c;
}
void main()
{   
    float f;
    printf("Enter temperature in Fahrenheit \t");
    scanf("%f",&f);
    printf("the temperature in celsius is , %f" ,temp(f));
    
}
