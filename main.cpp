#include <iostream>
#include <string>

using namespace std;

struct dog
{
    int age;
    string name;
    int weight;
};

void func(int sizes_dogs, const dog *massiv)
{
    int maxx = 0;
    int index_max = 0;
    for(int i; i < sizes_dogs; i++)
    {
        if (maxx < massiv[i].weight)
        {
            maxx = massiv[i].weight;
            index_max = i;
        }
    }
    cout << massiv[index_max].age << endl;
    cout << massiv[index_max].name << endl;
    cout << massiv[index_max].weight << endl;
}

int main()
{
    dog labrador = {2, "Rex", 30};
    dog spitz = {3, "Bobik", 5};
    dog husky = {5, "Sharik", 23};

    int sizes_dogs = 3;
    dog *massiv = new dog[sizes_dogs]{labrador, spitz, husky};
    func(sizes_dogs, massiv);
    delete [] massiv;
    return 0;
}
