#include <iostream>
using namespace std;
class student{
public:
int rollno;

student(int r){
rollno = r;
}

student(student &s){
rollno = s.rollno;
}

void display(){
cout<<"roll no is "<<rollno<<endl;
}
};

int main(){
student s1(101);
student s2(s1);

s1.display();
s2.display();
return 0;
}
