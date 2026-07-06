//#include <vector>
//
//class Solution 
//{
//public:
//    std::vector<double> convert_temperature(double celsius)
//    {
//        std::vector<double> ans;
//        ans.push_back(celsius + 273.15);
//        ans.push_back(1.80 * celsius + 32.00);
//        return ans;
//    }
//};
//
////你过关
// 
////这边还有更简洁的做法
//#include <vector>
//
//class Solution 
//{
//public:
//    std::vector<double> convert_temperature(double celsius)
//    {
//        return { celsius + 273.15, celsius * 1.80 + 32.00 };
//    }
//};