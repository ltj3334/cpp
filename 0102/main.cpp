#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> test_scores { 100,95,99,75,88};

    test_scores.pop_back();

    cout << test_scores.at(3) << endl;
    cout << test_scores.size() << endl;


    vector <vector<int>> movie_ratings
    {
        {1,2,3,4},
        {1,2,3,4},
        {1,4,5,6}
    };

    cout << movie_ratings.at(2).at(3) << endl;

    vector <int> test {10,20,30,40,50};

    test.at(0) = 100;
    test.at(test.size() - 1) = 1000;

    for (int i = 0; i < test.size(); i = i + 1) {
        cout<< test.at(i)<<endl;
    }
    
    return 0;
}