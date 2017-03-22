#include <iostream>
#include <fstream>
#include <math.h>
//#include "Float2DArray.h"

using namespace std;
//Defining the class
class Float2DArray {
	public:
		float& operator()(int i, int j)const;
		void   operator=(const &Float2DArray);
		
		Float2DArray();
		Float2DArray(int rows, int cols);
		~Float2DArray();
		int maxRowIndex() const;
        int maxColumnIndex() const;
        
	private:
		int    numRows;
		int    numCols;
		float* data;	
};



//Constructors
Float2DArray::Float2DArray(){
	(*this).numCols = 0;
	(*this).numRows = 0;
	(*this).data = 0;
}

Float2DArray::Float2DArray(int rows, int cols){
	(*this).numCols = cols;
	(*this).numRows = rows;
	Float2DArray data[rows][cols];


}

Float2DArray::~Float2DArray(){
	(*this).numCols = -1;
	(*this).numRows = 0;
	if (!((*this).data == 0)){
		(*this).data = 0;
	}
}


//Class-Member Methdos
int Float2DArray::maxRowIndex() const{
//Purpose of this is to return the max amount of rows for a certain called object
	int maxRows = 0;
	maxRows = (*this).numRows -1;
	return maxRows;
}

int Float2DArray::maxColumnIndex() const{
//Purpose of this is to return the max amount of columns for a certain called object
	int maxCols = 0;
	maxCols = (*this).numCols -1;
	return maxCols;
}

void Float2DArray::operator= (const &Float2DArray){

}

float& Float2DArray::operator()(int i, int j) const{
	//
	//First check to see if inputted values are within array bounds
	if (i > (*this).maxRowIndex()){
		cerr << "Value is larger than data set" << endl;

	}

	else if (j > (*this).maxColumnIndex()){
		cerr << "Value is larger than data set" << endl;
	}
	//If input is valid  output data location
	else{
		return *data;
	}

}

//Regular Functions
bool readTahoeData (char* filename, Float2DArray &lake) {
	//Open the file containing all the data
	ifstream infile;
	infile.open("LakeTahoeDEM.csv");
	infile.seekg(0, infile.beg);
	
	//Store all the data values into the lake array
	for (int i = 0; i <= lake.maxRowIndex(); i++){
		for (int k = 0; k <= lake.maxColumnIndex(); k++){
			
		}
	}

return true;
}

void cleanData (Float2DArray** &lake) {


}

float area (Float2DArray** &lake) {


}

float volume (Float2DArray** &lake) {


}

void getArraySize (){
	ifstream infile;
	infile.open("LakeTahoeDEM.csv");

	int column = 0;
	int row = 0;

	infile.seekg(0, infile.beg);
	float temp1, temp2;
	infile >> temp1;
	infile >> temp2;

	while (infile.peek() != '\n'){
		if (infile.peek() == ' '){
			column++;
		}
		infile.get();
	}

	infile.seekg(0, infile.beg);
	infile >> temp1;
	infile >> temp2;

	while (infile.peek() != EOF){
		if (infile.peek() == '\n'){
			row++;
		}
		infile.get();
	}

	return;
}


int main(int argc, char* argv[]) {

	Float2DArray** lake;



	return 0;
}