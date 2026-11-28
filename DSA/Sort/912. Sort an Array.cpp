#include<bits/stdc++.h>
using namespace std;

//MEDIUM

class Solution { // MERGE SORT 
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> temp(nums.size());
        mergeSort(nums, 0, nums.size() - 1, temp);
        return nums;
    }

    void mergeSort(vector<int>& a, int l, int r, vector<int>& temp) {
        if (l >= r) return;
        int mid = l + (r - l) / 2;
        mergeSort(a, l, mid, temp);
        mergeSort(a, mid + 1, r, temp);
        
        int i = l, j = mid + 1, k = l;
        while (i <= mid && j <= r) {
            if (a[i] <= a[j]) temp[k++] = a[i++];
            else temp[k++] = a[j++];
        }
        while (i <= mid) temp[k++] = a[i++];
        while (j <= r) temp[k++] = a[j++];
        
        for (int p = l; p <= r; p++) a[p] = temp[p];
    }
};

int main(){     
        
    
    return 0 ;
}






