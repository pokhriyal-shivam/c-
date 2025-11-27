#include<iostream>
using namespace std;

class student{
public:
int rollno;

student(int r){
rollno = r;
}

void display(){
cout<<"roll no :"<<rollno<<endl;
}
};
int main(){
student s(10);
  s.display();
return 0;
}
