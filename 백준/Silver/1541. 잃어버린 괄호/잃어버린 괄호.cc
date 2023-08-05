/**
 * [SILVER 2] 잃어버린 괄호
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);

int main(void){
    string str;
    long long result = 0;
    cin >> str;
    string num;
    bool isMinus = false;
    // parcing 필요
//    cout << "size of string : "<<str.length()<<"\n";
    for(int i = 0;i<=str.length();i++){
        if(str[i]=='+'||str[i]=='-'|| i  == str.length()){
            if(isMinus){
                result -=stoi(num);
                num = "";
            }
            else {
                result += stoi(num);
                num = "";
            }
        }
        else{
            num +=str[i];
        }
        if(str[i] == '-' ){
            isMinus = true;
        }
    }
    cout << result;
    return 0;
}