#include<iostream>

using namespace std;

class student{
public:
int rollno;

student(){
rollno = 10;
}
};

int main(){
student s;
cout<<"rollno is:<<s.rollno<<endl;
return 0;
}
