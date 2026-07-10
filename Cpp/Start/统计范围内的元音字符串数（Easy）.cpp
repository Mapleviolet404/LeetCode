#include <vector>
#include <string>

class Solution 
{
public:
    bool is_vowel(char c)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }

    int vowel_strings(std::vector<std::string>& words, int left, int right) 
    {
        int ans = 0;
        for (int i = left; i <= right; ++i)
        {
            int first_letter_is_vowel = is_vowel(words[i][0]); 
            int last_letter_is_vowel = is_vowel(words[i][words[i].size() - 1]);
            if (first_letter_is_vowel == 1 && last_letter_is_vowel == 1) ans++;
        }
        return ans;
    }
};