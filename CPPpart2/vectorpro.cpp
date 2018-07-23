#include<iostream>
#include<vector>

using namespace std;

void display(vector<int>&vec)
{
for(int i=0;i<vec.size();i++)
{
cout<<vec[i]<<" ";
}
cout<<endl;

}

int main()
{
int num;
vector<int>vec;
cout<<"size of "<<sizeof(vec)<<endl;

for(int i=0;i<=3;i++)
{
cin>>num;
vec.push_back(num);
}

cout<<"vector list is ::::"<<endl;
display(vec);

vector<int>::iterator itr=vec.begin();
itr=itr+2;
vec.insert(itr,25);
display(vec);

//vec.push_back(10);
//vec.push_back(20);
//vec.push_back(30);

//display(vec);
//vec.push_back(40);
//display(vec);
//vec.pop_back();
//display(vec);
//cout<<"size of "<<vec.size()<<endl;
return 0;
}
