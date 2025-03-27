//Priority queue in STL C++

#include<iostream>
#include<queue>
using namespace std;


int main(){

// Priority queue is internally one kind of tree.
//There are 2 types of priority queue 1.Maxheap(It stores the value in descending order because in this priority queue higest value gets the maximum priority)
// 2.Minheap(It stores the value in aescending order because in this priority queue lowest value gets the maximum priority)

    priority_queue<int> pq; //Maxheap.  It stors data in descending order, because in this priority queue highest value gets maximum priority.

    pq.push(4);
    pq.push(3);
    pq.push(10);
    pq.push(5);

    cout<<"Top = "<<pq.top()<<endl;
    cout<<"Size = "<<pq.size()<<endl;

    priority_queue<int> pq2;

    pq2.swap(pq);  
    cout<<"Size = "<<pq.size()<<endl;
    cout<<"Size = "<<pq2.size()<<endl;

    while(!pq2.empty()){  //It will print value in descending order because hight value gets maximum priority.
        cout<<pq2.top()<<" ";
        pq2.pop();
    }

    cout<<endl;

    priority_queue<int, vector<int>,greater<int>> pq3; //MinHeap. It stors data in ascending order, because in this priority queue lowest value gets the maximum priority.

    pq3.push(5);
    pq3.push(10);
    pq3.push(3);
    pq3.push(4);

    cout<<"Top "<<pq3.top()<<endl;
    cout<<"Size = "<<pq3.size()<<endl;

    while(!pq3.empty()){ //It will print value in ascending order because lowest value gets maxium priority.
        cout<<pq3.top()<<" ";
        pq3.pop();
    }


    return 0;
}