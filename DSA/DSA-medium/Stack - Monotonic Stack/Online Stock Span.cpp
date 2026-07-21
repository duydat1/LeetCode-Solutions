#include<bits/stdc++.h>
using namespace std;

class StockSpanner {
private:
    stack<pair<int,int>> st;
public:
    StockSpanner() {
        // bài này tức là nếu tính từ ngày hôm nay ,nếu giá của ngày hôm nay >= giá của các ngày trước đó thì đếm xem có bao nhiêu ngày 
        // nếu không có ngày nào có giá <= giá ngày hôm này thì chỉ có ngày hôm đấy thui thì = 1
    }
    
    int next(int price) {

        int span = 1; // mắc định số ngày liên tiếp <= là = 1 (chính là bản thân nó luôn )
        while(!st.empty() && st.top().first <= price){ // check giá để tăng spam 
            span += st.top().second;
            st.pop();
        }
        st.push(make_pair(price,span)); // thêm dữ liệu vào st 
        return span;
    }
};

int main() {
    StockSpanner sp;
    int n;
    cout << "Nhap so ngay: ";
    cin >> n;

    cout << "Nhap gia tung ngay:\n";
    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        cout << "Span cua ngay " << i+1 << " (gia = " << price << ") = "
            << sp.next(price) << endl;
    }
}
