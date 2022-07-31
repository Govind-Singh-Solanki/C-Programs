#include<iostream>
#include<stack>
using namespace std;

int solve(int N , int K){
    int sum2 = 0;
    int i = 1;
    int update;
    stack<int> s1;
    while (N != 0)
    {
       update = i;
        int sum = 0;
        while (update != 0)
        {
            int rem = update % 10;
            cout<<"\n rem "<<rem;
            sum= sum + rem;
            cout<<"\n sum is "<<sum;
            update = update / 10;
            cout<<"\n updated is "<<update<<endl;
        }
        if(sum == K || sum < K ){
            s1.push(i);
            cout<<"stack is "<<s1.top()<<endl;
            N--;
        }
        i++;
        cout<<"\n new i  "<< i<<endl;
        
             }
    while (!s1.empty())
    {
        sum2 = sum2 + s1.top();
        s1.pop();

    }
    return sum2;
}

 int main(int argc, const char** argv) {

     int result = solve(7, 4);
     cout<<result;
    return 0;
}