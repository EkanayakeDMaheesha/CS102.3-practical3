# include <stdio.h>
int main()
{
 char empname[15];
 float basicsalary,newsalary,increment;
 printf("ënter empname \n");
 scanf("%s",&empname);
 printf("enter basicsalary \n");
 scanf("%f",&basicsalary);

 if(basicsalary<5000)
    increment=basicsalary*0.05;
 else if (5000<=basicsalary && basicsalary<10000)
    increment=basicsalary*0.1;
 else
    increment=basicsalary*0.15;

 newsalary=basicsalary+increment;
 printf("the empname is %s \n",empname);
 printf("the newsalary is %.2f \n",newsalary);






}
