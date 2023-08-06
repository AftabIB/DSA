#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
vector<string> solve(string s)
{
    vector<string> ans;
    long long a = pow(2, s.length());
    for (int i = 0; i < a; i++)
    {
        string output = "";
        int k = 0;
        int p = i;
        while (p != 0)
        {
            if (p & 1)
            {
                output.push_back(s[k]);
            }
            k++;
            p = p >> 1;
        }
        ans.push_back(output);
    }
    return ans;
}
int main()
{
    string s;
    cin >> s;
    vector<string> ans;
    ans = solve(s);
    for (string x : ans)
        cout << x << " ";
    return 0;
}