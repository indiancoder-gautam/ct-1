//Name-Gautam Goyal
//Roll no-2010991546
//Set-05
//Q1

#include<bits/stdc++.h>
using namespace std;

int main(){
try{
		int n,x;
		//taking input in n and x;
	cin>>n>>x;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	//taking input agin in as v[i]
		cin>>v[i];
	vector<int> ans;
		for(int i=0;i<n;i++){
		int sum=0;
		vector<int> temp;
		for(int j=i;j<n;j++){
			sum+=v[j];
			//pushing 
			temp.push_back(v[j]);
			if(sum==x && ans.size()<temp.size()){
				ans=temp;
			}
		}
	}
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	
}
//if error come then it will come to this point 
catch(...){
		cout<<"Error\n";
		
}	return 0;

}



