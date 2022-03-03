#include <iostream>
using namespace std;
int main() {                       //print no. till n but not exide then 10
    int n;
    int i=1;
    cin>>n;
    while ( i <= 10 ){
        if ( i == n ){
            break;                  //break statement terminate the loop
        }
        cout<<i<<' ';
        i = i+1 ;
    }
}
