#include<iostream>

using namespace std;

// � ��������� ������� ����� ����� ���������
// ����� ��������� : � ������ ������; � ������ �������;
// ������������ �� ���� ������� � ���� ��������.�������� ��������� ������� :
// 3 5 6 7 | 21
// 12 1 1 1 | 15
// 0 7 12 1 | 20
// --------------------
// 15 3 19 9 | 56

int main() {
	setlocale(LC_ALL, "");

	int arr[2][3] = {
		{0, 0, 0},
		{0, 0, 0},
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "arr[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}

	int sumI[2] = { 0, 0 };
	int sumJ[3] = { 0, 0, 0 };
	int allSum = 0;

	// ��������� ����� (��� ����� ���������)
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sumI[i] += arr[i][j];
			sumJ[j] += arr[i][j];
			allSum += arr[i][j];
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}

	// ������ ����� ��� �����
	for (int i = 0; i < 2; i++) {
		cout << "sumI = " << sumI[i] << endl;
	}

	// ������ ����� ��� ��������
	for (int j = 0; j < 3; j++) {
		cout << "sumJ = " << sumJ[j] << endl;
	}

	// ������ ���������� ����� ��� �� ������.
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << " | " << sumI[i] << endl;
		if (i == 1) {
			cout << "----------------" << endl;
			for (int j = 0; j < 3; j++) {
				cout << sumJ[j] << " ";
			}
			cout << " | " << allSum << endl;
		}
	}



	return 0;
}