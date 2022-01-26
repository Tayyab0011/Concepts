#include <iostream>
#include <string>
using namespace std;

class User{
    private:
    string name;
    string phone;
    string status;
    string date_created;
    
    public:
    void setname(string s) {
      name = s;
    }
    
    string getname() {
      return name;
    }

};
class Customer:public User{
    private:
    string name;
    string phone;
    string status;
    string date_created;
    public:
    void setname(string s) {
      name = "C_" + s;
    }
    
    string getname() {
      return name;
    }
};
class Employee:public User{
    private:
    string name;
    string phone;
    string status;
    string date_created;
    public:
    void setname(string s) {
      name = "E_" + s;
    }
    
    string getname() {
      return name;
    }
};
class Admin:public User{
    private:
    string name;
    string phone;
    string status;
    string date_created;
    public:
    void setname(string s) {
      name = "A_" + s;
    }
    
    string getname() {
      return name;
    }
    

};


int main(){
    Admin A1;
    A1.setname("Ali");
    cout<<A1.getname()<<endl;
    
    Customer c1;
    c1.setname("Ahsan");
    cout<<c1.getname()<<endl;
    
    Employee e1;
    e1.setname("arooj");
    cout<<e1.getname()<<endl;
}

