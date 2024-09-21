/Q.No 2.
//Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
//Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use
//Default values for Pay_Rate Rs. 500 per hours)

#include<iostream>
using namespace std;
class worker{
private:
string worker_name;
int hours;
int rate=500;
int salary;

public:
void get_data(string name,int hr,int r){
worker_name=name;
hours=hr;
rate=r;
salary=hours*rate;

}
  void sal(){

  cout<<"\nworker name :"<<worker_name;
  cout<<"\nnumber of hours worked"<<hours;
  cout<<"\nsalary ="<<salary;
  }

};
main(){
worker obj,obj1,obj2;
obj.get_data("mayur",10,500);
obj1.get_data("samir",20,500);
obj2.get_data("kunal",30,500);
obj.sal();
obj1.sal();
obj2.sal();



}
