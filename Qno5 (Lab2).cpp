# include <iostream>
using namespace std;
int main(){
	int size;
	cout << "Enter Array Size: ";
	cin >> size;
	int items[size];
	cout << "enter Array Items:" << endl;
	for(int i=0; i<size; i++){
		cin >> items[i];
	}
	for (int i=1; i<size; i++){
		items[i-1] = items[i];
	}
	size--;
	for (int i=0; i<size; i++){
		cout << items[i] << " ";
	}
	return 0;
}