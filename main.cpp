#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;
struct City
{
    int x;
    int y;
};

class Cities
{
private:
    City* cities;
    int n;
public:
    Cities()
    {
        this->n = 0;
    }
    Cities(int num)
    {
        this->n = num;
        cities = new City[n];
    }
    void InsertCities()
    {
        for(int i = 0; i < this->n; i++)
        {
            cin>>cities[i]->x>>cities[i]->y;
        }
    }
    void ShowAllCities()
    {
        for(int i = 0; i < n ; i++)
        {
            cout<<"City # "<<i+1<<" ("cities[i]->x<<","<<cities[i]->y<<")\n";
        }
    }


};

int main()
{
    Cities cities(2);
    cities.
}
