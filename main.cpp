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
    double ** allDistances;
public:
    Cities()
    {
        this->n = 0;
    }
    Cities(int num)
    {
        this->n = num;
        cities = new City[n];

        allDistances = new double* [this->n];
        for(int i = 0; i < this->n; i++)
        {
            allDistances[i] = new double [this->n];
        }
    }
    void SetCitiesCordinateAndCalculateAllDistance()
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

        for(int i = 0; i < this->n; i++)
        {
            for(int j = 0; j < this->n; j++)
            {
                if(i == j)
                {
                    allDistances[i][j] = 0;
                    continue;
                }
                allDistances[i][j] = this->CalculateDistance(i,j);

            }
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
        int i = city1;
        int j = city2;

        double distance;
        distance = pow((cities[i].x - cities[j].x),2)+pow((cities[i].y - cities[j].y),2);
        distance = sqrt(distance);
        return distance;
    }

    void PrintAllDistance()
    {
        for(int i = 0; i < this->n; i++)
        {
            cout<<"Distance from ("<<cities[i].x<<","<<cities[i].y<<") to \n\n";
            for(int j = 0; j < this->n; j++)
            {
                cout<<"\t\t("<<cities[j].x<<","<<cities[j].y<<") is :: "<<allDistances[i][j]<<endl;
            }
            cout<<endl<<endl;
        }
    }


};

int main()
{
    int n;
    cout<<"Enter the number of cities : ";
    cin>>n;
    Cities cities(n);
    cities.SetCitiesCordinateAndCalculateAllDistance();
    cities.ShowAllCities();
    cities.PrintAllDistance();

}
