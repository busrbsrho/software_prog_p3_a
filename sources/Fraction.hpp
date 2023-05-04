#pragma once

#include <iostream>

namespace ariel{
    class Fraction{

        private:
        int demonator;
        int numerator;

        public:
        // initializer constructor
        Fraction(int mone, int mechane);

        // Constructor for convert float to fraction
        Fraction(float num);

        /* getters and setters to the members */
        int getDemonator() const;
        int getNumerator() const;
        void setDemonator(int) ;
        void setNumerator(int) ;

        
        friend float FractionToFloat(const Fraction& a);
        // binary operators
        Fraction operator+ (Fraction& other) const;
        friend Fraction operator+ (float frac1, const Fraction& frac2);
        friend Fraction operator+ (const Fraction& frac2, float frac1);
        Fraction operator- (Fraction& other) const;
        friend Fraction operator- (float frac1, const Fraction& frac2);
        friend Fraction operator- (const Fraction& frac2, float frac1);
        Fraction operator* (Fraction& other) const;
        friend Fraction operator* (float frac1, const Fraction& frac2);
        friend Fraction operator* (const Fraction& frac2, float frac1);
        Fraction operator/ (Fraction& other) const;
        friend Fraction operator/ (float frac1, const Fraction& frac2);
        friend Fraction operator/ (const Fraction& frac2, float frac1);
        
        
        
        
        
        bool operator> (Fraction& other) const;
        friend bool operator> (float frac1, const Fraction& frac2);
        friend bool operator> (const Fraction& frac2, float frac1);
        bool operator< (Fraction& other) const;
        friend bool operator< (float frac1, const Fraction& frac2);
        friend bool operator< (const Fraction& frac2, float frac1);
        bool operator>= (Fraction& other) const;
        friend bool operator>= (float frac1, const Fraction& frac2);
        friend bool operator>= (const Fraction& frac2, float frac1);
        bool operator<= (Fraction& other) const;
        friend bool operator<= (float frac1, const Fraction& frac2);
        friend bool operator<= (const Fraction& frac2, float frac1);
        
        
        
        Fraction& operator++();
        const Fraction operator++(int);
        Fraction& operator--();
        const Fraction operator--(int);
        friend bool operator== (const Fraction& frac1, const Fraction& frac2);

        
           
        
        
        // IO operators
        friend std::ostream& operator<< (std::ostream& output, const Fraction& frac);
        friend std::istream& operator>> (std::istream& input, const Fraction& frac);
    }; // end of Fraction class
}
