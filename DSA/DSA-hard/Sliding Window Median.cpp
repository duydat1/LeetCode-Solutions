#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double> ans;
        multiset<int> small , large ;
        // xử lý với k phần tử đầu 
        for(int i=0 ; i<k ; i++){
            small.insert(nums[i]);
            large.insert(*small.rbegin());
            small.erase(--small.end());
            if(large.size() > small.size()){
                small.insert(*large.begin());
                auto temp = large.begin();
                large.erase(temp);
            }
        }
        if(small.size() == large.size())
            ans.push_back(((double)*small.rbegin() + *large.begin())/2);
        else 
            ans.push_back(*small.rbegin());
        // trượt cửa sổ đến các vị trí còn lại
        for(int i=k ; i<nums.size() ; i++){
            int xoa = nums[i-k];
            auto it = small.find(xoa);
            if (it != small.end()) {
                small.erase(it); // Tìm thấy bên small thì xóa luôn bằng iterator
            } else {
                large.erase(large.find(xoa)); // Không thấy thì chắc chắn nằm bên large
            }
            // xóa xong các phần tử đằng trước thì thêm các phần tử đằng sau vào thui
            small.insert(nums[i]);
            large.insert(*small.rbegin());
            small.erase(--small.end());
            if(large.size() > small.size()){
                small.insert(*large.begin());
                auto temp = large.begin();
                large.erase(temp);
            }
            if(small.size() == large.size())
                ans.push_back(((double)*small.rbegin() + *large.begin())/2);
            else 
                ans.push_back(*small.rbegin());
        }
        return ans;
    }
};

int main() {
    int n, k;
    cout << "Nhap n va k: ";
    cin >> n >> k;
    vector<int> nums(n);
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    // OOP 
    Solution s;
    vector<double> result = s.medianSlidingWindow(nums, k);

    cout << "Ket qua cac trung vi: ";
    for (double x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
