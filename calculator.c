#include<stdio.h>
#include<stdlib.h>
void main() {
    char choice;
    int choose,a,b,sum,sub,pro,dummy;
    do {
        printf("***Welcome to C Programming***\n");
        printf("----------------------------\n");
        printf("Choose your requirements [1-4]\n");
        printf("---   ---   ---   ---    ---\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Exit\n");
        printf("-------------------------\n");
        printf("Your option : ");
        scanf("%d",&choose);
        printf("---   ---   ---\n");
        if(choose == 1 || choose == 2 || choose == 3)
        {
            printf("Enter any two numbers:");
            scanf("%d,%d",&a,&b);
        }
        switch(choose)
        {
        case 1:
            sum=a+b;
            printf("Sum is %d\n",sum);
            break;
        case 2:
            sub=a-b;
            printf("Subtraction is %d\n",sub);;
            break;
        case 3:
            pro=a*b;
            printf("Product of %d and %d is %d\n",a,b,pro);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("You enter wrong input\n");
        }
        printf("----- ----- ----\n");
        printf("Do u want to continue[Y/N]:");
        scanf(" %c",&choice);
    } while(choice =='y' || choice == 'Y');
}
    