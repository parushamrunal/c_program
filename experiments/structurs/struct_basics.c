#include<stdio.h>
#include<string.h>
struct employee
{
	int emp_id;
	char emp_name[10];
	float emp_salary;
	int emp_age;
	int emp_mobile_no;
};
void main()
{
	struct employee e;
	printf("%ld\n",sizeof(e));
//	e.emp_id=999;
//	e.emp_name[10]="sdf";
//	strcpy(e.emp_name,"sdf");
//	e.emp_salary=76645;
//	e.emp_age=40;
//	e.emp_mobile_no=987654321;
//	printf("emp_id:%d\nemp_name:%s\nemp_salary:%f\nemp_age:%d\nemp_mobile_no:%d",e.emp_id,e.emp_name,e.emp_salary,e.emp_age,e.emp_mobile_no);
}
