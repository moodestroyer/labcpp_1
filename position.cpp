#include "position.hpp"
using namespace std;
ostream& operator<< (ostream &out, const position &it){
    out<<it.name<<"  "<<it.age<<"   "<<it.profession<<"   "<<it.exp<<"   ";
    return out;
}
istream& operator>> (istream &in, position &it){
    in >> it.name;
    in >> it.age;
    in >> it.profession;
    in >> it.exp;
    return in;
}
bool position::operator==(position& r){
    if ((name==r.name)&&(profession==r.profession)&&(age==r.age)&&(exp==r.exp)){
        return true;
    }
    else{
        return false;
    }
}
string position::getName(){
		return name;
}
string position::getProfession(){
		return profession;
}
int position::getAge(){
        return age;
    }
int position::getExp(){
        return exp;
    }
void position::setName(string newName){
	name=newName;
}
void position::setProfession(string newProfession){
	profession=newProfession;
}
void position::setAge(int newAge){
	age=newAge;
}
void position::setExp(int newExp){
	exp=newExp;
}

