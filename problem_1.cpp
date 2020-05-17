#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll permute(string str,ll b) 
{ 
    // Sort the string in lexicographically 
    // ascennding order 
    sort(str.begin(), str.end()); 
    ll max=0;
    // Keep printing next permutation while there 
    // is next permutation 
    do { 
      
        if(stoll(str)<b&&stoll(str)>max)
            max=stoll(str);
    } while (next_permutation(str.begin(), str.end())); 
    return max;
} 
int main() {
    string a;
     ll b;/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     cin>>a>>b;
     ll ans=permute(a,b);
     cout<<ans<<endl;
    return 0;
}

