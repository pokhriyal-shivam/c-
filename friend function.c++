#include<iostream>
using namespace std;

class box{
private:
int length = 10;

public:
friend void showlength(box b);
};

void showlength(box b){
cout<<"length is :"<<b.length<<endl;
}

int main(){
box b;
showlength(b);
  return 0;
}
