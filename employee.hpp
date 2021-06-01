#include "vector.hpp"
class Employee{
private:
    Vector positions;
public:
    void loadFromFile(ifstream& file);
    void loadToFile(ofstream& file);
    void work();
	void add();
	void show();
	void findByName();
	void findByAge();
	void findByProfession();
	void findByExp();
	void change();
	void deleteEmployee();
};
