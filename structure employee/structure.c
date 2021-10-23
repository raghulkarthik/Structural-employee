#include<stdio.h>
struct employee
{
    int id,age,phone,salary;
    char name[25];
}emp[100];

void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as id , name , age , phone,salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %d %d",&emp[i].id,emp[i].name,&emp[i].age,&emp[i].phone,&emp[i].salary);
    }
    printf("\nEMP_NO.\tEMP_NAME\tEMP_AGE\tEMP_PHONE\tEMP_SAL\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t\t%d\t%d\t%d\n",emp[i].id,emp[i].name,emp[i].age,emp[i].phone,emp[i].salary);
    }
}
