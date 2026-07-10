#include <string>

class Solution 
{
public:
    std::string to_lower_case(std::string s) 
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 32;
        }
        return s;
    }
};