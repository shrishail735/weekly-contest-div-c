#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
 #include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,bun,bp,cc;
    int h,ch;
    cin>>t;
    while(t--)
    {
        int cost=0;
        cin>>bun>>bp>>cc;
        cin>>h>>ch;
        if(h>=ch&&bun>1)
        {
            if(bun>=(bp*2))
            {
                cost=bp*h;
                bun=bun-(bp*2);
            }
            else
            {
                cost=(bun/2)*h;
                bun=0;
            }
           if(bun>1)
           {
               if(bun>=(cc*2))
            {
                cost+=cc*ch;
                bun=bun-(cc*2);
            }
            else
            {
                cost+=(bun/2)*ch;
                bun=0;
            }
           }
         cout<<cost<<endl;
                
        }
        else if(ch>=h&&bun>1)
        {
             if(bun>=(cc*2))
            {
                cost=cc*ch;
                bun=bun-(cc*2);
            }
            else
            {
                cost=(bun/2)*ch;
                bun=0;
            }
            if(bun>1)
            {
                if(bun>=(bp*2))
            {
                cost+=bp*h;
                bun=bun-(bp*2);
            }
            else
            {
                cost+=(bun/2)*h;
                bun=0;
            }
            }
           cout<<cost<<endl;
        }
        
        else
            cout<<"0"<<endl;
       // cout<<"cost"<<endl;
    }
    
    
    return 0;
}

