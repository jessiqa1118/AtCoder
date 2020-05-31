#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

map<string, int> int_var;
map<string, vector<int>> vec_var;

void set_int_var()
{
    string var_name, e, op;
    cin >> var_name;

    while (cin >> op)
    {
        if (op == ";")
        {
            break;
        }

        cin >> e;
        if (op == "=")
        {
            int_var[var_name] = isdigit(e[0]) ? stoi(e) : int_var[e];
        }
        else if (op == "+")
        {
            int_var[var_name] += isdigit(e[0]) ? stoi(e) : int_var[e];
        }
        else if (op == "-")
        {
            int_var[var_name] -= isdigit(e[0]) ? stoi(e) : int_var[e];
        }
    }
}

void print_int()
{
    int int_res;
    string e, op;
    cin >> e;

    int_res = isdigit(e[0]) ? stoi(e) : int_var[e];
    while (cin >> op)
    {
        if (op == ";")
        {
            break;
        }

        cin >> e;
        if (op == "+")
        {
            int_res += isdigit(e[0]) ? stoi(e) : int_var[e];
        }
        else if (op == "-")
        {
            int_res -= isdigit(e[0]) ? stoi(e) : int_var[e];
        }
    }

    cout << int_res << endl;
}

vector<int> get_vec()
{
    vector<int> vec;
    string e, op;
    cin >> e;

    if (e[0] >= 'a' && e[0] <= 'z')
    {
        vec = vec_var[e];
    }
    else if (e == "[")
    {
        op = e;
        do
        {
            if (op == "]")
            {
                break;
            }

            cin >> e;
            vec.push_back((e[0] >= 'a' && e[0] <= 'z') ? int_var[e] : stoi(e));

        } while (cin >> op);
    }

    return vec;
}

void set_vec_var()
{
    string var_name, e, op;
    cin >> var_name;

    while (cin >> op)
    {
        if (op == ";")
        {
            break;
        }

        vector<int> vec = get_vec();
        if (op == "=")
        {
            vec_var[var_name] = vec;
        }
        else if (op == "+")
        {
            for (int i = 0; i < vec_var[var_name].size(); i++)
            {
                vec_var[var_name].at(i) += vec.at(i);
            }
        }
        else if (op == "-")
        {
            for (int i = 0; i < vec_var[var_name].size(); i++)
            {
                vec_var[var_name].at(i) -= vec.at(i);
            }
        }
    }
}

void print_vec()
{
    vector<int> vec_res;
    string op;

    vec_res = get_vec();

    while (cin >> op)
    {
        if (op == ";")
        {
            break;
        }

        vector<int> vec = get_vec();
        if (op == "+")
        {
            for (int i = 0; i < vec_res.size(); i++)
            {
                vec_res.at(i) += vec.at(i);
            }
        }
        if (op == "-")
        {
            for (int i = 0; i < vec_res.size(); i++)
            {
                vec_res.at(i) -= vec.at(i);
            }
        }
    }

    cout << "[ ";
    for (int i = 0; i < vec_res.size(); i++)
    {
        cout << vec_res.at(i) << " ";
    }
    cout << "]" << endl;
}

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "int")
        {
            set_int_var();
        }
        else if (cmd == "print_int")
        {
            print_int();
        }
        else if (cmd == "vec")
        {
            set_vec_var();
        }
        else if (cmd == "print_vec")
        {
            print_vec();
        }
    }
}
