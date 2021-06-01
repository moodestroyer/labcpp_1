#include "employee.hpp"
using namespace std;
void Employee::loadFromFile(ifstream& file){
	position t;
	while (file>>t){
		positions.pushback(t);
	}
}
void Employee::add(){
	cout<<"Enter the name, age, profession and experience of new person"<< endl;
	position person;
	cin>>person;
	positions.pushback(person);
}
void Employee::show(){
	for (int i=0;i<positions.getsize();i++){
		cout<<positions[i]<<endl;
    }
}
void Employee::findByName(){
    string namee;
    cout<<"Enter the name"<<endl;
    cin>>namee;
	int kol=0;
    for (int i=0;i<positions.getsize();i++){
		if (namee==positions[i].getName()){
        cout<<positions[i]<<endl;
        kol++;
		}
    }
    if (kol==0){
        cout<<"No such person"<<endl;
    }
}
void Employee::findByAge(){
    int agee;
    cout<<"Enter the age"<<endl;
    cin>>agee;
	int kol=0;
    for (int i=0;i<positions.getsize();i++){
		if (agee==positions[i].getAge()){
        cout<<positions[i]<<endl;
        kol++;
		}
    }
    if (kol==0){
		cout<<"No such person"<<endl;
    }
}
void Employee::findByProfession(){
    string prof;
    cout<<"Enter the profession"<<endl;
    cin>>prof;
	int kol=0;
    for (int i=0;i<positions.getsize();i++){
		if (prof==positions[i].getProfession()){
        cout<<positions[i]<<endl;
        kol++;
		}
    }
    if (kol==0){
        cout<<"No such person"<<endl;
    }
}
void Employee::findByExp(){
    int expp;
    cout<<"Enter the aexperience"<<endl;
    cin>>expp;
	int kol=0;
    for (int i=0;i<positions.getsize();i++){
		if (expp==positions[i].getExp()){
        cout<<positions[i]<<endl;
        kol++;
	}
    }
    if (kol==0){
        cout<<"No such person"<<endl;
    }
}

void Employee::change(){
	cout<<"Enter the name, age, profession and experience of person"<< endl;
	position person;
	cin>>person;
	int kol=0;
    for (int i=0;i<positions.getsize();i++){
		if (person==positions[i]){
        positions.removeByIndex(i);
        kol++;
		break;
		}
    }
    if (kol==0){
        cout<<"No such person"<<endl;
    }
	else{
		cout<<"Enter new name, age, profession and experience of person"<<endl;
		cin>>person;
		positions.pushback(person);
	}
}
void Employee::deleteEmployee(){
	cout<<"Enter the name, age, profession and experience of person"<< endl;
	position person;
	cin>>person;
	int kol=0;
    for (int i=0;i<positions.getsize();i++){
		if (person==positions[i]){
		positions.removeByIndex(i);
		kol++;
		break;
		}
    }
    if (kol==0){
        cout<<"No such person"<<endl;
    }
}

void Employee::loadToFile(ofstream& file){
	for (int i=0; i<positions.getsize();i++){
			file<<positions[i]<<endl;
	}
}
