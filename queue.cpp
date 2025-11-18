#include <iostream> 
#include <queue>
 using namespace std;
 int main() {
 queue<int> q;
 q.push(10);
 q.push(20);
 q.push(30);
 cout << "Front: " << q.front() << endl; // 10
 cout << "Back: " << q.back() << endl; // 30 
 q.pop(); // removes 10 
cout << "New Front: " << q.front() << endl; // 20 
return 0;
 } 
