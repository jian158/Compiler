#include<stdlib.h>
int main(){
	system("make clean");
	system("make");
	system("./parser test.decaf");
	return 0;
}