#include<bits/stdc++.h>
using namespace std ;

const int N = 100 ;

struct my_stack{
    int top, elements[N] ;
    my_stack(){top = 0;}

    bool push(int value){
        if(top == N) return false ;
        elements[top++] = value ;
        return true ;
    }

    int pop(){
        if(top == 0) return -1 ;
        return elements[--top] ;
    }

    bool isEmpty(){ return top == 0; }
};

int main(){

    my_stack stk ;

    cout<< stk.push(1) << endl ;
    cout<< stk.push(2) << endl ;
    cout<< stk.push(3) << endl ;
    cout<< stk.push(4) << endl ;
    cout<< stk.push(5) << endl ;
    cout<< stk.push(6) << endl ;

    cout<< stk.isEmpty() << endl ;

    cout<< stk.pop() << endl ;
    cout<< stk.pop() << endl ;
    cout<< stk.pop() << endl ;
    cout<< stk.pop() << endl ;
    cout<< stk.pop() << endl ;
    cout<< stk.pop() << endl ;

    cout<< stk.isEmpty() << endl ;


    return 0 ;
}