#include<iostream>
using namespace std;

class matrix{

    private:
       int **data;
       int rows;
       int cols;

    public:
       matrix(int,int);
       ~matrix();
       void read();
       void display();
       matrix addition(matrix&);
       matrix subtraction(matrix&);
       matrix multiplication(matrix&);
       int isEqual(matrix&);


};

matrix::matrix(int r, int c){

    rows = r;
    cols= c;
    data = new int*[rows];
    for(int i=0;i < rows; i++){
        data[i] = new int[cols];
    }

    cout << "Matrix Size:" << rows << "x" << cols <<"\n";

}

matrix::~matrix(){

    for(int i=0;i < rows; i++){
        delete[] data[i];
    }
    delete[] data;

    cout << "Matrix size:" << rows << "x" << cols << "\n";
}

void matrix::read(){

    cout << "Enter the " << rows*cols << " elements for the " << rows << "x" << cols << " matrix:\n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin >> data[i][j];
        }
    }
}

void matrix::display(){


    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

matrix matrix::addition(matrix& m){

    matrix result(rows,cols);
    for(int i=0; i < this->rows; i++){
        for(int j=0; j < this->cols; j++){
        result.data[i][j] = this->data[i][j] + m.data[i][j];
        }
    }

    return result;

}

matrix matrix::subtraction(matrix& m){

    matrix result(rows,cols);
    for(int i=0; i < this->rows; i++){
        for(int j=0; j < this->cols; j++){
        result.data[i][j] = this->data[i][j] - m.data[i][j];
        }
    }

    return result;

}

matrix matrix::multiplication(matrix& m){

    matrix result(this->rows,m.cols);
    for(int i=0; i < this->rows; i++){
        for(int j=0; j < m.cols; j++){
            result.data[i][j] = 0;
            for(int k=0; k < this->cols; k++)
            result.data[i][j] += this->data[i][k] * m.data[k][j];
        }
    }
    return result;
}

int matrix::isEqual(matrix& m){

    if(this->rows != m.rows || this->cols != m.cols){
        return 0;
    }

    for(int i=0; i < rows; i++){
        for(int j=0; j < cols; j++){
            if(this->data[i][j]!=m.data[i][j])
            return 0;
        }
    }

    return 1;
}

int main(){

    int r1,r2,c1,c2;
    cout << "Enter dimensions for Matrix 1 (rows and columns): ";
    cin >> r1 >> c1;
    matrix m1(r1,c1);
    m1.read();
    cout << "\nMatrix 1\n";
    m1.display();

    cout << "Enter dimensions for Matrix 2 (rows and columns): ";
    cin >> r2 >> c2;
    matrix m2(r2,c2);
    m2.read();
    cout << "\nMatrix 2\n";
    m2.display();

    cout << "\nChecking for equality.." << std::endl;
    if (m1.isEqual(m2)) {
        cout << "Matrix 1 and Matrix 2 are equal." << endl;
    } else {
        cout << "Matrix 1 and Matrix 2 are NOT equal." << endl;
    }


    // Addition
    if(r1==r2 && c1==c2){
        cout << "\nPerforming Addition..." << endl;
        matrix m3 = m1.addition(m2);
        cout << "Result of addition (M1 + M2): "<< endl;
        m3.display();
    }
    else{
        cout << "\nAddition not possible." << endl;
    }

    // Subtraction
    if (r1 == r2 && c1 == c2) {
        cout << "\nPerforming Subtraction..." << endl;
        matrix m4 = m1.subtraction(m2);
        cout << "Result of Subtraction (M1 - M2):" << endl;
        m4.display();
    } else {
        cout << "\nSubtraction not possible." << endl;
    }
    // Multiplication
    if (c1 == r2) {
        cout << "\nPerforming Multiplication..." << endl;
        matrix m5 = m1.multiplication(m2);
        cout << "Result of Multiplication (M1 * M2):" << endl;
        m5.display();
    } else {
        cout << "\nMultiplication not possible." << endl;
    }

    cout << "\n--- End of Program ---" << endl;
    return 0;
}

















