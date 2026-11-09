#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{

    string s1,s2;
    cout << "Enter 1st string ";
    cin >> s1;
    cout << "Enter 2nd string ";
    cin >> s2;

    int m=s1.length();
    int n=s2.length();

    int dp[m+1][n+1];
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1])
            {
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
            }
        }

    }
    cout << "LCS Length " << dp[m][n] <<endl;

    string LCS = "";

    int i=m;
    int j=n;
    while (i >0 && j>0)
    {
        if(s1[i-1]==s2[j-1])
        {
            LCS+= s1[i-1];
            i--;
            j--;
        }
        else if (dp[i-1][j]>dp[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }

    reverse(LCS.begin(),LCS.end());

    cout << "Longest common Subsequence " << LCS <<endl;
    return 0;

}
