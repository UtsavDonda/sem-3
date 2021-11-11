#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int v)
    {
        value = v;   //first Node ma value 1 save kari
        next = NULL; //darek node ma next ni value NULL kari
    }
    Node() {}
    //functions

    void insert() // new node ni value lidhi
   {   int x;

    cout<<"Enter Number";
    cin>>x;

   
        Node *n = new Node(); //new Node n banavi
        if (this->next == NULL)   //n1 nu next NUll hoy to navo Node banavano
        {                
            this->next = n; //new node ne joint karyo
        }
        else                        // jo next Node NULL no hoy to NUll Node gotyu
        {                        
            Node *pointer = this; //pointer banavyo NUll Node ne gotva // only address mate
            while (pointer->next != NULL)       //jya sudhi NULL pointer no male tya sudhi pointer ne agal chalavano
            {
                pointer = pointer->next;          // pointer ne next Node ma java mate
            }                
            pointer->next = n; //jyare NULL male etle triji node ne joint karva
        }
    }
    void display()
    {
        Node *tmp = this;
        while (tmp != NULL)
        {
            cout << tmp->value << endl;
            tmp = tmp->next;
        }
    }
};

int main()
{
    Node *n1 = new Node(); //first Node n1 create and value 1 pass kari

    
    // n1->insert(2);
    // // n1->insert(3);
    // // n1->insert(4);

    // n1->display();
int n;
do{	
	cout<<"\n1.INSERT";
	cout<<"\n2.DISPLAY";
	cout<<"\n0.EXIT";
	cout<<"\nEnter your choice: ";
	cin>>n;
 
switch(n){
	
    case 1: n1->insert();
	break;
	case 2: n1->display();
	break;
	case 0: exit(0);
    break;
	}
	}while(n=!0);
    return 0;
}
