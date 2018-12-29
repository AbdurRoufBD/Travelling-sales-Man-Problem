#include<stdio.h>
#include<iostream>
#include<string>
#include<math.h>

using namespace std;
struct City
{
    int x;
    int y;
};

class Cities
{
private:
    City * cities;
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
    void SetCitiesCordinate()
    {
        for(int i = 0; i < this->n; i++)
        {
            int temp;
            cout<<"X:";
            cin>>temp;
            cities[i].x = temp;

            cout<<"Y:";
            cin>>temp;
            cities[i].y = temp;

        }
    }
    void ShowAllCities()
    {
        for(int i = 0; i < n ; i++)
        {
            cout<<"City # "<<i+1<<" ("<<cities[i].x<<","<<cities[i].y<<")\n";
        }
    }

    double CalculateDistance(int city1,int city2)
    {

        if((city1<0 or city1 > n)or(city2<0 or city2 > n))
        {
            cout<<"Invalid City no\n";
            return -1;
        }
       int i = city1-1;
       int j = city2-1;

       double distance;
       distance = pow((cities[i].x - cities[j].x),2)+pow((cities[i].y - cities[j].y),2);
       distance = sqrt(distance);
       return distance;
    }


};

int main()
{
    int n;
    cout<<"Enter the number of cities : ";
    cin>>n;
    Cities cities(n);
    cities.SetCitiesCordinate();
    cities.ShowAllCities();

    //Calculate distance
    int city1;
    int city2;

    cin>>city1>>city2;

    cout<<"Distance : "<<cities.CalculateDistance(city1,city2)<<endl;

}
