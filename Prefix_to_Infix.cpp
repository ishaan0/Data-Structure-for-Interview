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
    string prefix = "*-A/BC-/AKL", infix = "" ;
    stack<string> st ;

    for(int i = (int)prefix.size()-1; i >= 0; i--){
        char ch = prefix[i] ;

        if(isOperator(ch)){
            string op1 = st.top() ; st.pop() ;
            string op2 = st.top() ; st.pop() ;
            string new_operand = "(" + op1 + ch + op2 + ")" ;
            st.push(new_operand) ;
        }
        else st.push(string(1, ch)) ;
    }

    cout<< st.top() << endl ;
    
    return 0 ;
}