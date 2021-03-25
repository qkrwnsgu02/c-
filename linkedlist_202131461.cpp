#include <iostream>
using namespace std;

struct node {
    string name;
    int id;
    float salary;
    struct node* p_next;
};

struct node* conductor = NULL;
struct node* root = new node;

node* input_node(node* new_node) {
    string n_name;
    int n_id;
    float n_salary;
    cout << "Please input your name: ";
    cin >> n_name;
    cout << "Please input your student ID: ";
    cin >> n_id;
    cout << "Please input your salary: ";
    cin >> n_salary;

    new_node->name = n_name;
    new_node->id = n_id;
    new_node->salary = n_salary;
    new_node->p_next = new node;
    //conductor = new_node;
    return new_node->p_next;
}
void print_node() {
    struct node* ptr;
    ptr = root;
    cout << "----------------------------\n";
    cout << "Name  ////  ID  ////  Salary\n";
    cout << "----------------------------\n";
    while (ptr->p_next != 0) {
        cout << ptr->name << " ";
        cout << "  ////  ";
        cout << ptr->id << " ";
        cout << "  ////  ";
        cout << ptr->salary<< " ";
        cout << "\n";
        ptr = ptr->p_next;
    }
}
int main() {
    conductor = input_node(root);
    for (int i = 1;i < 4;i++) {
        conductor = input_node(conductor);
    }
    conductor->p_next = 0;
    cout << "Display Data\n";
    print_node();
    return 0;
}

