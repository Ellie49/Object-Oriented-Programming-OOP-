#include<bits/stdc++.h>
using namespace std;
using ll  = long long;
ll c=45;
int main(){
    //****************** build in data types******************
    // scope resulation operator
    ll a,b,c;
    cin >> a >> b; // 2 3
    c=a+b;
    cout << "The sum of a and b is c = " << c << endl;  // 5
    cout << "The global c is = " <<::c << endl; // 45

    //******************float double and long double literals******************
    float d= 34.4f;
    long double e = 34.4L;
//in c++,any decimal point(34.4) will be considered by default as double,so to determined it as float or long double should be followed by f or F ,l or L
    cout << "The size of 34.4 is " << sizeof(34.4) << endl; //8 (size of double)
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl; //4 (size of float)
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl; // 4 (size of float)
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl; //16 (size of long double)
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl; //16 (size of long double)
    cout << "The value of d and e is " << d << " " << e << endl; // 34.4 34.4

    //******************reference variable******************
    // Farhana--> ellie ---> faru --- > dangerous coder xD
    float x =455;
    float & y=x;
    cout << x << " " << y << endl;

}
