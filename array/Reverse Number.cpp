#include<bits/stdc++.h>
using namespace std;
int reverseNumber(int n){
    int num=0;
    while(n>0){
        int r=n%10;
        num=num*10+r;
        n/=10;
    }
    return num;
}
int main(){
    int n=122345;
    cout<<reverseNumber(n);
}