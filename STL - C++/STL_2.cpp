#include<bits/stdc++.h>
#include<cctype>
using namespace std;

int main(){
// bài 1 : Mô phỏng hàng đợi
    // int n ; cout << "Nhap n :"; cin >>n;
    // queue<string> q;
    // string x; 
    // cin.ignore();
    // for (int i=0 ; i<n ; i++){    
    //     getline(cin,x);
    //     q.push(x);
    // }
    // for(int i=0 ; i<n+1 ; i++){
    //     if( q.empty() == false){
    //         cout << "Nguoi tiep theo: " << q.front() << endl;
    //         q.pop();
    //     }
    //     else{
    //         cout << "Hang doi da het";
    //     }    
    // }

// bài 2 : đảo ngược k phần tử đầu 
    // // Tư duy : Lưu vào queue , xóa k phần tử đưa vào stack r đưa lại queue
    // int n ; cout << "Nhap n: " ; cin >> n;
    // int k ,x;
    // stack<int> s;
    // queue<int> q;
    // for (int i=0 ; i<n ; i++){
    //     cin >> x;
    //     q.push(x);
    // }
    // cout << "Nhap k: " ; cin >> k;
    // if(k<0 || k>n){
    //     cout << "k ko hop le"<< endl;
    //     return 0;
    // }
    // // xóa k phần tử đầu ở queue và đưa vào stack , tự động đảo ngược khi in ra
    // for (int i=0 ; i<k ; i++){
    //     s.push(q.front());
    //     q.pop();
    // }
    // // xuất và xóa cùng lúc ở stack sẽ giữ nguyên đc nghịch đảo , sau đó lưu vào queue
    // for (int i=0 ; i<k ; i++){
    //     q.push(s.top());
    //     s.pop();
    // }
    // // đảo vị trí các phần tử ko thay đổi xuống cuối 
    // for (int i=0 ; i<n-k ; i++){
    //     q.push(q.front());
    //     q.pop();
    // }
    // // in sau khi đảo
    // while(!q.empty()){
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    // cout << endl << "Hoan tat" ;

// bài 3 : code này bị lặp , đổi đề thành mỗi số chắn chỉ lặp 3 lần , đến lần 4 sẽ dừng 
    // int n ; cout << "Nhap n: " ; cin >> n;
    // int x ;
    // int dem =0;
    // queue<int> q;
    // for (int i=0 ; i<n ; i++){
    //     cin >> x;
    //     if(x%2==0)
    //         dem++;
    //     q.push(x);
    // }
    // int lap = 0;
    // while(!q.empty()){
    //     if(lap >(dem*3-1)){
    //         cout << endl << "het bo nho r " << endl;
    //         break;
    //     }
    //     int tmp = q.front();
    //     q.pop();
    //     cout << tmp << " ";
    //     if(tmp%2==0){
    //         q.push(tmp);
    //         lap++;
    //     }
    // }

// bài 4 : dùng queue hoặc deque nhập và xóa , cơ bản

// bài 5 : n người , chọn người k bị loại đến khi n == 1
    // dùng mảng cho nhanh -_- 

// bài 6 : số nhị phân , yêu cầu dùng queue ( lặp với vector + pair thì ngon)
    // // lỡ lưu = q để test mà quên đổi tên , h chạy xong chả dám đổi tên nữa :)))
    // // C1 : dùng 2 lần queue int và string , ban đầu nghĩ theo hướng này nên làm và bug khá lâu 
    // queue<int> q ;
    // // int t;
    // int n;
    // cout << "So luong so nhi phan : " ; cin >> n;
    // q.push(1);
    // q.push(10);
    // q.push(11);
    // // tạo 1 queue tt để thao tác thêm 0 , 1 r đổi thành int r đưa vào queue<int> q.
    // queue<string> tt;
    // tt.push("10");
    // tt.push("11");
    // //while(!tt.empty()){    //  ban đầu làm như này là lỗi stoi vì vượt quá int
    // int dem = 0;
    // while(dem < n){
    //// đã check => n ko bị lệch 
    //     dem++;
    //     string temp_q , temp_tt , add_tt_0 , add_tt_1;
    //     int add_q_0 , add_q_1;
    //     temp_q = tt.front();
    //     temp_tt = tt.front();
    //     // cout << temp_q << " - " << temp_tt << endl;
    //     // lưu để đẩy vào queue<int> q;
    //     add_q_0 = stoi(temp_q + "0");
    //     add_q_1 = stoi(temp_q + "1");
    //     // cout << add_q_0 << " - " << add_q_1 << endl;
    //     // lưu để đẩy vào queue<string> tt;
    //     add_tt_0 = temp_tt +"0";
    //     add_tt_1 = temp_tt +"1";
    //     // cout << add_tt_0 << " - " << add_tt_1 << endl;
    //     // đẩy vào queue<int> q;
    //     q.push(add_q_0);
    //     q.push(add_q_1);
    //     // đẩy vào queue<string> tt;
    //     tt.push(add_tt_0);
    //     tt.push(add_tt_1);
    //     tt.pop();
    // 
    // }
    // queue<int> copy_q = q;
    // for(int i=0 ; i<n ; i++ ){
    //     cout << copy_q.front() << " - " ;
    //     copy_q.pop();
    // }
    // // C2: ban đầu ko nghĩ tới *10+1 nên ko là làm theo cách này r , quá phế -_-
    // int n;
    // cout << "So luong so nhi phan: "; cin >> n;
    // queue<long long> q;
    // q.push(1);
    // cout << "Ket qua: ";
    // for (int i = 0; i < n; i++) {
    //     long long tmp = q.front();
    //     q.pop();
    //     cout << tmp << " ";
    //     q.push(tmp * 10 + 0);
    //     q.push(tmp * 10 + 1);
    // }
    // cout << endl << "Hoan tat!";

// bài 7 : Round Robin Scheduling.Mỗi tiến trình có  : Tên, Thời gian . Quantum = 2.
    // // test với 4 cái , n cái cũng như nhau
    // // ban đầu làm theo vector 1 cách ngâu ngốc và tự làm khó bản thân , lại còn tự chế code -_- . AI đã chỉ ra hướng queue mà từ đầu KHÔNG nghĩ ra :(((
    // queue<pair<string,int>> q;
    // int quantum = 2;
    // string ten;
    // int time;
    // for (int i=0 ; i<4 ; i++){
    //     cout << endl << "Chuong trinh " << i+1 << ":" << endl;
    //     cout << "Ten: " ; getline(cin,ten);
    //     cout << "Time : "; cin >> time;
    //     cin.ignore();
    //     q.push(make_pair(ten,time));
    // }
    // int t =0;
    // while(!q.empty()){
    //     t++;
    //     cout << endl << "Luot chay " << t << " : " << endl;
    //     pair<string,int> copy_q = q.front();
    //     q.pop();
    //     if(copy_q.second > quantum){
    //         cout << endl << "Chuong trinh: " << copy_q.first << " | Thoi gian can: " << copy_q.second << endl;
    //         copy_q.second -= quantum;
    //         cout << "Chua chay xong , dua xuong cuoi danh sach" << endl;
    //         q.push(make_pair(copy_q.first,copy_q.second));
    //     }
    //     else{
    //         cout << endl << "Chuong trinh: " << copy_q.first << " | Thoi gian can: " << copy_q.second << endl;
    //         cout << "Chay thanh cong" << endl;
    //     }
    // }
    // cout << endl << "Toan bo chuong trinh da chay xong" << endl;

// bài 8 : deque => menu Push Front , Push Back , Pop Front , Pop Back , Print
    // deque<int> de;
    // de.push_front(1);
    // de.push_back(-2);
    // de.pop_front();
    // de.pop_back();
    // print ?? :)
    // cout << "CoN cAi NiT mA iN";

// bài 9 : Palindrome , chả cần đến deque :))
    // string n ; cout << "Nhap chuoi : " ; getline(cin,n);
    // int dau = 0;
    // int sau = n.length()-1;
    // bool check = true;
    // while(dau < sau){
    //     if(n[dau]!=n[sau]){
    //         check = false;
    //         break;
    //     }
    //     dau++;
    //     sau--;
    // }
    // if(check)
    //     cout << endl << "Day la 1 Palindrome " << endl;
    // else    
    //     cout << endl << "Day khong phai la Palindrome" << endl;

// bài 10 : sửa đề : chẵn in ở đầu , lẻ in ở sau . chọn lẻ xóa đầu , chẵn xóa cuối
    // deque<int> de;
    // int x,n,l ; cout << "Nhap n :" ;cin >> n;
    // for (int i=0 ; i<n ; i++){
    //     cin >> x;
    //     if(x%2==0)
    //         de.push_front(x);
    //     else
    //         de.push_back(x);
    // }
    // cout << "In cac phan tu : " ;
    // for (int k : de) 
    //     cout << k << " ";
    // cout << endl << "Xoa cac phan tu" << endl;
    // for (int i=0 ; i<n ; i++){
    //     cout << endl << "Chon so chan or le: "; cin >> l;
    //     if(l%2==0)
    //         de.pop_back();
    //     else
    //         de.pop_front();
    //     if(!de.empty()){
    //         cout << "Cac phan tu con lai" << endl;
    //             for (int k : de) 
    //                 cout << k << " ";
    //         cout << endl;
    //     }
    //     else
    //         cout << "Da xoa het r" << endl;
    //         break;
    // }

// bài 11 : tìm max mỗi cửa sổ , 1 cửa sổ có 3 phần tử
    // int n ; cin >> n;
    // int k = 3;
    // int a[n];
    // deque<int>de;
    // for(int &x : a)
    //     cin >> x;
    // for (int i=0 ; i<k ; i++){
    //     while(!de.empty() && a[i] >= a[de.back()])
    //         de.pop_back();
    //     de.push_back(i);
    // }
    // cout << a[de.front()] << " ";
    // for (int i = k ; i<= n-1 ; i++){
    //     if(de.front() <= i-k)
    //         de.pop_front();
    //     while(!de.empty() && a[i] >= a[de.back()])
    //         de.pop_back();
    //     de.push_back(i);
    //     cout << a[de.front()] << " ";
    // }

// bài 12 : Mô phỏng Undo/Redo. // dùng deque thì dễ quá , lỡ dùng queue r thì dùng luôn ,đây cũng chỉ là bài test nhỏ . 
    // int n ;
    // int x;
    // deque<int> them ;
    // queue<pair<string,int>> tt;
    // cout << "1. Them phan tu" << endl;
    // cout << "2. Xoa phan tu vua them" << endl;
    // int dem =0 ;
    // int tmp;
    // do{
    //     dem++;
    //     cout << "Nhap n: " ; cin >> n;
    //     if(n==1){
    //         cout << "Them phan tu : "; cin >> x;
    //         cout << endl;
    //         tt.push(make_pair("Them: ",x));
    //         them.push_back(x);
    //     }
    //     if(n==2){
    //         if(tt.empty()){
    //             cout << "Ko co phan tu nao de xoa" << endl << endl;
    //             dem--;
    //         }
    //         else{
    //             tmp = them.back();
    //             cout << "Da xoa phan tu vua them " << endl << endl;
    //             them.pop_back();
    //             tt.push(make_pair("Xoa: ",tmp));
    //             }
    //     }
    //     if(n!=1 && n!=2) {
    //         --dem;
    //         cout << "n ko hop le" << endl << endl;
    //     }
    // }while(dem < 15);
    // cout << "Cac phan tu con lai : ";
    // for(auto xx : them)
    //     cout <<  " - " << xx ;
    // int tmp_size = tt.size();
    // cout << endl << "So lan thao tac: " << tt.size() << endl;
    // cout << endl << "10 thao tac gan nhat " << endl;
    // int check ;
    // check = tmp_size - 10;
    // while(!tt.empty()){
    //     if(check > 0)
    //         for (int i=0 ; i<check ; i++)
    //             tt.pop();
    //     check = 0;
    //     pair<string,int> copy_tt = tt.front();
    //     tt.pop();
    //     cout << copy_tt.first << copy_tt.second << endl;
    // }
    
// bài 24 : bài tập tổng hợp , đề tự chế .
    // vector<pair<string,int>> hs;
    // int n ;cout << "So luong hoc sinh: " ; cin >> n;
    // string ten; int diem;
    // // nhap du lieu 
    // cout << endl << "Nhap du lieu" << endl << endl;
    // for(int i=0 ; i<n ; i++){
    //     cin.ignore();
    //     cout  << endl << "Nhap ten: "; getline(cin,ten);
    //     cout << "Nhap diem: ";cin >> diem;
    //     hs.push_back(make_pair(ten,diem));
    // }
    // // in du lieu
    // cout << endl << "-------------------------------" << endl<< endl;
    // cout << endl << "In du lieu" << endl << endl;
    // for(int i=0 ; i<n ; i++)
    //     cout << "Ten: " << hs[i].first << "\n" << "Diem: " << hs[i].second << endl << endl;
    // // sap xep tang dan theo ten -> diem
    // cout << endl << "-------------------------------" << endl<< endl;
    // sort(hs.begin() , hs.end() , [] (pair<string,int> a , auto b){
    //     return a.first < b.first ;
    //     if(a.first == b.first)
    //         return a.second < b.second ;
    // });
    // //danh sach sau khi sap xep
    // cout << "Danh sach sau khi sap xep " << endl;
    // for(int i=0 ; i<n ; i++)
    //     cout << "Ten: " << hs[i].first << "\n" << "Diem: " << hs[i].second << endl << endl;
    // // tim kiem
    // cout << endl << "-------------------------------" << endl<< endl;
    // cin.ignore();
    // string t ;cout << "ten can tim: "; getline(cin,t);
    // auto it = find_if(hs.begin() , hs.end() ,[t](pair<string,int> x){
    //     return x.first == t;
    // } );
    // if(it!=hs.end()){
    //     cout << " Da tim thay" << endl;
    //     cout << "Ten: " << it->first << "\n" << "Diem: " << it->second << endl;
    // }
    // else    
    //     cout << "Khong tim thay hoc sinh ten " << t << endl;

// bài 26 : bệnh viện , sắp xếp bệnh nhân nặng -> nhẹ 
    // auto sosanh = [](pair<string,int>& a , pair<string,int>& b){ return a.second <b.second;};
    // priority_queue<pair<string,int> , vector<pair<string,int>> , decltype(sosanh) > pq(sosanh) ;
    // int n ; cout << "Nhap n: " ; cin >> n;
    // int level ; string ten ;
    // cout << endl << "Nhap du lieu benh nhan" << endl;
    // for(int i=0 ; i<n ; i++){
    //     cin.ignore();
    //     cout << endl << "Nhap ten benh nhan: " ; getline(cin,ten);
    //     cout << "Nhap cap do benh: " ; cin >> level;
    //     pq.push(make_pair(ten,level));
    // }
    // while(!pq.empty()){
    //     pair<string, int> bn =  pq.top() ;
    //     cout << "Benh nhan: " << bn.first << " | Cap do: " << bn.second << endl;
    //     pq.pop();
    // }

// bài 30 : Kho hàng : Tên, Số lượng .
    // vector<pair<string,int>> kho_hang;
    // // nhap du lieu cho kho hang
    // int n ; cout << "Nhap n: " ; cin >> n;
    // string ten ; int solg ;
    // for (int i=0 ; i<n ; i++){
    //     cin.ignore();
    //     cout << endl << "Nhap ten: " ; getline(cin,ten);
    //     cout << "Nhap so luong: " ; cin >> solg;
    //     kho_hang.push_back(make_pair(ten,solg));
    // }
    // //in hang co so luong max 
    // auto it_max = max_element(kho_hang.begin() , kho_hang.end() , [](auto a , auto b){
    //     return a.second < b.second;
    // });
    // auto it_min = min_element(kho_hang.begin() , kho_hang.end() , [](auto a , auto b){
    //     return a.second < b.second;
    // });
    // if(it_max !=kho_hang.end()){
    //     cout << endl << "Hang max : " << "Ten: " << it_max->first << " | So luong: " << it_max->second << endl;
    //     cout << endl << "Hang min : " << "Ten: " << it_min->first << " | So luong: " << it_min->second << endl;
    // }
    // else    
    //     cout << "Rong" << endl;
    // // sap xep 
    // sort(kho_hang.begin() , kho_hang.end() , [] (pair<string,int> a , auto b ) {
    //     return a.second < b.second;
    // });
    // cout << endl << "Danh sach sau khi sap xep " << endl;
    // for(int i=0 ; i<n ; i++)
    //     cout << "Ten: " << kho_hang[i].first << " | So luong: " << kho_hang[i].second << endl;

// bài 31 : quản lý sinh viên . (dùng map thì code ko hay) (dùng struct thì bài này cơ bản , dùng pair cho độc đáo)
    vector<pair<int,pair<string,pair<int,int >>>> sv;
    string ten ; int mssv, diem , tuoi , n ; cout << "Nhap n: " ; cin >> n ;
    if(n<5){
        cout << "n phai lon hon 5"<< endl;
        return 0;
    }
    // Nhập dữ liệu sinh viên 
    cout << endl << "Nhap thong tin sinh vien" << endl << endl;
    for (int i=0 ; i<n ; i++){
        mssv = (i+1)*100;
        cin.ignore();
        cout << endl << "Nhap ten: " ;getline(cin,ten);
        cout << "Nhap tuoi: " ; cin >> tuoi;
        cout << "Nhap diem: " ; cin >> diem;
        sv.push_back({mssv,{ten,{tuoi,diem}}});
    }
    cout << endl << endl <<"----------------------------------" << endl << endl;
    // in thông tin sinh viên
    cout << endl << "In thong tin sinh vien" << endl << endl;
    for(int i=0 ; i<n ; i++){
        cout << endl;
        cout << "MSSV: " << sv[i].first << endl ;
        cout << "Ten: " << sv[i].second.first << endl ;
        cout << "Tuoi: " << sv[i].second.second.first<< endl ;
        cout << "Diem: " << sv[i].second.second.second << endl ;
    }
    cout << endl << endl <<"----------------------------------" << endl << endl;

    cout << "            MENU                    " << endl;
    cout << "1.Sap xep sinh vien theo ten" << endl;
    cout << "2.Sap xep sinh vien theo diem tang dan" << endl;
    cout << "3.Tim sinh vien theo mssv " << endl;
    cout << "4.Tim sinh vien theo ten" << endl;
    cout << "5.Top 5 diem cao nhat " << endl;
    cout << "6.Thong ke sinh vien co diem >=8" << endl;
    cout << "7.Tinh diem trung binh cua sinh vien" << endl;
    cout << "8.Thoat chuong trinh" << endl;
    while (true){

        //chon menu
        int chon ; cout << endl << "Chon: " ; cin >> chon;

        if(chon ==1){
            // sắp xếp sinh viên theo tên
            sort(sv.begin() , sv.end() , [](pair<int,pair<string,pair<int,int >>> a , auto b ){
                return a.second.first < b.second.first;
            });
            cout <<"Danh sach sau khi sap xep theo ten" << endl << endl;
            for(int i=0 ; i<n ; i++){
                cout << endl;
                cout << "MSSV: " << sv[i].first << endl ;
                cout << "Ten: " << sv[i].second.first << endl ;
                cout << "Tuoi: " << sv[i].second.second.first<< endl ;
                cout << "Diem: " << sv[i].second.second.second << endl ;
            }
            cout << endl << endl <<"----------------------------------" << endl << endl;
        }
        if(chon==2){
            // sắp xếp sinh viên theo điểm
            sort(sv.begin() , sv.end() , [](pair<int,pair<string,pair<int,int >>> a , auto b ){
                return a.second.second.second < b.second.second.second;
            });
            cout <<"Danh sach sau khi sap xep theo diem" << endl << endl;
            for(int i=0 ; i<n ; i++){
                cout << endl;
                cout << "MSSV: " << sv[i].first << endl ;
                cout << "Ten: " << sv[i].second.first << endl ;
                cout << "Tuoi: " << sv[i].second.second.first<< endl ;
                cout << "Diem: " << sv[i].second.second.second << endl ;
            }
            cout << endl << endl <<"----------------------------------" << endl << endl;
        }
        if(chon==3){
            // tìm sinh viên theo mssv
            cout << endl << "Tim sinh vien theo mssv" << endl << endl;
            int tim_mssv ; cout << "Nhap mssv can tim: " ; cin >> tim_mssv;
            auto it_tim_mssv = find_if(sv.begin() , sv.end() , [tim_mssv] (pair<int,pair<string,pair<int,int >>> a){
                return a.first == tim_mssv;
            });
            if(it_tim_mssv != sv.end()){
                cout << endl << "Da tim thay !" << endl;
                cout << "MSSV: " << it_tim_mssv->first << " | Ten: " << it_tim_mssv->second.first << " | Tuoi: " << it_tim_mssv->second.second.first << " | Diem: " << it_tim_mssv->second.second.second << endl;
            }
            else
                cout << "Khong co ai co mssv: " << tim_mssv << endl ;
            cout << endl << endl <<"----------------------------------" << endl << endl;
        }
        if(chon==4){
            // tìm sinh viên theo tên 
            cout << endl << "Tim sinh vien theo ten" << endl << endl;
            string tim_ten ; cout << "Nhap ten can tim: " ;cin.ignore(); getline(cin,tim_ten);
            transform(tim_ten.begin() , tim_ten.end(),tim_ten.begin() , :: tolower);
            auto it_tim_ten = find_if(sv.begin() , sv.end() , [tim_ten] (const pair<int,pair<string,pair<int,int >>>& b){
                // ép các chữ thành chữ thường 
                string tmp_ten = b.second.first;
                transform(tmp_ten.begin() , tmp_ten.end(),tmp_ten.begin() , :: tolower);
                // tách tên 
                tmp_ten = " " + tmp_ten;
                string ten_ss = "";
                int n =tmp_ten.length(); 
                int i = n-1;
                while(tmp_ten[i] != ' ')
                    i--;
                for(int j=i+1 ; j<n ; j++)
                    ten_ss += tmp_ten[j];
                return ten_ss == tim_ten;
            });
            if(it_tim_ten != sv.end()){
                cout << endl << "Da tim thay !" << endl;
                cout << "MSSV: " << it_tim_ten->first << " | Ten: " << it_tim_ten->second.first << " | Tuoi: " << it_tim_ten->second.second.first << " | Diem: " << it_tim_ten->second.second.second << endl;
            }
            else
                cout << "Khong co ai ten la:" << tim_ten << endl ;
            cout << endl << endl <<"----------------------------------" << endl << endl;
        }
        if(chon==5){
            // top 5 điểm cao nhất (hiện tại đang sắp xếp theo điểm tăng dần , đổi thành giảm dần)
            sort(sv.begin() , sv.end() , [](pair<int,pair<string,pair<int,int >>> a , auto b ){
                return a.second.second.second > b.second.second.second;
            });
            cout << endl << "Top 5 diem cao nhat" << endl << endl;
            for(int i=0 ; i<5 ; i++){
                cout << endl;
                cout << "MSSV: " << sv[i].first << endl ;
                cout << "Ten: " << sv[i].second.first << endl ;
                cout << "Tuoi: " << sv[i].second.second.first<< endl ;
                cout << "Diem: " << sv[i].second.second.second << endl ;
            }
            cout << endl << endl <<"----------------------------------" << endl << endl;
        }
        if(chon==6){
            // thống kê sinh viên điểm >=8
            bool check = false;
            cout << "Cac sinh vien co diem >=8 " << endl<< endl;
            for(int i=0 ; i<n ; i++){
                if(sv[i].second.second.second >= 8){
                    cout << endl;
                    cout << "MSSV: " << sv[i].first << endl ;
                    cout << "Ten: " << sv[i].second.first << endl ;
                    cout << "Tuoi: " << sv[i].second.second.first<< endl ;
                    cout << "Diem: " << sv[i].second.second.second << endl ;
                    check = true;
                }
            }
            if(!check) cout << "Khong co ai co diem >=8 ";
            cout << endl << endl <<"----------------------------------" << endl << endl;
        }
        if(chon==7){
            //thông kê điểm trung bình
            float sum = 0 ; 
            for(int i=0 ; i<n ; i++){
                sum += sv[i].second.second.second;
            }
            cout << "Diem trung binh la: " << sum/sv.size();
        }
        if(chon==8)  break;
        else{  
            cout << endl << "chon tu 1->8" << endl ;
        }
    }
    cout << "GOODBYE" << endl;














































































































































    return 0;
}

