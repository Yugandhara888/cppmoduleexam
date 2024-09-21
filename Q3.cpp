//Q.No. 3
//Write a program create employee class with members variable as EmpId,Name of Employee and Salary. For 10 Employees
//Print list of all employees.
//Print list of employee who got heights salary.

#include<iostream>
using namespace std;
//static int max=0;

class employee{
private:
int empid;
string empname;
int salary;
static int max ;
public:


void set_emp_data(int id,string n,int s){
empid=id;
empname=n;
salary=s;
if(max<salary){
max = salary;
}
}
void show_data(){
cout<<"\n Employee id :"<<empid;
cout<<"\nName Of Employee :"<<empname;
cout<<"\n Employee Salary :"<<salary;

}
static void maxSal(){
cout<<"\n maximum salary :"<<max;
}
};
int employee::max =0;
main(){
employee obj,obj1,obj2,obj3,obj4,obj5,obj6,obj7,obj8,obj9;
obj.set_emp_data(1,"rahul",10000);
obj.show_data();
obj1.set_emp_data(2,"samir",20000);
obj1.show_data();
obj2.set_emp_data(3,"mayur",4000);
obj2.show_data();
obj3.set_emp_data(4,"komal",5000);
obj3.show_data();
obj4.set_emp_data(5,"tina",12000);
obj4.show_data();
obj5.set_emp_data(6," mina",16000);
obj5.show_data();
obj6.set_emp_data(7,"rupaa",9000);
obj6.show_data();
obj7.set_emp_data(8,"isha",27000);
obj7.show_data();
obj8.set_emp_data(9,"suman",45000);
obj8.show_data();
obj9.set_emp_data(10,"noor",500);
obj9.show_data();
employee::maxSal();
}