#include <stdio.h>
#include <math.h>
#include <string.h> 
#include <ctype.h>
#include <stdlib.h>
char A[20],P[20];
char S[20]; //for conversion
int S1[20];//for evaluation
int top =-1;
int top1 =-1;

int precedence(char c ){  //to check precedence
    switch(c){
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
}
void infixToPostfix(){
    int i=0,j=0;
    char x,y;
    while(A[i]!=0){
        if(isdigit(A[i])){
            P[j++]=A[i] ;
        }
        else if(A[i]=='('){
            S[++top]=A[i];
        }
        else if(A[i]==')'){
            while(S[top]!='('){
                P[j++]=S[top--];
            }
            top--;
        }
        else{
            x=A[i];
            y=S[top];
            if(top==-1 || y=='(' || precedence(y)<precedence(x) ){
                S[++top]=A[i];
            }else{
                while(y!='(' && top!=-1 && precedence(y)>=precedence(x)){ //pop until precedence is less than x or stack is empty or y is (
                    P[j++]=S[top--];
                    y=S[top];
                }
                S[++top]=A[i];
            }
        }
        i++;
    }
    while (top!=-1){ //pop remaining elements
        P[j++]=S[top--];
    }
    P[j]='\0'; //null terminate
    printf("Postfix expression is %s",P);
    
}
void postfixEval(){
    int i,op1,op2,result;
    char str[10];
    for(i=0;i<strlen(P);i++){
        if(isdigit(P[i])){
            str[0]=P[i]; //convert char to string
            str[1]='\0'; //null terminate
            S1[++top1]=atoi(str); //convert string to int and push
        }else{
            op2=S1[top1--];
            op1=S1[top1--];
            switch(P[i]){
                case '+':
                    result=op1+op2;
                    break;
                case '-':
                    result=op1-op2;
                    break;
                case '*':
                    result=op1*op2;
                    break;
                case '/':
                    result=op1/op2;
                    break;
                case '^':
                    result=pow(op1,op2);
                    break;
            }
            S1[++top1]=result;
        }
    }
    printf("\nResult=%d",S1[0]);
}

void main(){
    printf("Enter the infix expression: ");
    scanf("%s",A);
    infixToPostfix();
    postfixEval();
}