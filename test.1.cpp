#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

const double pi = 3.14;
class Ball
{
public:
	void setR(int r)
	{
		m_R = r;
	}
	int getR()
	{
		return m_R;
	}

	double calculates()
	{
		return 4 * pi * m_R*m_R;
	}
	double calculatev()
	{
		return (double)(4* pi * m_R * m_R * m_R/3);
	}
private:
	int m_R;
};


class Cube:public Ball
{
public:
	void setL(int l)//获取长
	{
		m_L = l;
	}
	int getL()//得到长
	{
		return m_L;
	}

	int calculateS()
	{
		return 6 * (m_L * m_L );
	}
	int calculateV()
	{
		return m_L * m_L * m_L;
	}
private:
	int m_L;
};

int main()
{
	Cube c1;
	c1.setL(10);
	cout << c1.calculateS()<< endl;
	cout << c1.calculateV()<< endl;
	Ball b1;
	b1.setR(10);
	cout << b1.calculates() << endl;
	cout << b1.calculatev() << endl;
	system("pause");
	return 0;
}