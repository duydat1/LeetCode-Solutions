#include<bits/stdc++.h>
using namespace std;


int main(){
    int n ; cout << "Nhap n: " ; cin >> n;
    stack<int> cc ; int a[n];
    int S_temp , S_max = 0;
    int k ; cout << "Nhap chieu cao cac cot : " ;
    int i =0;
    for (int z=0 ; z<n ; z++){
        cin >> k;
        a[z] = k;

    }
    while(i<n){
        if(cc.empty() || a[i] >= a[cc.top()]){
            // trong stack đang lưu các index chứ ko lưu giá trị , giá trị lưu trong mảng a
            cc.push(i);
            i++;
            cout << "1" << endl;
        }
        else{
            int index = cc.top();
            cc.pop();
            cout << "2" << endl;
            //nếu xóa đi mà đằng trước nó(cận bên trái) mà stack rỗng thì tức là cái cc.top() (2 dòng trên là chiều cao của cột)
            // cũng là cận bên trái luôn thì diện tích của nó chính = chiều cao của nó *1 
            if(cc.empty()){
                S_temp = i * a[index] ;
                cout << "3" << endl;
                if (S_temp >S_max){
                    S_max = S_temp;
                    cout << "4" << endl;
                }
            }
            // Nếu xóa đi mà vẫn còn thì tính diện tích với độ dài đáy = i tại thời điểm này - cái top() hiện tại - 1
            // top() hiện tại luôn là 1 index chứ ko phải giá trị ( ĐỪNG CÓ NHỚ NHẦM :((( )
            else{
                cout << "5" << endl;
                S_temp = a[index] * (i - cc.top() -1);
                if (S_temp >S_max){
                    S_max = S_temp;
                    cout << "6" << endl;
                }
            }
        }
    }
    // Sau khi i >=n thì có thể stack vẫn còn các index chứ bên trong , nên vẫn cần phải chạy thêm 1 lần nữa
    while(!cc.empty()){
        int index = cc.top();
        cc.pop();
        cout << "11" << endl;
        //nếu xóa đi mà đằng trước nó(cận bên trái) mà stack rỗng thì tức là cái cc.top() (2 dòng trên là chiều cao của cột)
        // cũng là cận bên trái luôn thì diện tích của nó chính = chiều cao của nó *1 
        if(cc.empty()){
            S_temp = i * a[index] ;
            cout << "12" << endl;
            if (S_temp >S_max){
                S_max = S_temp;
                cout << "13" << endl;
            }
        }
        else{
            S_temp = a[index] * (i - cc.top() -1);
            cout << "14" << endl;
            if (S_temp >S_max){
                S_max = S_temp;
                cout << "15" << endl;
            }
        }

    }
    cout << "Dien tich lon nhat: " <<  S_max << endl;
    
















    return 0;
}

