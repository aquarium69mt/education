#include <iostream>
#include <string>

using namespace std;

struct User
{
int ID;
string name;
int age;
};

// Семантика функции, которую нужно реализовать
// users - массив пользователей
// N - размер массива
void sort(User *users, int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int k = i; k < N; k++)
        {
            if (users[i].ID > users[k].ID)
            {
                swap(users[i],users[k]);
            }
        }
    }
}

//Функция перестановки местами значений
void swap(User x, User y)
{
    User temp = x;
    x = y;
    y = temp;
}

void print(User *users, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << "users[" << i << "] = { ID: " << users[i].ID << ",  name: " << users[i].name << ", age = " << users[i].age << " }" << endl;
    }
}

int main()
{
    User users[10] = {
        {10, "Игорь", 23},
        {3, "Вася", 17},
        {1, "Елена", 18},
        {9, "Ольга", 20},
        {7, "Выктор", 33},
        {6, "Лариса", 21},
        {4, "Гена", 48},
        {2, "Олег", 24},
        {5, "Женя", 32},
        {8, "Кристина", 13}};

    sort(users, 10);

    print(users, 10);

    return 0;
}
