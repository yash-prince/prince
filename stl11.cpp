// STACK : LIFO(last in first out) 1.push 2.pop 3.top
// queue: FIFO(first in first out) 1.push 2.pop 3.front
#include<bits/stdc++.h>
using namespace std;
int main(){
// stack<int> s;
// s.push(2);
// s.push(3);
// s.push(4);
// s.push(5);
// while(!s.empty()){
//     cout<<s.top()<<endl;
//     s.pop();
// }
queue<string> q;
q.push("abc");
q.push("abd");
q.push("abe");
q.push("abf");
while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
}
}