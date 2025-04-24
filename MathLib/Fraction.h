#pragma once
#include <iostream>
#include <cmath>
#include <numeric>

namespace mathlib {
    template<typename T>
	class Fraction {
	public:
        Fraction(T numerator, T denominator) {
			m_numerator = numerator;
			if (denominator == 0) {
				m_denominator = 1;
			}else {
				m_denominator = denominator;
			}
		}
        Fraction(){}

        //simple math
        Fraction<T> operator + (const Fraction<T> other) const {
            T top = m_numerator + other.m_numerator;
            T bottom = m_denominator + other.m_denominator;
            return Fraction<T>(top/bottom);
        }
        Fraction<T> operator - (const Fraction<T> other) const {
            T top = m_numerator - other.m_numerator;
            T bottom = m_denominator - other.m_denominator;
            return Fraction<T>(top / bottom);   
        }
        Fraction<T> operator * (const Fraction<T> other) const {
            T top = m_numerator * other.m_numerator;
            T bottom = m_denominator * other.m_denominator;
            return Fraction<T>(top / bottom);
        }
        Fraction<T> operator / (const Fraction<T> other) const {
            T top = m_numerator / other.m_numerator;
            T bottom = m_denominator / other.m_denominator;
            return Fraction<T>(top / bottom);
        }

        //operations for comparing
        Fraction<T> simplify(T numerator, T denominator) {
            T gcd = fmin(numerator, denominator);

            while (gcd > 1) {
                if (numerator % gcd == 0 && denominator % gcd == 0)
                    break;
                gcd--;
            }
            int simplifiedNumerator = numerator / gcd;
            int simplifiedDenominator = denominator / gcd;
            if (denominator < 0) {
                simplifiedNumerator *= -1;
                simplifiedDenominator *= -1;
            }
            //T final = simplifiedNumerator / simplifiedDenominator;
            return Fraction<T>(simplifiedNumerator,simplifiedDenominator);
        }
        Fraction<T> findGCD(int numerator, int denominator) {
            while (denominator != 0) {
                int temp = denominator;
                denominator = numerator % denominator;
                numerator = temp;
            }
            return numerator;
        }

        //comparing
        bool operator == (const Fraction<T> other) const {
            T fraction1 = simplify(m_numerator, m_denominator);
            T fraction2 = simplify(other.m_numerator, other.m_denominator);
            return (fraction1 == fraction2);
        }
        bool operator != (const Fraction<T> other) const {
            T fraction1 = simplify(m_numerator, m_denominator);
            T fraction2 = simplify(other.m_numerator, other.m_denominator);
            return (fraction1 != fraction2);
        }
        bool operator >= (const Fraction<T> other) const {
            T fraction1 = simplify(m_numerator, m_denominator);
            T fraction2 = simplify(other.m_numerator, other.m_denominator);
            return (fraction1 >= fraction2);
        }
        bool operator <= (const Fraction<T> other) const {
            T fraction1 = simplify(m_numerator, m_denominator);
            T fraction2 = simplify(other.m_numerator, other.m_denominator);
            return (fraction1 <= fraction2);
        }
        bool operator > (const Fraction<T> other) const {
            T fraction1 = simplify(m_numerator, m_denominator);
            T fraction2 = simplify(other.m_numerator, other.m_denominator);
            return (fraction1 > fraction2);
        }
        bool operator < (const Fraction<T> other) const {
            T fraction1 = simplify(m_numerator, m_denominator);
            T fraction2 = simplify(other.m_numerator, other.m_denominator);
            return (fraction1 < fraction2);
        }
        
        //returns float value of fraction
        float toFloat() {
            return(m_numerator / m_denominator);
        }

        Fraction<T> getNumerator() {
            return m_numerator;
        }
        Fraction<T> getDenominator() {
            return m_denominator;
        }

        //frends
        friend std::ostream& operator << (std::ostream& ostream, const Fraction<T>& p) {
            ostream << p.m_numerator << ", " << p.m_denominator;
            return ostream;
        }

        friend std::istream& operator >> (std::ostream& istream, Fraction<T>& p) {
            istream >> p.m_numerator;
            istream >> p.m_denominator;

            return istream;
        }

	private:
		T m_numerator = 0;
		T m_denominator = 0;
	};
}

