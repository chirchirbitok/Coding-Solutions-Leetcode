#include <iostream>
#include <string>
using namespace std;

int CommonSubsequencesCount(string s, string t){
    int n1 = s.length();
    int n2 = t.length();
    int dp[n1+1][n2+1];
    int k =0;
    for (int i=0; i<=n1; i++)
    {
        for (int j=0; j<=n2; j++)
        {
            dp[i][j];
        }
        
    }

    for(int i=1; i<=n1; i++){
        for (int j=1; j<=n2; j++)
        {
            if (s[i-1] == t[j-1])
            {
               
                k = k +1; 
            }
            
        }
        
    }
    


return k;
}

int main(){
    string s = "ajblqcpdz";
    string t = "efcnbtdi";
    cout << CommonSubsequencesCount(s, t);
    return 0;
}