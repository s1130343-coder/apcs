#include <iostream>
using namespace std;

int main() {
	cout << " -- 正直角三角形 -- \n";
	for (int i = 1 ; i <=5 ; i++ ){
		for (int J = 1 ; J <= i ; J++ ){
			cout << "☆";
		}
		cout << "\n";
	}
	cout << " -- 正反直角三角形 -- \n";
		for (int i = 5 ; i >=1 ; i-- ){
			for (int J = 1 ; J <= i ; J++ ){
				cout << "☆";
		}
		 cout << "\n";
	}
		cout <<"-- 聖誕樹 -- \n";
		for (int i = 1;i <=5;  i++){
			for (int J=1; J < 5-i; J++){
				cout << " ";
		}
			for (int J =1; J <=(2*i-1); J++) {
				cout << "*";
			}
			cout << "\n";
		}
	return 0;
	}
