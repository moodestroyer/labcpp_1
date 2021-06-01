#include <iostream>
#include <string>
#include <fstream>
#include "employee.hpp"
using namespace std;
//int main(){
int main(int arc, char** arv){
    //string filename="t.txt";
	if (arc!=2){
		cout<<"Enter only 1 filename"<<endl;
		return 0;
	}
	string filename=arv[1];
	ifstream fileofdatabase;
	fileofdatabase.open(filename);
	if (fileofdatabase.is_open()==false){
		cout<<"Failed to open a file"<<endl;
		return 0;
	}
	Employee basa;
	basa.loadFromFile(fileofdatabase);

	cout<<"-----------------------"<<endl<<"Employee database"<<endl;
	char n=0;
	char m; //????
	while(n!='9'){
		cout<<endl;
		cout<<"1 - Add employee to list"<<endl;
		cout<<"2 - Show list"<<endl;
		cout<<"3 - Find employee by name"<<endl;
		cout<<"4 - Find employee by age"<<endl;
		cout<<"5 - Find employee by profession"<<endl;
		cout<<"6 - Find employee by work experience"<<endl;
		cout<<"7 - Change employee's info"<<endl;
		cout<<"8 - Delete employee from list"<<endl;
		cout<<"9 - Exit"<<endl;
		cin>>n;
		switch(n){
			case '1':
				basa.add();
				break;
			case '2':
				basa.show();
				break;
			case '3':
				basa.findByName();
				break;
			case '4':
				basa.findByAge();
				break;
			case '5':
				basa.findByProfession();
				break;
			case '6':
				basa.findByExp();
				break;
			case '7':
				basa.change();
				break;
			case '8':
				basa.deleteEmployee();
				break;
			case '9':
				break;
			default:
				cout<<"Enter correct number"<<endl;
		}
	}
	ofstream filedatabase;
	filedatabase.open(filename);
	if (filedatabase.is_open()==false){
		cout<<"Failed to open a file"<<endl;
		return 0;
	}
	basa.loadToFile(filedatabase);
	filedatabase.close();
}

