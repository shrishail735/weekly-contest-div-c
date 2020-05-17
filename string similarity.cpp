#include <bits/stdc++.h>

using namespace std;

// Complete the stringSimilarity function below.
int stringSimilarity(string s) {
 int ll=0;
    int lll=0;
    ll+=s.length();
   int i=0;
        for(int j=1;s[j]!='\0';j++)
        {
            for(int k=j;s[k]!='\0';k++)
            {
                if(s[k]==s[i])
        {
            i++;
            lll++;
        }
        else{
            
            break;
        }
            }
            ll+=lll;
            i=0;
            lll=0;
        
        }
    
   return ll;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        int result = stringSimilarity(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

