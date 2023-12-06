#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int count_vowel = 0, count_consonant = 0;
        bool isPossible = true;
        for (int i = 0; i < 8; i++)
        {
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                if (i == 1 || i == 3 || i == 5)
                {
                    count_vowel++;
                }
                else
                {
                    isPossible = false;
                    break;
                }
            }
            else
            {
                if (i == 0 || i == 2 || i == 4 || i == 7 || i == 6)
                {
                    count_consonant++;
                }
                else
                {
                    isPossible = false;
                    break;
                }
            }
        }
        if (count_vowel == 3 && count_consonant == 5 && isPossible == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
