#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
int main() {
	setlocale(LC_ALL, "Russian");
	int n,sum;
	
	std::cout << "Hello world!\n\n";
	//���������� �������� �������
	/*
	std::cout << "������ �1.\n����������� ������:\n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (10 + 1 - 1) + 1;
		std::cout << arr1[i] << ' ';
	}
	std::cout << std::endl;
	//�����������
	
	//for (int i=4;i>0;i--)
	//	for (int j = 0; j < i; j++) 
	//		if (arr1[j] > arr1[j + 1])
	//			std::swap(arr1[j], arr1[j + 1]);

	//������� ����������
	std::sort(arr1, arr1 + 5);

	std::cout << "�������� ������:\n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";
	*/
	//������ �2.
	/*
	std::cout << "������ �2.\n����������� �� ��� ��� ������:\n";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	sum=0;
	int counter=0;
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (-1+1-(-30))+( - 30);
		std::cout << arr2[i]<<' ';
	}
	std::cout << "\n\n������� ������������ ������� ����������� (-30 �� -1):";
	std::cin >> n;
	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < n)
			counter++;
	}
	std::cout << "������� ����������� �� �����:" << (double)sum / size2 << "\n���������� ���� ����� ����������� ���������� ���� "<<n<<" ��������:" << counter;
	*/
	//������ �3
	
	int m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	std::cout << "������� ������ � ����� ���������:";
	std::cin >> n >> m;
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 101;
		if (arr3[i] >= n && arr3[i] <= m)
			std::cout << i + 1 << ". " << arr3[i] << "\t! \n";
		else
			std::cout << i + 1 << ". " << arr3[i] << "\n";
	}
	

	return 0;
}