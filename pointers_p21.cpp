#include<iostream>
#include<string>
using namespace std;
int main(){
 string name = "Good learning";
 string *ptr = &name;
 cout<<"value in variable: "<<name<<"\n";
 cout<<"Memory address of variable: "<<&name<<"\n";
 cout<<"Memory address of variable: "<<ptr<<"\n";





    return 0;
}