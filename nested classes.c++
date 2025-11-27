#include<iostream>
using namespace std;

class outer{
public:
int x=10;

class inner{
public:
void show(outer o){
cout<<"value is "<<o.x<<endl;
}
};

};

int main(){
outer o1;
  outer::inner i1;
  i1.show(o1);
  return 0;
}
