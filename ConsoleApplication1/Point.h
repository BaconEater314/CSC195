#pragma once


namespace math {
	template<typename T>
	class Point {
	public:
		Point() = default;
		Point(int x, int y) :
			m_x{ x },
			m_y{ y }
		{
		}
		//~Point();

		Point<T> operator + (const Point<T> other) const {
			return Point<T>(m_x + other.m_x, m_y + other.m_y);
		}

		Point<T> operator - (const Point<T> other) const {
			return Point<T>(m_x - other.m_x, m_y - other.m_y);
		}

		bool operator == (const Point<T> other) const {
			T max(T a, T b) { return (a > b) ? a : b; }
			return (m_x == other.m_x && m_y == other.m_x);
		}

		bool operator != (const Point<T> other) const {
			return !(*this == other);
		}

		friend std::ostream& operator << (std::ostream& ostream, const Point<T>& p) {
			ostream << p.m_x << ", " p.m_y;
			return ostream;
		}

		friend stdd::istream& operator >> (std::ostream& istream, Point<T>& p) {
			istream >> p.m_x;
			istream >> p.m_y;

			return istream;
		}

		T getX() { return m_x; }
		T getY() { return m_y; }

	private:
		int m_x = 0;
		int m_y = 0;
	};



	using ipoint_t = Point<int>;
	using fpoint_t = Point<float>;
}
