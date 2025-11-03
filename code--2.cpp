//namespace: A way to organize your code and to avoid naming conflicts
//namespace: A container to group names & avoid conflict
//namespace = prevents variable/function name clashes
#include <iostream>
using std::cout;

int main () {
	//used only in this main function
	//using std::cout;
	cout <<"second code\n"<<endl; //endl moves to the new line same for \n
}

//VARIABLES
int main() {
	int slices;
	slices= 5 + 1;
	int children = slices;
	cout<<"You have " << children << " Slices of Pizza."<<std::endl;
}
