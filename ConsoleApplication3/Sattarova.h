#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
//‘ункции массива

void _Massiv_v(int* arr, int razmer) //вывод массива 
{  
	cout << "ѕолучаемый массив: " << endl;
	for (int i = 0; i < razmer; i++)
	{
		if (i == 0)
		{
			cout << "{" << arr[i] << ", ";
		}
		else if (i == razmer - 1)
		{
			cout << arr[i] << "}\n";
		}
		else { cout << arr[i] << ", "; }
	}
}


void _Massiv_sort_MinMax(int* arr, int razmer) //сортировка массива по возрастанию 
{
	for (size_t i = 0; i < razmer; i++)
	{
		for (size_t k = 0; k < razmer; k++)
		{
			if (arr[i] < arr[k])
			{
				swap(arr[i], arr[k]);
			}
		}
	}
}


void _Massiv_vivod_MinMax(int* arr, int razmer) // вывод максимального и минимального значение из массива
{
	int Max = arr[0], Min = arr[0];
	for (size_t i = 0; i < razmer; i++)
	{
		if (arr[i] > Max)
		{
			Max = arr[i];
		}
		else if (arr[i] < Min)
		{
			Min = arr[i];
		}
	}
	cout << "Ќаименьшее в массиве: " << Min << endl;
	cout << "Ќаибольшее в массиве: " << Max << endl;
}


int _Massiv_sum(int* arr, int razmer) // сумму всех значений из массива
{
	int sum = 0;
	for (size_t i = 0; i < razmer; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int _Massiv_sredn(int* arr, int razmer) //  среднее значение массива
{
	return _Massiv_sum(arr, razmer) / razmer;
}


void _Massiv_povtor(int* arr, int razmer) //  вывод повторных значений из массива
{													   
	int c;
	const int n = 1000;
	int masiv2[n] = {};
	for (int i = 0; i <= razmer - 1; i++)
	{
		c = arr[i];
		for (int j = i + 1; j <= razmer - 1; j++)
		{
			if (arr[j] == c) { masiv2[i] = c; }
		}
	}
	for (int i = 0; i <= razmer - 1; i++)
	{
		for (int j = i + 1; j <= razmer - 1; j++)
		{
			if (masiv2[j] == masiv2[i]) { masiv2[i] = 0; }
		}
	}
	for (int j = 0; j <= n - 1; j++)
	{
		if (masiv2[j] != 0)
		{
			cout << "ѕовтор€ещиес€ значение : " << masiv2[j] << endl;
		}
	}
	cout << "ќстальные значени€ не повтор€тс€\n";
}


void _Massiv_to_Vector(int* arr, int razmer, vector <int>& vect) // перевод значений из массива в вектор
{
	for (int i = 0; i < razmer; i++)
	{
		vect.push_back(arr[i]);
	}
}

//‘ункции дл€ вектора

void _Vector_vivod(vector<int>vector) // вывод вектора 									  
{
	cout << "ѕолучаемый вектор: ";
	for (int i = 0; i < vector.size(); i++)
	{
		if (i == 0)
		{
			cout << "{" << vector[i] << ", ";
		}
		else if (i == vector.size() - 1)
		{
			cout << vector[i] << "}\n";
		}
		else { cout << vector[i] << ", "; }
	}
}


void _Vector_vivod_MinMax(vector<int> vector) //  вывод макс и мин значение из вектор	
{										 
	int Max = vector[0], Min = vector[0];
	for (size_t i = 0; i < vector.size(); i++)
	{
		if (vector[i] > Max)
		{
			Max = vector[i];
		}
		else if (vector[i] < Min)
		{
			Min = vector[i];
		}
	}
	cout << "Ќаименьшее: " << Min << endl;
	cout << "Ќаибольшее: " << Max << endl;
}


void _Vector_sort_MinMax(vector<int> vector) // сортировка массива по возрастанию 
{
	for (size_t i = 0; i < vector.size(); i++)
	{
		for (size_t k = 0; k < vector.size(); k++)
		{
			if (vector[i] < vector[k])
			{
				swap(vector[i], vector[k]);
			}
		}
	}
}


int _Vector_sum(vector<int> vector) //  сумма всех значений из вектора
{
	int sum = 0;
	for (int i = 0; i < vector.size(); i++)
	{
		sum += vector[i];
	}
	return sum;
}
int _Vector_sredn(vector<int> vector) // среднее значение вектора
{
	return _Vector_sum(vector) / vector.size();
}


void _Vector_povtor(vector<int> vect) // вывод повторных значений из вектора
{
	int c;
	vector<int>vector2(1000);
	for (int i = 0; i <= size(vect) - 1; i++)
	{
		c = vect[i];
		for (int j = i + 1; j <= size(vect) - 1; j++)
		{
			if (vect[j] == c) { vector2[i] = c; }
		}
	}
	for (int i = 0; i <= size(vect) - 1; i++)
	{
		for (int j = i + 1; j <= size(vect) - 1; j++)
		{
			if (vector2[j] == vector2[i]) { vector2[i] = 0; }
		}
	}
	for (int j = 0; j <= size(vector2) - 1; j++)
	{
		if (vector2[j] != 0)
		{
			cout << "ѕовтор€ещиес€ значение: " << vector2[j] << endl;
		}
	}
	cout << "¬се остальные значени€ не повтор€тс€\n";
}


void _Vector_to_Massiv(vector<int>vect, int* arr)// перенос значений из вектора в массив
{
	for (size_t i = 0; i < vect.size(); i++)
	{
		arr[i] = vect[i];
	}
}


//ќстальные 

int _Kolvo(int n)
{
	if (n == 0) { return 1; }
	return (int)log10(n) + 1;
}

void _sortPoKolvu(int* arr, int razmer)
{
	for (size_t i = 0; i < razmer - 1; i++)
	{
		for (size_t j = 0; j < razmer - i - 1; j++)
		{
			if (_Kolvo(arr[j]) > _Kolvo(arr[j + 1]))
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

