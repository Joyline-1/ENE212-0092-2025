#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pin;
    int attempts=3;
    int choice;
    int digits;
    int correctPin=1234;
    int i;
    printf("===PIN-BASED DOOR LOCK SYSTEM===\n");
    while(attempts>0){
        printf("Enter the four digit pin:");
        scanf("%d",&pin);
        digits=0;

    }
    if(pin>=0){
        int temp=pin;
        do{
            digits++;
            temp=temp/10;

        }
        while(temp>0);
    }
    if(digits<4||pin<0){
        printf("pin is too short(must be 4 digits).\n");}
        else if(digits>4){
            printf(pin is too long(must be 4 digits).\n);
        }
        else if(pin==correctPin){
            printf("\nAccess granted.Door unlocked\n");
            do{
                printf("\n===DEVICE MENU===\n");
                printf("1.Open Door\n");
                printf("2.Change userName\n");
                printf("3.Change pin\n");
                printf("4.Exit\n");
                printf("choose an option:");
                scanf("%d",choice);
                switch(choice){
            case 1:
                printf("Door opened successfully.\n");
                break;
            case 2:
                printf("userName feature coming soon.\n");
                break;
                case 3:
                     printf("Change pin feature coming soon.\n");
                     break;
                case 4:
                    printf("Exiting system.\n");
                    break;
                default:
                    printf("invalid option!Please try again.\n");}
            }while(!=4);
            return 0;

        }
        else{
            printf("Incorrect pin\n");
        }
        attempts--;
        if(attempts>0)
    }
    return 0;
}
