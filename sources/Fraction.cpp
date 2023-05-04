#include "Fraction.hpp"
#include <algorithm>
#include <cmath>
using namespace ariel;
using namespace std;


Fraction::Fraction(int nume, int denom) : numerator(nume), demonator(denom){ //main constructor
    if(denom == 0){
        throw invalid_argument("Fraction can't be divided by zero");
    }
}

float ariel::FractionToFloat(const Fraction& a) {
    return 0.0;
}

Fraction::Fraction(float num) {}

int Fraction::getNumerator() const{
    return this->numerator;
}

int Fraction::getDemonator() const{
    return this->demonator;
}

void Fraction::setNumerator(int nume) {
    this->numerator = nume;
}

void Fraction::setDemonator(int denom) {
    this->demonator =denom;
}

/////////////////////////////////////////////////////////////////////////////
Fraction Fraction::operator+ (Fraction& other) const{
    return Fraction(1,1);
}

Fraction ariel::operator+ (float f1, const Fraction& f2){
    return Fraction(0,1);
}

Fraction ariel::operator+ (const Fraction& f2, float f1){
    return Fraction(0,1);
}
////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////
Fraction Fraction::operator- (Fraction& other) const{
        return Fraction(1,1);

}

Fraction ariel::operator- (float f1, const Fraction& f2){
    return Fraction(0,1);
}

Fraction ariel::operator- (const Fraction& f2, float f1){
    return Fraction(0,1);
}

/////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////

Fraction Fraction::operator* (Fraction& other) const{
        return Fraction(1,1);

}

Fraction ariel::operator* (float f1, const Fraction& f2){
    return Fraction(0,1);
}

Fraction ariel::operator* (const Fraction& f2, float f1){
    return Fraction(0,1);
}

/////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////
Fraction Fraction::operator/ (Fraction& other) const{
        return Fraction(1,1);

}


Fraction ariel::operator/ (float f1, const Fraction& f2){
    return Fraction(0,1);
}


Fraction ariel::operator/ (const Fraction& f2, float f1){
    return Fraction(0,1);
}
//////////////////////////////////////////////////////////////////////////////////////




/////////////////////////////////////////////////////////////////
bool Fraction::operator> (Fraction& other) const{
    return false;
}

bool ariel::operator> (float f1, const Fraction& f2){
    return false;
}

bool ariel::operator> (const Fraction& f2, float f1){
    return false;
}
//////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////
bool Fraction::operator< (Fraction& other) const{
    return false;
}

bool ariel::operator< (float f1, const Fraction& f2){
    return false;
}

bool ariel::operator< (const Fraction& f2, float f1){
    return false;
}
//////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////
bool Fraction::operator>= (Fraction& other) const{
    return false;
}

bool ariel::operator>= (float f1, const Fraction& f2){
    return false;
}

bool ariel::operator>= (const Fraction& f2, float f1){
    return false;

}




/////////////////////////////////////////////////////////

bool Fraction::operator<= (Fraction& other) const{
    return false;
}

bool ariel::operator<= (float f1, const Fraction& f2){
    return false;
}

bool ariel::operator<= (const Fraction& f2, float f1){
    return false;

}

/////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////





Fraction& Fraction::operator++(){
    numerator += demonator;
    return *this;
}

const Fraction Fraction::operator++(int){
    return *this;
}

Fraction& Fraction::operator--(){
    numerator -= demonator;
    return *this;
}

const Fraction Fraction::operator--(int){
    return *this;
}

bool ariel::operator== (const Fraction& f1, const Fraction& f2){
    return false;
}

std::ostream& ariel::operator<< (std::ostream& output, const Fraction& a){
    
    output << a.getDemonator() << "/" << a.getNumerator();
    return output;
}

std::istream& ariel::operator>> (std::istream& input, const Fraction& f){
   
    return input;
}







