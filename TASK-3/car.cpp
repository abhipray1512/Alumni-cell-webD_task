#include <iostream>

using namespace std;


int min_refills(int d,int m,int n, int stop[])
{
    int current_stop = 0;
    int last_refill;
    int total_refills = 0;

    while(current_stop<=n)
    {
        last_refill = current_stop;
        while((current_stop<=n)&&(stop[current_stop+1]-stop[last_refill]<=m))
        {
            current_stop++;
        }

        if(current_stop == last_refill)
        {

            return -1;
        }
        if(current_stop<=n)
        {
            total_refills++;
        }

    }
    return total_refills;
}

int main()
{
    int d,m,n,stop[n+1];

    cin>>d;
    cin>>m;
    cin>>n;

    for(int i =1; i<n+1; i++)
    {
        cin>>stop[i];
    }
    stop[0] = 0;
    int min = min_refills(d,m,n,stop);
    if(min == -1)cout<<"NOT POSSIBLE"<<endl;
    else
    cout<<min;
    return 0;

}
