#include <iostream>
#include <string>

using namespace std;

class Student {
//'private:'
    string name;
    int code;
    float grade;
public:
//setters - they are used to give values to private variables
	void setName(string nm);
	void setCode(int cd);
	void setGrade(float grd);
//getters - they are used to get the values from a class's private variables
	string getName();
	int getCode();
	float getGrade();
};

//Definition of functions
void Student::setName(string nm) {name=nm;}
void Student::setCode(int cd) {code=cd;}
void Student::setGrade(float grd) {grade=grd;}
//
string Student::getName() {return name;}
int Student::getCode() {return code;}
float Student::getGrade() {return grade;}

int main() {
//Statements---
Student S;
string n;
int c;
float g;
//input---
cout<<"Name:";
getline(cin,n);
S.setName(n);
cout<<"Code:";
cin>>c;
S.setCode(c);
cout<<"Grade:";
cin>>g;
S.setGrade(g);
//output---
cout<<"\n("<<S.getCode()<<") "<<S.getName()<<" : "<<S.getGrade();
return 0;}

