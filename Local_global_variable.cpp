#include<bits/stdc++.h>
using namespace std;
using ll  = long long;

ll glo=6; // global variable
void sum(){
    cout << glo << endl;
}
int main(){
   ll glo = 7; // local variable
    glo = 78;
    cout << glo << endl;
    sum();
    cout << glo << endl;
}
