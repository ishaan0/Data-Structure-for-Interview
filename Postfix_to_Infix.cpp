#include<bits/stdc++.h>
using namespace std ;

bool isOperator(char ch){
    switch (ch) {
      case '+':
      case '-':
      case '/':
      case '*':
      case '^':
      case '%':
        return true;
  }
  return false;
}


int main(){
    string postfix = "ab*c+", infix = "" ;
    stack<string> st ;

    for(int i = 0; i < postfix.size(); i++){
        char ch = postfix[i] ;

        if(isOperator(ch)){
            string op1 = st.top() ; st.pop() ;
            string op2 = st.top() ; st.pop() ;
            string new_operand = "(" + op2 + ch + op1 + ")" ;
            st.push(new_operand) ;
        }
        else st.push(string(1, ch)) ;
    }

    cout<< st.top() << endl ;
    
    return 0 ;
}