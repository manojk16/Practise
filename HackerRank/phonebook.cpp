#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

// First Method
/*int main() {
    
    
    map<string, int> phonebook;
    vector<string> name;
    int n;
    cin >> n;
    int m=n;
    string key,str;
    int value;
    while(n){
        cin>>key;
        cin>>value;
        phonebook.insert(make_pair(key,value));
        
        n--;
    }
    while(m){
        cin.ignore();
        cin>>str;
        name.push_back(str);
        m--;
    }
    for(int i=0;i<name.size();++i){
        if(phonebook.find(name[i])->first==name[i]){

            cout<<name[i]<<"="<<phonebook.find(name[i])->second<<endl;
            }
            else{
                cout<<"not found"<<endl;
            }
        

    }

   return 0;
}*/


/*int main(){

    map<string, int> phonebook;
    int n;
    int Mob_Number;
    string name1, name2;
    cin>>n;
    while(n){
        cin>>name1;
        cin>>Mob_Number;
        cin.ignore();
        //phonebook.insert(make_pair(name1,Mob_Number));
        phonebook[name1]=Mob_Number;
        n--;
    }
    cin.ignore();
       while(getline(cin, name2)){
            if(phonebook.find(name2)!=phonebook.end()){
                cout<<name2<<"="<<phonebook[name2]<<endl;
            }
            else{
                cout<<"Not Found"<<endl;
            }
        }
    return 0;
}
*/
int main() {
    map<string, int> phonebook;
    vector<string> name;
    int n;
    cin >> n;
    string key, str;
    int value;
    while (n) {
        cin >> key;
        cin >> value;
        cin.ignore();
        phonebook[key] = value;

        n--;
    }
    while (getline(cin, str)) {
        if (phonebook.find(str) != phonebook.end()) {
            cout << str << "=" << phonebook[str] << endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    } 
    return 0;
}