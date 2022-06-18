#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//vector <type of variables> name_of_vector
//push_back()
//size();
//access an individual element of a vector
//traverse a vector
//traverse using 'iterator'
//vector <int> v(n, value);
int main(){
    cout << "           PRACTICE + REVIEW: VECTOR           " << endl;

    vector <int> v;

    v.push_back(10);
    v.push_back(20);

    cout << v.size() << endl;
    v.push_back(70);
    cout << v.size() << endl;

    cout << "The first element of the vector is: " << v[0] << endl;
    cout <<"The last element of the vector is: " << v[v.size()-1] << endl; // == v.back();

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "Or: a vector can be traversed like: ";
    for (int x: v){
        cout << x << "  ";
    }
    cout << endl;
    cout << "Using iterator: " << endl;
    for (vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout << *it << endl;
    }
    cout << "Using auto: "<< endl;
    for (auto it = v.begin(); it!=v.end(); it++){
        cout << *it << "  ";
    }
    cout << endl;
    cout << *(v.begin()+2) << endl;


    int n; cin >> n;
    vector <int> v2(n, 100);
    for (int i = 0; i < n; i++){
        cout << v2[i] << "  ";
    }




return 0;
}
