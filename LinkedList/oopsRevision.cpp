#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float marks;
    Student(string name, int rno, float marks){
        this->name=name;
        this->rno=rno;
        this->marks=marks;
    }
};
void change(Student* s){
    s->name="Pranay";
}
int main()
{
    Student* s=new Student("Pavitra",58, 85.56);
    cout<<s->name<<endl;
    change(s);
    cout<<s->name<<endl;
}