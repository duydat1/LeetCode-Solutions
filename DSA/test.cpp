#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {4,5,6,7,0,1,2};
    int l = 0 ; 
        // tìm vị trí của mảng bị cắt
        while(nums[l] < nums[l+1]){
            l++;
            if(nums[l+1] < nums[l]){
                cout << nums[l] << " " << nums[l+1] <<  endl;

            }
        }


    return 0;
}