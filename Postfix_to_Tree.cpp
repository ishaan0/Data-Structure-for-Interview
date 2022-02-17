#include<bits/stdc++.h>
using namespace std ;


struct node{
    char value ;
    node* left ;
    node* right ;
    node(){left = right = NULL;}
    node(char ch){
        this->value = ch ;
        left = right = NULL ;
    }
};

void inorder(node* cur){
    if(cur == NULL) return ;

    inorder(cur->left) ;
    cout<< cur->value ;
    inorder(cur->right) ;
}

bool isOperator(char ch){
    switch(ch){
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
            return true ;
    }
    return false ;
}

int main(){
    string postfix = "ab*c/ef/g*+k+xy*-" ;

    stack<node*> st ;
    node *x, *y, *z ;

    for(int i = 0; i < postfix.size(); i++){
        char ch = postfix[i] ;
        if(isOperator(ch)){
            z = new node(ch) ;
            x = st.top() ; st.pop() ;
            y = st.top() ; st.pop() ;
            z->left = y ; z->right = x ;
            st.push(z) ;
        }
        else{
            z = new node(ch) ;
            st.push(z) ;
        }
    }

    inorder(st.top()) ;
    
    return 0 ;
}