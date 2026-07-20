#include<bits/stdc++.h>
using namespace std;

// sắp xếp 3 màu tương ứng với 3 số 0 1 2 mà ko dùng sort 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0 ; int r = nums.size()-1 ; int mid = 0;
        while(mid <= r){ // tăng từ 0 đến r là đủ r , ko cần phải quét hết vector vì chỗ r đi qua đã sort rồi
            // 0 luôn ở bên trái nên đưa về đằng trước
            if (nums[mid] == 0 ){
                swap(nums[mid] , nums[l]);
                l++;

            }
            // 2 luôn ở bên phải nên đưa 2 về đằng sau cùng
            else if(nums[mid] == 2){
                swap(nums[mid] , nums[r]); 
                r--; mid --; // r giảm nma mid ko thể giảm vì chưa bt r đã swap số nào cho mid nên phải duyệt cả mid hiện tại 
                // bên ngoài sẽ mid++ , ở đây -- để tự triệt tiêu nhau , nếu 2 đứng đầu thì code sập . 
            }
            else if(nums[mid] == 1)  cout << 1 << endl;
            // mid = 1 thì ở giữa , đứng im thui , 2 cái kia đổi chỗ thì tự đẩy nhau nên 
            // 1 tự động nằm ở giữa luôn 
            mid++; // = bao nhiêu thì cũng phải tăng mid
        }
        // hàm void thì chả return j cả , tí thì lại kêu sao lại lỗi ;))
    }
};


int main(){
    vector<int> v = {1,2,0,1,2,2,2,1,0,2,0,1,1,0,0,2,1,0};
    Solution sol ;
    sol.sortColors(v);
    for(int x: v)
        cout << x << " " ;

    return 0;
}

