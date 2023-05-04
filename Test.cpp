#include "sources/Fraction.hpp"
#include "doctest.h"
using namespace ariel;


TEST_CASE("Constructor Check.") {
    
    CHECK_THROWS(Fraction(1, 0));
    
    CHECK_NOTHROW(Fraction(-1, 2));
    
    CHECK_NOTHROW(Fraction(1, 100000000));

    CHECK_NOTHROW(Fraction(100000000,1));

   
}

TEST_CASE("Test Fraction constructor SIMSUM"){
    Fraction a(2,4);
    Fraction b(8,4);
    Fraction c(1,2);
    Fraction d(2,1);
    CHECK(a == c);
    CHECK(b == d);
}


/*test the operators*/
TEST_CASE("Testing addition sub operators"){
    Fraction a(3, 5);
    Fraction b(1, 5);
    Fraction c(1, 5);
    Fraction d(4,10);
     
    CHECK(c+b == Fraction(2, 5));
    CHECK((a+0.2 == 0.2+a));
    CHECK(a-b == Fraction(2, 5));
    CHECK(b-a == Fraction(-2, 5));
    CHECK(a-d == c);




}

TEST_CASE("multiplication  and devision operators"){
    Fraction a(1, 2);
    Fraction b(2, 4);
    Fraction c(5,5);
    Fraction d(4,2);
    Fraction z(0,2);
    CHECK(a*b == Fraction(1, 4));
    CHECK(a*b == b*a);
    CHECK(c/b == c*d);
    CHECK(d*c == d);
    CHECK_THROWS(c/z);

}

TEST_CASE("Test the comparison")
{
    Fraction a(1, 2);
    Fraction b(2, 4);
    Fraction c(5,5);
    Fraction d(4,2);
    Fraction z(0,2);

    CHECK( a == b);
    CHECK(a >= z);
    CHECK(d>=c);
    CHECK(c<=d);
    

}













    
    
    
    
    
    
    
    
   