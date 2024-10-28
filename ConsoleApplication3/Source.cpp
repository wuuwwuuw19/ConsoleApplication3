#include <iostream>
#include <string>
#include <windows.h>
#include "Sattarova.h"
#include <vector>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int c;
	cin >> c;
	int* arr1 = new int[c];  // объявление размера массива
	for (size_t i = 0; i < c; i++) // ввод массива 
	{
		cin >> arr1[i];
	}
	int a = sizeof(arr1[0]) / sizeof(arr1); // определение размера массива
	for (size_t i = 0; i < a; i++) // вывод массива 
	{
		cout << "arr = " << arr1[i] << endl;
	}
	int arr[] = { 13, 5, 19, 1, 17, 8, 11, 23, 5, 33 }; // объявление и инциализация массива
	int length = size(arr); // определение размера массива
	for (size_t i = 0; i < length; i++)
	{
		cout << "arr = " << arr[i] << endl;
	}
	int arr2D[3][3] = { {1, 6, 2}, {3, 11, 4} ,{5, 12, 7} }; // объявление и инциализация двумерного массива
	for (size_t i = 0; i < 3; i++)  // вывод двумерного массива 
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << "arr2D = " << arr2D[i][j];
		}
	}
	int arr2dcin[4][3]; // объявление  двумерного массива
	for (size_t i = 0; i < 4; i++) // ввод двумерного массива 
	{
		for (size_t j = 0; j < 3; j++)
		{
			cin >> arr2dcin[i][j];
		}
	}
	for (size_t i = 0; i < 3; i++)  // вывод двумерного массива 
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << "arr2D = " << arr2dcin[i][j];
		}
	}

	vector<int>vect = { 1, 4, 19, 6, 8, 12, 7, 13, 9 }; // объявление и инциализация вектора
	length = vect.size(); // определение размера вектора
	for (size_t i = 0; i < length; i++) // вывод значений вектора
	{
		cout << "vect = " << vect[i] << "\t ";
	}
	vector<int> v; // объявление вектора
	int len; cout << "Введите размер  вектора" << endl;
	cin >> len; // ввод размера вектора
	for (size_t i = 0; i < len; i++) // ввод значений вектора
	{
		int s; cin >> s;  v.push_back(s);
	}
	for (size_t i = 0; i < len; i++) // вывод вектора
	{
		cout << "v = " << v[i] << endl;
	}
	int* arr_from_vect = new int[len];
	for (size_t i = 0; i < len; i++)
	{
		arr_from_vect[i] = v[i];
	}
	int c1;
	cout << "Введите размер  массива " << endl;
	cin >> c1;
	int* arr2 = new int[c1];  // объявление размера массива

	for (size_t i = 0; i < c; i++) // ввод массива 
	{
		cin >> arr2[i];
	}
	vector<int> v1;
	for (size_t i = 0; i < c1; i++)
	{
		v1[i] = arr2[i];
	}

	vect.at(0) = 9; //заменить значение по индексу
	vect.emplace(vect.begin() + 2, 4); // добавить в определенный индекс значение 
	vect.pop_back(); // удалить последний элемент
	vect.emplace_back(5);
	//cout<<vect.empty()<<endl;
	vect.insert(vect.begin(), { 11, 13, 16 }); // добавить от начала  несколько значений 
	vect.insert(vect.end(), { 2, 1, 21 }); // добавить от конца   несколько значений
	vect.insert(vect.begin() + 3, { 111, 113, 116 }); // добавить от определенной позиции  несколько значений 
	vect.erase(vect.begin() + 3, vect.end() - 3); // оставить зачения  от и до определенной позиции   
	cout << vect.front();
	cout << vect.back();
	vect.erase(vect.begin() + 1); // указываем какое зачение позиции удалять 
	//vect.resize(5); // удалять все элемнты кроме пяти от начала 
	//sort(vect.begin(), vect.end());
	//vect.assign(1, 555); // изменить все зачения на другое значение 
	vector<int> t_vect = { 6, 33 };
	//vect.swap(t_vect); // обменивает значения векторами :


	for (size_t i = 0; i < size(vect); i++)
	{
		cout << vect[i] << endl;
	}

}