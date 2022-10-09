#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
 
// Expand in both directions of `low` and `high` to find all palindromes
void expand(string str, int low, int high, auto &set)
{
    // run till `str[low.high]` is not a palindrome
    while (low >= 0 && high < str.length() && str[low] == str[high])
    {
        // push all palindromes into a set
        set.insert(str.substr(low, high - low + 1));
 
        // Expand in both directions
        low--, high++;
    }
}
 
// Function to find all unique palindromic substrings of a given string
void findPalindromicSubstrings(string str,vector<string> &v)
{
    // create an empty set to store all unique palindromic substrings
    unordered_set<string> set;
 
    for (int i = 0; i < str.length(); i++)
    {
        // find all odd length palindrome with `str[i]` as a midpoint
        expand(str, i, i, set);
 
        // find all even length palindrome with `str[i]` and `str[i+1]` as
        // its midpoints
        expand(str, i, i + 1, set);
    }
 
    // print all unique palindromic substrings
    
    for (auto i: set) {
        v.push_back(i);
    }
}
 
int main()
{
    string str = "google";
    vector<string> v;
    findPalindromicSubstrings(str,v);

    for(auto i:v){
        cout<<i<<endl;
    }
 
    return 0;
}
