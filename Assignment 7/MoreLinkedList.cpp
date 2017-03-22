#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

//ofstream outfile("Bufani_Private.txt");


class Bufani{
	private:
		float Dick_Length;
		float Dick_Girth;


	public:
		void getDL();
		void getDG();

		Bufani();
		Bufani(float length, float girth);
		~Bufani();

}

Bufani::Bufani(){
	(*this).Dick_Length = 0;
	(*this).Dick_Girth = 0;

}

Bufani::Bufani(float length, float girth){
	(*this).Dick_Length = length;
	(*this).Dick_Girth = girth;
}

void Bufani::getDL(){
	outfile << (*this).Dick_Length;
}

void Bufani::getDG(){
	outfile << (*this).Dick_Girth;
}


int main(){


	Bufani Bufeenia;
	Bufeenia.getDL();
	Bufeenia.getDG();

	return 0;

}