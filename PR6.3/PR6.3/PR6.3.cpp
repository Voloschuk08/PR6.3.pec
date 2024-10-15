#include <iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;

// 1. обчислення суми квадратів елементів масиву для звичайної функція
int sumOfSquares(int a[], int n, int i = 0) 
{
    if (i == n) return 0;
    return a[i] * a[i] + sumOfSquares(a, n, i + 1); // Рекурсія
}

// 2. Шаблон функції для обчислення суми квадратів елементів масиву
template <typename T>
T sumOfSquaresTemplate(T a[], int n, int i = 0) 
{
    if (i == n) return 0;
    return a[i] * a[i] + sumOfSquaresTemplate(a, n, i + 1); // Рекурсія
}

// Рекурсивна функція для виведення масиву
void printArray(int a[], int n, int i = 0) 
{
    if (i == n) 
    {
        cout << endl;
        return;
    }
    cout << a[i] << " ";
    printArray(a, n, i + 1); // Рекурсія для наступного елемента
}

// Основна функція
int main() 
{
    srand((unsigned)time(NULL));  // Ініціалізація генератора випадкових чисел
    const int n = 10; 
    int a[n];

    // Генерація масиву випадкових чисел
    for (int i = 0; i < n; i++) 
    {
        a[i] = rand() % 10 + 1; // Числа від 1 до 10
    }

    // Виведення початкового масиву
    cout << "Initial array: ";
    printArray(a, n);

    // 1. Використання звичайної рекурсивної функції для обчислення суми квадратів
    int sum = sumOfSquares(a, n);
    cout << "Sum of squares: " << sum << endl;

    // 2. Використання шаблонної функції для обчислення суми квадратів
    int templateSum = sumOfSquaresTemplate(a, n);
    cout << "Sum of squares: " << templateSum << endl;

    return 0;
}
