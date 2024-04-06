// #include<iostream>
// #include<vector>
// using namespace std;

// void f(string &str, int i, string result, vector<string> &li){
//     if(i==str.lenght()){
//         li.push_back (result);
//         return;
//     }
//     f(str,i+1,result + str[i],li);
//     f(str,i+1,result,li);
// }

// int main(){
//     vector<string> res;
//     string str= "abc";
//     f(str,0,"",res);
//     for(int i=0; i<res.size(); i++){
//         cout<<res[i]<<" ";
//     }
    
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// void f(string &str,int i, string result, vector<string> &li, vector<string> &v){
//     if(i==str.size()){
//         li.push_back(result);
//         return;
//     }
//     int digit = str[i]-'0';
//     if(digit<=1){
//         f(str,i+1,result,li,v);
//         return;
//     }
//     for(int j=0; j<v[digit].size(); j++){
//         f(str, i+1, result + v[digit][j], li,v);
//     }
//     return;
// }

// int main(){
//     vector<string> v(10);
//     v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//     string str="23";
//     vector<string>li;
//     f(str,0,"",li,v);

//     for(int i=0; i<li.size(); i++){
//         cout<<li[i]<<" ";
//     }

//     return 0;
// }