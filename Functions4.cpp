//MAX OF N NUMBERS

#include<iostream>
using namespace std;

int n;
float maxx, minn, a;

int main()
{
    cin >> n;

    for (int j = 0; j < n; j++)

    {

        float T[5];

        for (int i = 0; i < 5; i++)
        {
            cin >> T[i];
        }

        if (T[0] > T[1]) {
            maxx = T[0];
            minn = T[1];
        }
        else {
            maxx = T[1];
            minn = T[0];
        }

        for (int i = 0; i < 5; i += 2) {

            if (T[i + 2] > T[i + 3]) {
                if (T[i + 2] > maxx) {
                    maxx = T[i + 2];
                    if (T[i + 3] < minn) {
                        minn = T[i + 3];
                    }
                }
            }
            else {

                if (T[i + 3] > maxx) {
                    maxx = T[i + 3];
                    if (T[i + 2] < minn) minn = T[i + 2];
                }
            }
        }
        a = (T[0] + T[1] + T[2] + T[3] + T[4]) / 5.0;

        cout << maxx << endl;
        cout << minn << endl;
        cout << a << endl;
    }

    return 0;
}
