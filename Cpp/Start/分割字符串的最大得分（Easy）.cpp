#include <string>

int max(int a, int b)
{
    return a > b ? a : b;
}

class Solution 
{
public:
    int max_score(std::string s) 
    {
        int ans = 0, prev_score = 0;
        if (s[0] == '0') prev_score++;
        for (int i = 1; i < s.size(); ++i) if (s[i] == '1') prev_score++;
        ans = prev_score;
        for (int i = 1; i < s.size() - 1; ++i)
        {
            if (s[i] == '0') prev_score++;
            else prev_score--;
            ans = max(ans, prev_score);
        }
        return ans;
    }
};