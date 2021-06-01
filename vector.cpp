#include "vector.hpp"
using namespace std;
Vector::Vector(){
		Size=0;maxSize=10;
		positions=new position[maxSize];
}
int Vector::getsize(){
	return Size;
}
void Vector::pushback(position newpos){
	if (Size==maxSize){
		position *t=new position[Size+maxSize];
		for (int i=0;i<Size;i++){
				t[i]=positions[i];
		}
		position *temp=positions;
		positions=t;
		t=temp;
		//delete t;//temp
		maxSize+=Size;
	}
	positions[Size]=newpos;
	Size++;
}
void Vector::removeByIndex(int j){
	if ((j<Size)&&(j>=0)){
		Size--;
		for (int i=j;i<Size;i++){
				positions[i]=positions[i+1];
		}
	}
}
Vector::~Vector(){
	delete[] positions;
	positions=nullptr;
}
position& Vector::operator[](int i){
		if (i>=0 && i<Size){
			return positions[i];
		}
		else{
			exit (0);
		}
}

