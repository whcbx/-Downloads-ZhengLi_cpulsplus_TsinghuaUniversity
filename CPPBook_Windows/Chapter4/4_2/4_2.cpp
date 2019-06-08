//4_2.cpp
#include <iostream>
using namespace std;

class Point {	//Point ��Ķ���
public:		//�ⲿ�ӿ�
	Point(int xx = 0, int yy = 0) {	//���캯��
	x = xx;
		y = yy;
	}
	Point(const Point &p);	//�������캯��
	void setX(int xx) 
	{x=xx;}
	void setY(int yy) 
	{y=yy;}

	int getX() const {
		return x;
	}
	int getY() const {
		return y;
	}
private:	//˽������
	int x, y;
};

//��Ա������ʵ��
Point::Point(const Point &p) {
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor" << endl;
}

//�β�ΪPoint�����ĺ���
void fun1(const Point& p) {
	cout << p.getX() << endl;
	//p.setX(1);
}

//����ֵΪPoint�����ĺ���
Point fun2() {
	Point a;
	return a;
}

//������
int main() {
	Point a;	//��һ������A
	Point b(a);	//���һ����A��ʼ��B����һ�ε��ÿ������캯��
	cout << b.getX() << endl;
	fun1(b);		//�����������B��Ϊfun1��ʵ�Ρ��ڶ��ε��ÿ������캯��
	b = fun2();		//������������ķ���ֵ������󣬺�������ʱ�����ÿ������캯��
	cout << b.getX() << endl;
	return 0;
}
