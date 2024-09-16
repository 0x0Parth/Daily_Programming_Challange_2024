#include <bits/stdc++.h>
using namespace std;

string reverseString(string s)
{
    vector<string> words;
    string word;
    stringstream ss(s);

    while (ss >> word)
    {
        words.push_back(word);
    }
    reverse(words.begin(), words.end());
    string ans = "";
    for (int i = 0; i < words.size(); i++)
    {
        ans += words[i];
        if (i < words.size() - 1)
        {
            ans += ' ';
        }
    }

    return ans;
}
int main()
{
    string str = "the sky is blue";
    cout << "Resultant String : " << reverseString(str) << endl;
    return 0;
}

/*
Day 8 of 30 🗓

Problem : Reverse a String Word by Word
You are given a string s that consists of multiple words separated by spaces. Your task is to reverse the order of the words in the string. Words are defined as sequences of non-space characters. The output string should not contain leading or trailing spaces, and multiple spaces between words should be reduced to a single space.

Input :
A string s of length n (1 ≤ n ≤ 10^4) consisting of letters, digits, punctuation, and spaces.
Example : "the sky is blue"

Output :
* A string where the words in s are reversed, with a single space separating the words, and no leading or trailing spaces.
Example: "blue is sky the"
*/