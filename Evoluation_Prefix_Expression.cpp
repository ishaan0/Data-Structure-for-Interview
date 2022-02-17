#include<bits/stdc++.h>
using namespace std ;




int main(){
    string prefix = "+9*26" ;
    stack<double> st ;
    
    for(int i = (int)prefix.size()-1; i >= 0; i--){
        char ch = prefix[i] ;

        if(isdigit(ch)) st.push(ch-'0') ;
        else{
            double op1 = st.top(); st.pop() ;
            double op2 = st.top(); st.pop() ;

            switch(ch){
                case '+':
                    st.push(op1 + op2) ;
                    break ;
                case '-':
                    st.push(op1 - op2) ;
                    break ;
                case '*':
                    st.push(op1 * op2) ;
                    break ;
                case '/':
                    st.push(op1 / op2) ;
                    break ;
            }
        }
    }

    cout<< fixed << setprecision(5) << st.top() << endl ;
    
    return 0 ;
}