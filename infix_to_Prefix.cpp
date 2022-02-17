#include<bits/stdc++.h>
using namespace std ;




int main(){
    string infix = "(x+y)*(z/w+u)", prefix = "" ;

    reverse(infix.begin(), infix.end()) ;
    for(char &ch: infix){
        if(ch == '(') ch = ')' ;
        else if(ch == ')') ch = '(' ;
    }

    prefix = get_postfix(infix) ;
    reverse(prefix.begin(), prefix.end()) ;

    cout<< prefix << endl ;
    
    return 0 ;
}