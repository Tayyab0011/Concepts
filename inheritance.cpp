#include <iostream>
#include <string>
using namespace std;

class User{
    public:
    string name = "user1";
    string phone = "userphone";
    string status = "reg";
    string date_created = "10/10/10";

     void print(){
        cout<<endl<<endl<<"I am the User"<<endl;
    }
};
class Customer:public User{
    public:
    string name = "customer";
    string phone = "cust_phone";
    string status = "reg";
    string date_created = "11/11/11";

};
class Employee:public User{
    public:
    string name = "Employee";
    string phone = "Emp_phone";
    string status = "reg";
    string date_created = "12/12/12";

};
class Admin:public User{
    public:
    string name = "Admin";
    string phone = "Admin_phone";
    string status = "notreg";
    string date_created = "13/13/12";

};


int main(){
    Customer c1;
    c1.print();
    cout<<c1.name<<" "<<c1.phone<<" "<<c1.status<<" "<<c1.date_created;
    
	Employee m1;
    m1.print();
    cout<<m1.name<<" "<<m1.phone<<" "<<m1.status<<" "<<m1.date_created;

	Admin a1;
    a1.print();
    cout<<a1.name<<" "<<a1.phone<<" "<<a1.status<<" "<<a1.date_created;

}

