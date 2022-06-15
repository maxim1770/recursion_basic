#include <iostream>
using namespace std;


void out_4(int n, string prefix = "")
{
    if (n == 0)
    {
        cout << prefix << endl;
        return;
    }
    out_4(n - 1, prefix + "1");
    out_4(n - 1, prefix + "0");
}



void out_5(int n, string prefix = "")
{
    char last = prefix.size() ? prefix[prefix.size() - 1] : 0;
    if (n == 1)
    {
        if (last != '1')
            cout << prefix << '1' << endl;
        cout << prefix << '0' << endl;
        return;
    }
    if (last != '1')
        out_5(n - 1, prefix + "1");
    out_5(n - 1, prefix + "0");
}



int main()
{
    setlocale(LC_ALL, "rus");
    int n;

    cout << "Введите n" << endl;
    cin >> n;

    out_4(n);

    cout << endl;
    out_5(n);

    return 0;
}
