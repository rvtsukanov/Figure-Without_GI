#include "Header.h"
int main() {
	setlocale(LC_ALL, "rus");
	CMy2DPoint A(1,1), B(0, 0);
	CMy2DObject OBJ(A, 0,0,0,0,0); 
	OBJ.SetFig(A, 90, 4, 2, 2, 1);
	cout << "������  " << B << "? - " << OBJ.IsInside(B) << endl;
	OBJ.GetFig(); // ���� ��������� �������
	for (int a = 0; a < 10; a++) {
		cout << "������� " << (a + 1) << " = " << OBJ.an_point[a] << endl;
	};
	cout << A + B << " " <<  A*B << endl;
	system("pause");
	return 0;
}
