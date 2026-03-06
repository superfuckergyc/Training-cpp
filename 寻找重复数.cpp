#include<iostream>
#include<vector>
int findDuplicate(vector<int>& nums) {
    int slow=0,fast=0;
    do{
        slow=nums[slow];
        fast=nums[nums[fast]];
    }while(slow!=fast);
    slow=0;
    while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
    }
    return slow;
}
int main(){
    vector<int> nums;
    int num;
    while(cin>>num){
      nums.push_back(num);
    }
    int res=findDuplicate(nums);
    cout<<res<<endl;
    return 0;
}
