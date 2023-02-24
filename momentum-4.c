#include <stdio.h>

int main()
{
    char a;
    printf("enter value:");
    scanf("%c",&a);
    
    switch(a){
        case 'M':
            printf("Monday");
            break;
            
        case 'T':
            printf("Tuesday");
            break;
            
        case 'W':
            printf("Wednesday");
            break;  
            
        case 't':
            printf("Thursday");
            break;  
            
        case 'F':
            printf("Friday");
            break;
            
        case 's':
            printf("Saturday");
            break;
            
        case 'S':
            printf("Sunday");
            break;
            
        default:
        printf("Invalid! value");
        break;
    }
}
