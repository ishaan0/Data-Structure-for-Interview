#include<bits/stdc++.h>
using namespace std ;

int prec(char ch){
    if(ch == '^') return 3 ;
    else if(ch == '*' || ch == '/') return 2 ;
    else if(ch == '+' || ch == '-') return 1 ;
    else return -1 ;
}


int main(){
    string infix = "a+b*(c^d-e)^(f+g*h)-i", postfix = "" ;

    stack<char> st ;

    for(int i = 0; i < infix.size(); i++){
        char ch = infix[i] ;
        if(isalnum(ch)) postfix += ch ;
        else if(ch == '(') st.push(ch) ;
        else if(ch == ')'){
            while(st.top() != '('){
                postfix += st.top() ;
                st.pop() ;
            }
            st.pop() ;
        }
        else{
            while(!st.empty() && prec(st.top()) >= prec(ch)){
                postfix += st.top() ;
                st.pop() ;
            }
            st.push(ch) ;
        }
    }

    while(!st.empty()){
        postfix += st.top() ;
        st.pop() ;
    }

    cout<< postfix << endl ;
    
    return 0 ;
}