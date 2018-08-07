/*
 * Kristina Kolibab
 * Remove Duplicates - playing around with lists and iterators
 * July 26th 2018
 * 
 * Compile: g++ removeDuplicates -std=c++11
 * Execute: ./a.exe
 *
 */

#include <iostream>
#include <list>

using namespace std;

void displayList(list<int> l){
	list<int>::iterator it;
	for(it = l.begin(); it != l.end(); it++) cout << *it <<  " ";
	cout << endl;
}

void removeDuplicates(list<int> &l){	
	list<int>::iterator li1 = l.begin();
	while(li1 != l.end()){
		list<int>::iterator li2 = li1;
		li2++;
		while(li2 != l.end()){
			if(*li1 == *li2){
				li2 = l.erase(li2);
				displayList(l);
			} else{
				li2++;
			}
		}
		li1++;
	}
}

int main(){

	list<int> l = {1,2,4,5,8,8,7,6,5,4,3,2,2,3,3,32,5,4,4,4,1,2,9,7};
	cout << "Before remove duplicates\n";
	displayList(l);
	cout << endl;
	removeDuplicates(l);
	cout << endl;
	cout << "After remove duplicates\n";
	displayList(l);

	return 0;
}
