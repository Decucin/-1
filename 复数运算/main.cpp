#include "cpxNum.h"

int main() {
	double real, imag;
	cout << "�������һ��������ʵ�����鲿: ";
	cin >> real >> imag;
	cpxNum c1(real, imag); //��ʼ����������c1
	cout << "�����ɵĵ�һ��������: ";
	c1.print();
	cout << endl << "������ڶ���������ʵ�����鲿: ";
	cin >> real >> imag;
	cpxNum c2(real, imag); //��ʼ����������c2
	cout << "�����ɵĵڶ���������: ";
	c2.print();
	cout << endl;
	cout << "***********�����������*************" << endl;
	cout << "c1 + c2�Ľ����: "; (c1 + c2).print(); cout << endl;
	cout << "c1 - c2�Ľ����: "; (c1 - c2).print(); cout << endl;
	cout << "c1 * c2�Ľ����: "; (c1 * c2).print(); cout << endl;
	cout << "c1 / c2�Ľ����: "; (c1 / c2).print(); cout << endl;
	cout << "***********����������Խ���*************" << endl;
	return 0;
}