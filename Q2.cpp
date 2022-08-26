//Name -Gautam Goyal
//roll no-2010991546
//set-05
//Q2

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	//if code will code through try if no error then run smoothly ifn error the goes to catch
	try{
		int n;
		//taking input in n
		cin>>n;
		//making an vector
		vector<int> v(n);
		vector<vector<int>>ans;
		for(int i=0;i<n;i++)
		//taking input in v[i]
			cin>>v[i];
		for(int i=0;i<n;i++){
			vector<int> temp;
			//main code starts
			int sum=0;
			for(int j=i;j<n;j++){
				sum+=v[j];
				temp.push_back(v[j]);
				if(sum==0)
					ans.push_back(temp);
			}
		}
		
		for(int i=0;i<ans.size();i++){
			for(int j=0;j<ans[i].size();j++){
				cout<<ans[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	catch(...){
		cout<<"Error\n";
	}
	return 0;
}

