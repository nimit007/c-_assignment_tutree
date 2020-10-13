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
    string s1,s2;
    cin >> s1 >> s2;
    int n1=s1.length();
    int n2=s2.length();

    if(n1<n2){
     cout << "INVALID INPUT";
        return 0;
    }
    for (int i=0;i<=n1-n2;i++){
		if(is_permutation(s1.begin()+i,s1.begin()+i+n2,s2.begin()))
			cout << "substring " << s1.substr(i,n2) <<" present at index " << i << '\n';
	}

return 0;
}
