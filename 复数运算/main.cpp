#include "cpxNum.h"

int main() {
	double c1_ral, c1_imag, c2_ral, c2_imag;
	cpxNum res;
	char op;
	cout << "��ֱ�������������ʵ�����鲿��" << endl;
	cin >> c1_ral >> c1_imag >> c2_ral >> c2_imag;
	cpxNum c1(c1_ral, c1_imag);
	cpxNum c2(c2_ral, c2_imag);
	do{
		cout << "��ѡ��Ҫ�����������еĲ�������+ - * /��" << endl;
		cin >> op;
		if (op == '+')
			res = c1 + c2;
		else if (op == '-')
			res = c1 - c2;
		else if (op == '*')
			res = c1 * c2;
		else if (op == '/')
			res = c1 / c2;
		else
			cout << "����������������룡" << endl;
	} while (op != '+' && op != '-' && op != '*' && op != '/');
	c1.print();
	cout << " "<<op<<" ";
	c2.print();
	cout << " = ";
	res.print();
	return 0;
}