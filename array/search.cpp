// 给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。
//  有序+无重复=二分查找
#include <iostream>
#include <vector>
using namespace std;

class solution{
public:
    int search(vector<int>& nums, int target){
        int left =0;
        int right =nums.size()-1;
        while (left<=right){
            int mid =left + ((right-left)/2);
            if (nums[mid]>target){
                right = mid-1;
            }else if (nums[mid]<target){
                left =mid +1;
            }else{
                return mid;
            }
        }
        return -1;

        }
};

int main(){
    solution s;
    int arr[6]={0,1,2,3,4,5};
    vector<int> num(arr,arr+5);
    int target = 3;
    int ans=s.search(num,target);
    cout << ans <<endl;

}
