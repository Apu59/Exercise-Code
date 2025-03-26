//Queue in STL C++

#include<iostream>
#include<queue>
using namespace std;

int main(){

//Queue maintain FIFO(First In First Out) sequence.

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"Front = "<<q.front()<<endl;
    cout<<"Size = "<<q.size()<<endl;

    queue<int> q2;

    q2.swap(q); //Now q2 size is 3 and q size is 0
    cout<<"q size = "<<q.size()<<endl; 
    cout<<"q2 size = "<<q2.size()<<endl;

    while(!q2.empty()){ 
        cout<<q2.front()<<" "; //This will print exactly same order as we pushed input in the queue 1 2 3, because it maintains FIFO.
        q2.pop();
    }


    return 0;
}