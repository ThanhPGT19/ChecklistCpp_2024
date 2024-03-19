#include <iostream>
using namespace std;
class Array
{
private:
    int *_pData;
    int _n;

public:
    Array(int n)
    {
        _pData = new int[n];
        _n = n;
    }

    /* Được gọi khi đối số truyền vào là lvalue
    => Hàm này sẽ định nghĩa theo "copy semantics" */
    const Array &Assign(const Array &value)
    {
        this->_pData = new int[value._n];
        this->_n = value._n;
        cout << "1" << endl;
        for (int i = 0; i < value._n; i++)
            this->_pData[i] = value._pData[i];
        return *this;
    }
    /* Được gọi khi đối số truyền vào là rvalue
    => Hàm này sẽ định nghĩa theo "move semantics" */
    const Array &Assign(Array &&value)
    {
        this->_pData = value._pData;
        value._pData = nullptr;
        this->_n = value._n;
        cout << "2" << endl;
        return *this;
    }
};
int main()
{
    Array b(1000000);
    Array a(1);
    Array x(1);
    /* Vì b là lvalue => gọi hàm Assign(const Array&)
    để thực hiện copy dựa theo "copy semantics" */
    a.Assign(b);
    /* Array(1000000) tạo ra một đối tượng tạm, là một rvalue.
    Do đó hàm Assign(Array&&)
    được gọi để thực hiện copy dựa theo Move semantics */
    x.Assign(Array(1000000));
}