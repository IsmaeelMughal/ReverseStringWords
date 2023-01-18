//Given a String S, reverse the string without reversing its individual words.Words are separated by dots.
//{ Driver Code Starts
//#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    //Function to reverse words in a given string.
    string reverseWords(string S)
    {
        string word = "";
        string reversedString = "";
        // code here 
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] != '.')
            {
                word += S[i];
            }
            else
            {
                if (reversedString == "")
                {
                    reversedString = word;
                }
                else
                {
                    reversedString = word + "." + reversedString;
                }
                word = "";
            }
        }
        reversedString = word + "." + reversedString;
        S = reversedString;
        return S;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends