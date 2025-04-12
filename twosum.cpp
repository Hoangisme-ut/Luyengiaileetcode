/* Giai bai toan voi do phuc tap O(n^2)*/
#include <iostream>
using namespace std;
void twoSum(int nums[],int size, int target)
{
    for(int i=0;i<size;i++){
        for(int j=1;j<size; j++){
            if(( nums[i]+nums[j]==target)) { 
                cout<<i<<"   "<<j<<endl;
                return;
            }
        }
    }
}
int main(){
    int target =9;
    int num[]={2,6,11,15,7};
    int size=sizeof(num);
    twoSum(num,size,target);
 return 0;
}
/*  còn đây là cách giải với độ khó O(n)
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> numMap; // Lưu số đã duyệt và vị trí của nó
            for (int i = 0; i < nums.size(); i++) {
                int complement = target - nums[i]; // Số cần tìm
                if (numMap.find(complement) != numMap.end()) {
                    return {numMap[complement], i}; // Trả về chỉ số của hai số
                }
                numMap[nums[i]] = i; // Lưu số hiện tại vào map
            }
            return {}; // Trường hợp không xảy ra vì đề bài đảm bảo có kết quả
        }
    };
    */