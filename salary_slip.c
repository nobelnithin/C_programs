#include <stdio.h>

struct emp{
    int empno,bpay,npay,ded;
    char name[10];
};
void main(){
     struct emp e,*p;
     int i,n;
     p=&e;
     printf("Enter the number of Employees: ");
     scanf('%d',&n);
     for(i=0;i<n;i++){
         printf("\nEnter the Employee no: ");
         scanf("%d",&(p+i)->empno);
         printf("\nEnter the name: ");
         scanf("%s\n",(p+i)->name);
         printf("\nEnter the basic pay, allowence & deductions:  ");
         scanf("%d%d%d",&(p+i)->bpay,&(p+i)->allow,&(p+i)->ded);
         (p+i)->npay=(p+i)->allow+(p+i)->bpay-(p+i)->ded;
      }
      printf("\nEmp.no name\tBpay\tallow\tded\tnpay\n");
      for(i=0;i<n;i++){
          printf("%d\t%s\t%d\t%d\t%d\t%d\t\n",(p+i)->empno,(p+i)->name,(p+i)->bpay,(p+i)->allow,(p+i)->ded,(p+i)->npay);

      }
}