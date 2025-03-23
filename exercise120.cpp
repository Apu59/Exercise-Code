
#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    string p;
    cin>>p;
    
    int l = p.size();
    stack<int> stk;
    
    for(int i = 0; i < l; i++){
        
        if(isdigit(p[i])){
            stk.push(p[i] - '0');
        }else if(p[i] == '+'){
            int b = stk.top();
            stk.pop();
            int a = stk.top();
            stk.pop();
            stk.push(a+b);
        }else if(p[i] == '-'){
            int b = stk.top();
            stk.pop();
            int a = stk.top();
            stk.pop();
            stk.push(a-b);
        }else if(p[i] == '*'){
            int b = stk.top();
            stk.pop();
            int a = stk.top();
            stk.pop();
            stk.push(a*b);
        }else if(p[i] == '/'){
            int b = stk.top();
            stk.pop();
            int a = stk.top();
            stk.pop();
            if(b != 0){
                stk.push(a / b);
            }else{
                cout<<"Can't divide by 0."<<endl;
            }
        }else{
            cout<<"Invalid expression. "<<endl;
        }
    }
    
    cout<<"Result : "<<stk.top()<<endl;
    
    return 0;
}