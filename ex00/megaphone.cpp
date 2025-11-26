# include <iostream>
# include <cctype>

using std::cout;
using std::endl;
using std::toupper;

int main(int ac, char ** av)
{
    if (ac < 2)
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
        return (0);
    }
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j] != '\0'; ++j)
        {
            char c = av[i][j];
            c = static_cast<char>(toupper(static_cast<unsigned char>(c)));
            cout << c;
        }
        if (i + 1 < ac)
            cout << " ";
    }
    cout << endl;
    return (0);
}
