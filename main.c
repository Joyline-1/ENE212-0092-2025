#include <stdio.h>


int main()
{
    int i,n,marks;
    char name[50];
    char grade;
    char regNo[30];
    printf("Enter the number of students:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("\nEnter the details of the students%d\n",i);
        printf("Name:");
        scanf(" %49[^\n]",name);
        printf("Registration Number:");
        scanf(" %29s",regNo);
        printf("Marks:");
        scanf("%d",&marks);

        if(marks>=70&&marks<=100){
            grade='A';

        }
        else if(marks>=60&&marks<=59){
            grade='B';

        }
        else if(marks>=50&&marks<=59){
            grade='C';

        }
        else if(marks>=40&&marks<=49){
            grade='D';

        }
        else if(marks>=0&&marks<40){
            grade='F';

        }
        else{
            printf("Invalid marks!Enter marks between 0 and  100.\n");
            i--;
            continue;
        }
        printf("\n--------------\n");
        printf("===STUDENT INFORMATION===\n");
        printf("\n--------------\n");
        printf("Name:%s\n",name);
        printf("Registration No;%s\n",regNo);
        printf("Marks:%d\n",marks);
        printf("Grade:%c\n",grade);
        if (marks>=40){
            printf("Status:Passed\n");

        }
        else{
            printf("Status:Failed\n");
        }
        printf("------------------\n");
    }
    return 0;
}
