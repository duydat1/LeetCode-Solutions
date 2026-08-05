#include<bits/stdc++.h>
using namespace std;

class Solution {
    unordered_map<string , string> parent ;
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        unordered_map<string,string > ower ; 
        for(auto& acc : accounts){
            string name = acc[0];
            string fisrtemail = acc[1];
            for(int i=1 ; i<(int)acc.size() ; i++){
                string email = acc[i];
                ower[email] = name ; // gắn tất cả email vào chung 1 tên chủ sở hữu tại i (ko phải tất cả )
                string root1 = find(email); // tìm gốc của email
                string root2 = find(fisrtemail);
                if(root1 != root2) parent[root2] = root1 ;
            //Nếu hai email đang thuộc hai nhóm khác nhau,thì nhập nhóm của email thứ hai vào nhóm của email thứ nhất, để chúng cùng một nhóm 
            }
        }

        unordered_map<string, vector<string>> groups;
        for(auto& ow : ower){ // Gom email chung chủ sở hữu(chung gốc) về thành 1 cái 
            string root = find(ow.first);
            groups[root].push_back(ow.first); // chung root (gốc) thì đưa vào cùng 1 nhóm 
        }
        vector<vector<string>> ans ;
        for( auto &g : groups){
            auto &email = g.second ; // duyệt qua từng email ở từng nhóm 
            sort(email.begin() , email.end() ); // sắp xếp
            vector<string> acc = {ower[g.first]}; // lấy tên chủ sở hữu vì từ nãy h chỉ lấy email chứ ko đụng đến tên 
            acc.insert(acc.end() , email.begin() , email.end()); // để tên ở đầu , push toàn bộ email chung chủ sở hữu vào cuối 
            ans.push_back(acc);  // để vector<vector<string>> acc luôn cũng đc , đỡ tốn bộ nhớ cho ans 
        }
        return ans ;
    }

    string find(string email){
        if( parent.find(email) == parent.end() ) parent[email] = email;
        return parent[email] == email ? email:parent[email] = find(parent[email]);
    }
};

int main(){     
        
    vector<vector<string>> v = {{"John","johnsmith@mail.com","john_newyork@mail.com"},
                                {"John","johnsmith@mail.com","john00@mail.com"},
                                {"Mary","mary@mail.com"},
                                {"John","johnnybravo@mail.com"}};
    Solution sol;
    vector<vector<string>> result = sol.accountsMerge(v);
    for(auto &acc:result){
        for(auto &s:acc) 
            cout<<s<<" ; ";
        cout<<endl;
    }
    return 0 ;
}






