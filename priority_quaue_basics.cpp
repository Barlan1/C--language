#include<iostream>
#include<queue>
using namespace std;
int main(){
	priority_queue<int> pq;
	
	priority_queue<int,vector<int>,greater<int>> sq;
	
	
	sq.push(23);sq.push(40);sq.push(2);sq.push(10);sq.push(57);sq.push(50);sq.push(33);
	
	
	pq.push(20);pq.push(10);pq.push(40);pq.push(2);pq.push(11); pq.push(13);
	
	
	
	
	while(!pq.empty() && !sq.empty() ){
		cout<<pq.top() <<" <=> " <<sq.top()<<endl;
 		pq.pop();
		sq.pop();
	}
	while(!pq.empty()){
		cout<<pq.top()<<" <=> "<<"sq is empty"<<endl;
 		pq.pop();
	}
	
	while(!sq.empty()){
		cout<<"pq is empty"<<" <=> "<<sq.top()<<endl;
 		sq.pop();
	}
	
	return 0;
	
}
