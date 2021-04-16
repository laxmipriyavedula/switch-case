#include<stdio.h>
void main()
{
    printf("pick n item \n1.pizza \n2.burger \n3.pasta \n4.french fries \n5.sandwich");
    
    int choice=0;
    
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("u picked pizza \n price :Rs239");
        break;
        case 2:
        printf("u picked burger\n price :Rs129");
        break;
        case 3:
        printf("u picked pasta \n price :Rs179");
        break;
        case 4:
        printf("u picked french fries \n price :Rs99");
        break;
        case 5:
        printf("u picked sandwich \n price :Rs149");
        break;
        default :
        printf("invalidchoice");
    }}
