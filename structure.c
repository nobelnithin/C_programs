#include <stdio.h>
#include <conio.h>
struct emp{
    int empno;
    char name[10];
    int bpay,allow,ded,npay;
};
void main(){
    struct emp e,*p;
    int i,n;
    p=&e;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter the employee number: ");
        scanf("%d",&(p+i)->empno);
        printf("\n Enter the basic pay, allowances & deductions: ");
        scanf("%d%d%d",&(p+i)->bpay,&(p+i)->allow,&(p+i)->ded);
           (p+1)->npay=(p+i)->bpay+(p+i)->allow-(p+i)->ded;
               }
        printf("\nEmp.No.Name \t Bpay\tAllow \t Ded\t Npay\n\n");
        for(i=0;i<n;i++){
            printf("%d\t%s\t%d\t%d\t%d\t%d\n",(p+i)->empno,(p+i)->name,(p+i)->bpay,(p+i)->allow,(p+i)->ded,(p+i)->npay);

        }
}