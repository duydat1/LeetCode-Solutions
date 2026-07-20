#include<bits/stdc++.h>
#include <iostream>
using namespace std;

// Thuật toán queue  
// struct Node {
//     int data;
//     Node* next;
//     Node(int val) {
//         data = val;
//         next = nullptr;
//     }
// };
//
// struct MyQueue {
//     Node* head = nullptr;
//     Node* tail = nullptr; // Con trỏ quản lý đuôi để push trong O(1)
//     int dem =0;
//
//     // 1. Thêm vào cuối hàng (O(1))
//     void push(int val) {
//         Node* new_node = new Node(val);
//         dem++;
//         if(tail==nullptr){
//             head = tail = new_node;
//             return;
//         }
//         tail -> next = new_node;
//         tail = new_node;    
//     }
//
//     // 2. Xóa ở đầu hàng (O(1))
//     void pop() {
//         if(head == nullptr) return;
//         Node* temp = head;
//         head = head->next ;
//         delete temp;
//         if (head == nullptr) 
//             tail = nullptr;
//         dem--;
//     }
//
//     // 3. Lấy giá trị thằng đầu hàng (O(1))
//     int front() {
//         if(head != nullptr) 
//             return head->data ;
//         return false;
//     }
//
//     int empty(){
//         if(tail == nullptr){
//             return true;
//         }
//         return false;
//     }
//     int size(){
//         return dem;
//     }
//
//
// };
// int main() {
//     MyQueue q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);
//     q.push(70);
//     q.push(80);
//
//     while(q.empty()==true){
//         cout << "Dau hang hien tai: " << q.front() << endl; // Phải in ra 10
//         q.pop();
//         cout << "Sau khi pop, dau hang la: " << q.front() << endl; // Phải in ra 20
//         q.pop();
//         cout << "Sau khi pop, dau hang la: " << q.front() << endl; // Phải in ra 30
//         q.pop();
//         cout << "Sau khi pop, dau hang la: " << q.front() << endl; 
//         q.pop();
//         break;
//     }
//     if(q.empty() == false)     cout << "Rong";
//     cout << q.size() << endl;  
//     return 0;
// }

// Dãy số Fibonacci
// int fibo(int n){
//     if(n==1 || n==2)
//         return 1;
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     int n ; cout << "n= " ; cin>>n;
//     if(n>=1){
//         cout << "Ket qua: " << fibo(n) << endl;
//         return 0;
//     }
//     cout << "n ko dung";
//     return 0;
// }

// quay lui
// int N;
// vector<int> A; // Mảng để lưu chuỗi nhị phân hiện tại
// void inKetQua() {
//     for (int x : A) {
//         cout << x ;
//     }
//     cout << " - ";
// }
// //Hàm quay lui điền giá trị cho vị trí 'i'
// void thu(int i) {
//     // 1. Điểm dừng: Nếu đã điền xong N vị trí (từ 0 đến N-1)
//     if (i == N) {
//         inKetQua();
//         return;
//     }
//     // 2. Thử các lựa chọn khả thi (ở đây là 0 và 1)
//     for (int chon = 0; chon <= 1; chon++) {
//         A[i] = chon;  // Thử điền lựa chọn này vào vị trí i
//         thu(i + 1);   // Gọi đệ quy điền tiếp vị trí tiếp theo
//         // Bước "Quay lui" ngầm định: Khi hàm thu(i+1) chạy xong và quay về,
//         // vòng lặp sẽ tăng 'chon' lên để ghi đè giá trị mới vào A[i].
//     }
// }
// int main() {
//     cout << "Nhap N: ";
//     cin >> N;
//     A.resize(N); // Cấp phát mảng có kích thước N
//     thu(0); // Bắt đầu thử điền từ vị trí 0
//     return 0;
// }












