#include<iostream>
using namespace std;

class car{
public:
int year;

void showcar(car *c){
c->year = 100;
}
};

int main(){
car c1;
c1.year = 10;

c1.showcar(&c1)
cout<<c1.year<<endl;
return 0;
}
