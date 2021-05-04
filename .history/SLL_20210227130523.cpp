#include <iostream>

using namespace std;
class Node{
    public:
    int info;
    Node *link;
};
class SLL{
    public:
    Node *head=NULL;
    void create();
    void display();
};
void SLL::create(){

    Node *temp,*prev;
    int d;
    do{
        cout<<"enter the data or enter -1 if u want to stop";
        cin>>d;
        if(d==-1)
        {
            break;
        }
        temp=new Node();
        temp->info=d;
        if(head==NULL)
        head=temp;
        else
        prev->link=temp;
        prev=temp;
    }while(1);
    prev->link=NULL;
}
void SLL::display(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->info<<"\t";
        temp=temp->link;
    }
}
int main()
{
  SLL *a=new SLL();
  a->create();
  a->display();
    //Node* a=new Node();
    //a->create();
    return 0;
}
