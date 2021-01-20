#include<iostream>
using namespace std;

class Student{
  public:
  int id;
  string name;

  void ask_details(int i, string n){
       id= i;
       name= n;

  }

  void get_details(){

      cout<<"ID:"<<id<<endl;
      cout<<"NAME:"<<name;
  }

};

int main(){

  Student s1;
  int s_id;
  string s_name;
  cout<<"Enter student id:";
  cin>>s_id;
  cout<<"Enter student name:";
  cin>>s_name;
  s1.ask_details(s_id, s_name);
  s1.get_details();


}