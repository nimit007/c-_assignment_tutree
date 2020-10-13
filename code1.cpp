#include <bits/stdc++.h>
#define iamspeed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define mod 1000000007
#define mxm INT_MAX
#define mnm INT_MIN
using namespace std;

int main(){
   iamspeed
   int n=7;
   for(int i=1;i<=2*n-1;i++){
       if(i<=n){
            for(int j=1;j<i;j++)
                cout << " ";
    for(int j=i;j<=n;j++){
        cout << j << " ";
    }
       }
   else{
        for(int k=i-n+1;k<n;k++)
        cout << " ";
    for(int k=n;k<=i;k++){
        cout << k-i+n << " ";
    }
   }
    cout << endl;
   }

    return 0;
}
