#include <bits/stdc++.h>
using namespace std;

int top = -1;

int push(int Stack[], int n){
    Stack[++top] = n;
    return 0;
}

int pop(){
    top--;
    return 0;
}

int prec(char c){
    if(c == '^')
        return 3;
    else if(c == '/' || c == '*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}

int main(){
    string infix, postfix = "";
    cin >> infix;
    int Stack[infix.size()];

    for(int i=0; i<infix.size(); i++){
        char c = infix[i];

        if(c>='a' && c<='z' || c>='A' && c<='Z' || c>='0' && c<='9')
            postfix += c;
        else if(c == '(')
            push(Stack, c);
        else if(c == ')'){
            while(Stack[top] != '('){
                postfix += Stack[top];
                pop();
            }
            pop();
        }
        // -----------------------------------------
        else if(top != -1 && prec(c) > prec(Stack[top]) || Stack[top] == '(')
            push(Stack, c);
        else if(prec(c) < prec(Stack[top])){
            while(prec(c) <= prec(Stack[top])){
                if(Stack[top] == '(' || Stack[top] ==')'){
                    push(Stack, c);
                    break; //check
                }
                else{
                    postfix += Stack[top];
                    pop();
                }    
            }
            // push(Stack, c); //if break used above, remove this
        }
    } //for
    while(top != -1){
        postfix += Stack[top];
        pop();
    }
    cout << postfix << endl;
    return 0;
}
