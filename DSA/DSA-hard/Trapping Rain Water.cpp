#include<bits/stdc++.h>
using namespace std;




int main(){
    int n ; cout << "Nhap n: " ; cin >> n;
    int a[n]; int V=0;
    int left = 0 ; 
    int right = n-1;
    int left_max=0, right_max=0;
    int k ; cout << "Nhap cac so lieu: " ;
    for (int i=0 ; i<n ; i++){
        cin >> k;
        a[i] = k;
    }
    // đặt 2 con trỏ ở 2 đầu , bắt đầu duyệt từ 2 đầu đến khi gặp nhau hoặc có giá trị bằng nhau ở cùng 1 vị trí 
    while(left < right){
        // so sánh giá trị hiện tại với giá trị trước đó , tự động lưu giá trị lớn hơn 
        left_max = max(left_max , a[left]) ;
        right_max = max(right_max , a[right]) ;

        if(left_max < right_max){
            // vì cột phải cao hơn cột trái nên tính bên trái , bên trái thấp hơn -> đó mới là phần chứa nước 
            cout << 1 << endl;
            // left_max có thể đang giữ giá trị của cột lớn hơn trc đó - đi giá trị của cột hiện tại sẽ ra đc khoảng cách lõm xuống là x*1cm
            // left_max cũng có thể đang chứa giá trị của cột hiện tại nếu cột hiện tại đang cao hơn cột trc đó ( xét 2 cột nằm cạnh nhau)
            int temp_v = left_max - a[left];
            left ++;
            V+= temp_v;
            // cout << temp_v << " - " << V << endl;
        }
        // else 
        else if(left_max >= right_max){
            cout << 2 << endl;
            // right_max đang giữ giá trị của cột lớn hơn trc đó - đi giá trị của cột hiện tại sẽ ra đc khoảng cách lõm xuống là x*1cm
            int temp_v = right_max - a[right];
            right --;
            V+= temp_v;
            // cout << temp_v << " - " << V << endl;
        }
    }
    cout << V << endl;
    


































    
    return 0;
}