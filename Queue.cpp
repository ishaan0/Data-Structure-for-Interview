#include<bits/stdc++.h>
using namespace std ;

const int N = 6 ;

struct my_queue{
    int head, tail, elements[N] ;
    my_queue(){head = tail = 0; }

    bool enqueue(int value){
        if((tail+1)%N == head) return false ;
        elements[tail++] = value ;
        tail %= N ;
        return true ;
    }

    int dequeue(){
        if(tail == head) return -1 ;
        int item = elements[head++] ;
        head %= N ;
        return item ;
    }

    bool isEmpty(){ return head == tail; }
};


int main(){

    my_queue q ;

    cout<< q.enqueue(1) << endl ;
    cout<< q.enqueue(1) << endl ;
    cout<< q.enqueue(1) << endl ;
    cout<< q.enqueue(1) << endl ;
    cout<< q.enqueue(1) << endl ;
    cout<< q.enqueue(1) << endl ;
    
    cout<< q.isEmpty() << endl ;

    cout<< q.dequeue() << endl ;
    cout<< q.dequeue() << endl ;
    cout<< q.dequeue() << endl ;
    cout<< q.dequeue() << endl ;
    cout<< q.dequeue() << endl ;
    cout<< q.dequeue() << endl ;

    cout<< q.isEmpty() << endl ;


    return 0 ;
}