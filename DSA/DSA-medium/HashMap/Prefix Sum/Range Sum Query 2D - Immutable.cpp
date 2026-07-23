#include<bits/stdc++.h>
using namespace std;

// tốc độ là O(1)
class NumMatrix {
    vector<vector<int>> ans; // ko nền dùng pair
public:
    NumMatrix(vector<vector<int>>& matrix) {
        // đầu tiên sẽ phải thêm rất nhiều vector để tạo thành 1 ma trận 
        int n = matrix.size(); // số lượng vector = số hàng 
        int m = matrix.empty() ? 0: (int)matrix.front().size(); // số cột , toán tử 3 ngôi 
        // matrix có rỗng ko , 0 thì = matrix[0].size() // matrix[0],size() là đang đếm số cột = số lượng phần tử trong vector[0] 
        ans.resize(n+1 , vector<int>(m+1 , 0));
        for( int i=0 ; i<n ; i++)
            for(int j=0 ; j<m ; j++)
                ans[i+1][j+1] = ans[i+1][j] + ans[i][j+1] + matrix[i][j] - ans[i][j]; // prefix sum
                // tính toán cộng dồn hết lại từ đầu đến cuối ma trận , + full luôn 
                // ans[i+1][j] = [0][0] + [1][0]
                //ans[i][j+1] = [0][0] + [0][1]
                //matrix[i][j] = số đầu tiên của vector[i] 
                //ans[i][j] = [0][0] // 2 cái trên + [0][0] nên phải - đi 1 cái 
    }
    // cột trước hàng sau , ma trận 
    int sumRegion(int row1, int col1, int row2, int col2) {
        // sau khi tạo đc thành 1 ma trận rồi thì sẽ lấy vị trí rồi trừ bớt đi thui
        return ans[row2+1][col2+1] - ans[row2+1][col1] - ans[row1][col2+1] + ans[row1][col1];
        // khá rối não , làm nhiều thì quen 
    } // [3][3]-[3][1]-[1][3]+[1][1]
};

int main(){

    vector<vector<int>> v= {{3, 0, 1, 4, 2}, {5, 6, 3, 2, 1}, {1, 2, 0, 1, 5}, {4, 1, 0, 1, 7}, {1, 0, 3, 0, 5}};
    NumMatrix *num = new NumMatrix(v);
    int result = num->sumRegion(1, 1, 2, 2);
    
    cout << result;
    delete num;

    
    return 0 ;
}