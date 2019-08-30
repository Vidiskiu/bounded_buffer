#include <iostream>

using namespace std;

int main()
{
    int buffsize = 10;
    int buffer[buffsize], in = 0, out = 0, produce, consume, choice = 0;

    while(choice!=3){
        cout<<"<-Menu-> \n1. Produce\t 2. Consume\t 3. Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice){
        case 1 :
            if((in+1)%buffsize==out){
                cout<<"\nBUFFER IS FULL."<<endl;
            }
            else{
                cout<<"\nEnter the value : ";
                cin>>produce;
                buffer[in] = produce;
                in = (in+1)%buffsize;
            }
        break;
        case 2 :
            if(in==out){
                cout<<"\nBuffer is empty"<<endl;
            }
            else{
                consume = buffer[out];
                cout<<"\nThe consumed value is "<<consume<<endl;
                out = (out+1)%buffsize;
            }
        break;
        }
    }
}
