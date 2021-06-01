#include <fstream>
#include <string>
#include <iostream>
using namespace std;
class position{
private:
    string name;
    string profession;
    int age;
	int exp;
public:
    string getName();
    string getProfession();
    int getAge();
	int getExp();
	void setName(string newName);
	void setProfession(string newProfession);
	void setAge(int newAge);
	void setExp(int newExp);
    friend ostream& operator<< (ostream &out, const position &it);
    friend istream& operator>> (istream &in, position &it);
    bool operator== (position& r);
};

