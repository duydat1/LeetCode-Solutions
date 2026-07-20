#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
//	bai 1
// int n; cout<<"Nhap n:";cin>>n;
// string ten;
// double diem;
// pair<string,double> danhsach[n];
// for (int i=0;i<n;i++)
// {
// 	cin.ignore();
// 	cout << "Nhap ten:"; getline(cin,ten);
// 	cout<<"Nhap diem:"; cin>>diem;
// 	danhsach[i] =make_pair(ten,diem);
// }
// for (int i=0;i<n;i++)
// {
// 	cout << danhsach[i].first << " " << danhsach[i].second << endl;
// }

// bai 2
// int n ; cout<<"Nhap n:";cin>>n;
// vector<pair<int,int>> danhsach[n];
// int x,y;
// float a[n];
// for (int i=0;i<n;i++)
// {
// 	cout << "Nhap toa do x va y:"; cin>>x>>y;
// 	danhsach[i].push_back(make_pair(x,y));
// 	a[i] = sqrt(x*x+y*y);
// }
// for (int i=0;i<n;i++)
// {
// 	cout << "Toa do diem thu " << i+1 << " la: (" << danhsach[i][0].first << "," << danhsach[i][0].second << ")" << endl;
// 	cout << "Khoang cach tu goc toa do den diem thu " << i+1 << " la: " << a[i] << endl;
// }

// bai 3
// int n ; cout<< "Nhap n:" ; cin >> n;
// pair<int,string> danhsach[n];
// string ten;
// int tuoi;
// for (int i=0;i<n;i++)
// {
// 	cout << endl << "Nguoi so " << i+1<<": "<< endl;
// 	cout <<"Nhap tuoi:";cin>>tuoi;
// 	cin.ignore();
// 	cout <<"Nhap ten :";getline(cin,ten);
// 	danhsach[i] = make_pair(tuoi,ten);
// }
// cout << "--------------------------------------------" << endl;
// sort(danhsach,danhsach+n);
// for (int i=0;i<n;i++)
// {
// 	cout << "Nguoi so " << i+1<<": "<< endl;
// 	cout <<"Ten:" << danhsach[i].second << endl;
// 	cout <<"Tuoi:" << danhsach[i].first << endl;
// }

// bai 4
// vector<int> v;
// int n ;
// do{
// 	cout<< "Nhap n:" ; cin >> n;
// 	v.push_back(n);
// }while(n != -1);
// v.pop_back();
// for (int i=0; i < v.size() ;i++)
//// int i là kiểu int có dấu(có thể âm hoặc dương) , size là kiểu int ko dấu ( chỉ dương , ko âm )
// {
// 	cout << v[i] << " ";
// }
// // tinh tong
// int tong =0;
// for (int i=0;i< v.size() ;i++)
// {
// 	tong += v[i];
// }
// cout << endl;
// cout << "Tong cac so vua nhap la: " << tong << endl;
// cout << "Trung binh cong la : " << float(tong)/v.size() << endl;
// sort(v.begin(),v.end());
// cout << "So lon nhat la:" << v[v.size()-1] << endl;
// cout << "So nho nhat la:" << v[0] << endl;

// bai 5
// vector<int> v;
// v.push_back(5);
// v.push_back(5);
// v.push_back(5);
// v.push_back(5);
// v.push_back(5);
// v.push_back(5);
// v.push_back(5);
// bool check = false;
// do{
// 	auto it = find(v.begin(),v.end(),5);
// 	if (it != v.end())
// 	{
// 		v.erase(it);
// 		check = true;
// 	}
// }while(it != v.end());
// if(!check)
// 	cout << "Khong co so 5 trong vector" << endl;
// if(v.empty() == true)
// 	cout <<" Vector rong" << endl;
// else
// {
// 	cout << "Vector sau khi xoa cac so 5 la: " ;
// 	for (auto i =0 ; i<v.size();i++)
// 	{
// 		cout << v[i] << " ";
// 	}
// }

// bai 6
// vector<int> v;
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(4);
// v.push_back(5);
// auto x = v.begin()+2;
// v.insert(x, 100);
// auto xx = v.begin();
// v.erase(xx);
// for(auto x:v)
// 	cout << x << " ";

// bai 7
	// int n ; cout << "Nhap n:" ; cin >> n;
	// vector<int> v;
	// v.push_back(1);
	// v.push_back(1);
	// for (int i=0;i<n;i++)
	// {
	// 	int so_cuoi = v[v.size()-1];
	// 	int so_gan_cuoi = v[v.size()-2];
	// 	v.push_back(so_cuoi + so_gan_cuoi);
	// }
	// for(auto x:v)
	// 	cout << x << " ";

// bai 8 + 9 +10
	// vector<int> v;
	// v.push_back(10);
	// v.push_back(20);
	// v.push_back(30);
	// v.push_back(40);
	// v.push_back(50);
	// auto sum =0;
	// for (auto x=v.begin() ; x!= v.end() ; x++)
	// {
	// 	cout << *x <<" " ;
	// 	sum += *x;
	// }
	// cout << endl << "Sum = " << sum << endl;
	// for (auto x=v.rbegin() ; x!= v.rend() ; x++)
	// {
	// 	cout << *x <<" " ;
	// }

// bai 11
	// vector<int> v={1,2,12,4,6,8,9,10,100,12,32,43,2,1};
	// bool check = false;
	// auto it = v.begin();
	// while(it != v.end())
	// {
	// 	if (*it%2==0)
	// 	{
	// 		it = v.erase(it);
	// 		check = true;
	// 	}
	// 		else
	// 		it++;
	// }
	// if(!check)
	// 	cout << "Khong co so chia het cho 2 trong vector" << endl;
	// if(v.empty() == true)
	// 	cout <<" Vector rong" << endl;
	// else
	// {
	// 	cout << "Vector sau khi xoa cac so chia het cho 2 la: " ;
	// 	for (auto i =0 ; i<v.size();i++)
	// 	{
	// 		cout << v[i] << " ";
	// 	}
	// }
	
// bai 12	
	// dễ r , ko làm nữa

// bai 13 + 14 
	// set<int>s={1,4,2,1,5,3,2};
	// for(auto x:s)
	// 	cout << x << " ";
	// int x = 1;
	// auto it = s.find(x);
	// if(it != s.end())
	// 	cout << "Co ton tai so x";
	// else
	// 	cout << "Khong ton tai so x";

// bai 15
	// set<int>s={1,1,1,2,3,3};
	// cout << s.size() ;

// bai 16
	// ko hay

// bai 17
	// string a="hello world hello cpp world";
	// a += " ";
	// string temp="";
	// set<string>s;
	// for (int i=0 ; i<a.size() ; i++)
	// {
	// 	if(a[i] != ' ')
	// 		temp += a[i];
	// 	else
	// 		if(temp != "")
	// 		{
	// 			s.insert(temp);
	// 			temp = "";
	// 		}
	// }
	// for(auto x:s) cout << x << " ";

// bai 18 
	vector<pair<string,string>> danhsach(3);
	string ten,sdt;
	// them
	cout << "Nhap danh ba" << endl;
	for (int i=0 ;i<3 ; i++)
	{
		cout << endl << "Danh ba nguoi so "<< i+1 << ":" << endl;
		cout << "Ten : ";getline(cin,ten);
		cout << "SDT : " ; getline(cin,sdt);
		danhsach[i] = make_pair(ten,sdt);
	}
	cout << endl << "--------------------------------" << endl;
	// in
	cout << "In danh ba" << endl;
	int dem =1;
	for (auto x:danhsach )
	{
		cout << endl << "Danh ba nguoi so "<< dem++ << ":" << endl ;
		cout << "Ten : " << x.first << endl;
		cout << "SDT : " << x.second << endl;
	}
	cout << endl << "--------------------------------" << endl;
	cout << "Tim danh ba" << endl;
	// tim
	string sdt_can_tim ; 
	cout << "Nhap sdt muon tim : " ; getline(cin,sdt_can_tim);
	bool check_tim = false;
	for (int i=0 ;i<3 ; i++)
		if(danhsach[i].second == sdt_can_tim)
			{
				cout << "Da tim thay" << endl;
				cout << "Ten : " << danhsach[i].first << endl;
				cout << "SDT : " << danhsach[i].second << endl;
				check_tim = true;
			}
	if(!check_tim)
		cout << "Khong tim thay" << endl;
	cout << endl << "--------------------------------" << endl;
	// sua
	cout << "Sua danh ba" << endl;
	string sdt_can_sua,ten_sua,sdt_sua;
	cout << "Nhap sdt muon sua : " ; getline(cin,sdt_can_sua);
	bool check_sua = false;
	for (int i=0 ;i<3 ; i++)
		if(danhsach[i].second == sdt_can_sua)
			{
				cout << "Da tim thay" << endl;
				cout << "Ten : " << danhsach[i].first << endl;
				cout << "SDT : " << danhsach[i].second << endl;
				cout << endl << "Doi du lieu" << endl;
				cout << "Ten :";getline(cin,ten_sua);
				cout << "SDT : ";getline(cin,sdt_sua);
				danhsach[i].first = ten_sua;
				danhsach[i].second = sdt_sua;
				check_sua = true;
				cout << endl;
				cout << "Danh ba sau khi sua" << endl;
				int dem =1;
				for (auto x:danhsach )
				{
					cout << endl << "Danh ba nguoi so "<< dem++ << ":" << endl ;
					cout << "Ten : " << x.first << endl;
					cout << "SDT : " << x.second << endl;
				}
	}
	if(!check_sua)
		cout << "Khong tim thay" << endl;
	cout << endl << "--------------------------------" << endl;
	//xoa
	cout << "Xoa danh ba" << endl;
	string sdt_muon_xoa;
	cout << "Nhap sdt muon xoa : " ; getline(cin,sdt_muon_xoa);
	bool check_xoa = false;
	for (int i=0 ;i<3 ; i++)
		if(danhsach[i].second == sdt_muon_xoa)
			{
				cout << "Da tim thay" << endl;
				cout << "Ten : " << danhsach[i].first << endl;
				cout << "SDT : " << danhsach[i].second << endl;
				check_xoa = true;
				// xóa khỏi vector
				danhsach.erase(danhsach.begin()+i);
				// auto &temp = danhsach[i]; 
				// danhsach.erase(remove(danhsach.begin(), danhsach.end(), temp ), danhsach.end());
			}
	if(!check_xoa)
		cout << "Khong tim thay" << endl;
	cout << "Danh sach sau khi xoa " << endl;
	int demm =1;
	for (auto x:danhsach )
	{
		cout << endl << "Danh ba nguoi so "<< demm++ << ":" << endl ;
		cout << "Ten : " << x.first << endl;
		cout << "SDT : " << x.second << endl;
	}
	return 0;
}
