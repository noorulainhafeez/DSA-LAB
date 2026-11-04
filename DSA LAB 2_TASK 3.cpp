#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node*next;
	
	Node(int value){
		data=value;
		next=NULL;
			
	}
};
int main(){
	Node n1(90);
	Node n2(30);
	Node n3(10);
	
	n1.next =&n2;
	n2.next =&n3;
	
	    cout << "Node 1: " << n1.data << endl;
    cout << "Node 2: " << n1.next->data << endl;
cout << "Node 3: " << n2.next->data << endl;
return 0;
}
