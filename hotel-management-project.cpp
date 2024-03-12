
#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    
    //quantity total
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    //food items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    // total price of items
    int Total_rooms = 0, Total_pasta = 0 , Total_burger = 0, Total_noodles = 0, Total_Shake = 0, Total_chicken = 0;

    //initial items reporting
    cout<<"\n\t quantity of items we have";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of Pasta : ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger : ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles : ";
    cin>>Qnoodles;
    cout<<"\n Quantity of shakes : ";
    cin>>Qshake;
    cout<<"\n Quantity of chicken : ";
    cin>>Qchicken;

    label:

    cout<<"\n\t\t\t please select an item from the menu";
    cout<<"\n\n1) rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) noodle";
    cout<<"\n5) shake";
    cout<<"\n6) chicken";
    cout<<"\n7) Information regarding sales and collection ";
    cout<<"\n8) exit";

    cout<<"\n\n please enter your choice ";
    cin>>choice;

    //needs more break statements and way to automatically populate 0 if i want to skip menu item

    switch(choice)
    {
        case 1:
            cout<<"\n\n Enter the number of rooms you want: ";

            cin>>quant;
            if(Qrooms - Srooms>= quant)
            {
                Srooms = Srooms + quant;
                Total_rooms = Total_rooms + quant * 1200;
                cout<< "\n\n\t\t "<<quant<<"room/s have been set aside for you!";
            }
            else
            {
                cout<<"\n\tOnly"<<Qrooms-Srooms<<" are left";
                break;
            }

        case 2:
            cout<<"\n\n Enter the number of pasta you want: ";

            cin>>quant;
            if(Qpasta - Spasta>= quant)
            {
                Spasta = Spasta + quant;
                Total_pasta = Total_pasta + quant * 5;
                cout<< "\n\n\t\t "<<quant<<" ounces of pasta has been set aside for you!";
            }
            else
            {
                cout<<"\n\tOnly"<<Qpasta-Spasta<<" oz. left";
                break;
            }
        case 3:
            cout<<"\n\n Enter the number of patties you want: ";

            cin>>quant;
            if(Qburger- Sburger>= quant)
            {
                Sburger = Sburger + quant;
                Total_burger = Total_burger + quant * 10;
                cout<< "\n\n\t\t "<<quant<<"patties have been set aside for you!";
            }
            else
            {
                cout<<"\n\tOnly"<<Qnoodles-Snoodles<<" are left";
                break;
            }
         case 4:
            cout<<"\n\n Enter the number of noodles you want: ";

            cin>>quant;
            if(Qnoodles - Snoodles>= quant)
            {
                Snoodles = Snoodles + quant;
                Total_noodles = Total_noodles + quant * 3;
                cout<< "\n\n\t\t "<<quant<<"noodles have been set aside for you!";
            }
            else
            {
                cout<<"\n\tOnly"<<Qnoodles-Snoodles<<" are left";
                break;
            }
        case 5:
            cout<<"\n\n Enter the number of Shakes you want: ";

            cin>>quant;
            if(Qshake - Sshake>= quant)
            {
                Sshake = Sshake + quant;
                Total_Shake = Total_Shake + quant * 8;
                cout<< "\n\n\t\t "<<quant<<"shakes have been set aside for you!";
            }
            else
            {
                cout<<"\n\tOnly"<<Qshake-Sshake<<" are left";
                break;
            }
        case 6:
            cout<<"\n\n Enter the number of pieces chicken you want: ";

            cin>>quant;
            if(Qchicken - Schicken >= quant)
            {
                Schicken = Schicken + quant;
                Total_chicken = Total_chicken + quant * 12;
                cout<< "\n\n\t\t "<<quant<<"pieces of chicken have been set aside for you!";
            }
            else
            {
                cout<<"\n\tOnly"<<Qchicken-Schicken<<" are left";
                break;
            }
        case 7:
            
        cout<<"\n\t\tDetails of sales and collection ";
        cout<<"\n\n Number of rooms we had : "<<Qrooms;
        cout<<"\n\n Number of rooms we exchanged for rent"<<Srooms;
        cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
        cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;

        cout<<"\n\n Number of rooms we had : "<<Qpasta;
        cout<<"\n\n Number of rooms we exchanged for rent"<<Spasta;
        cout<<"\n\n Remaining rooms : "<<Qpasta-Spasta;
        cout<<"\n\n Total rooms collection for the day : "<<Total_pasta;

        cout<<"\n\n Number of rooms we had : "<<Qburger;
        cout<<"\n\n Number of rooms we exchanged for rent"<<Sburger;
        cout<<"\n\n Remaining rooms : "<<Qburger-Sburger;
        cout<<"\n\n Total rooms collection for the day : "<<Total_burger;

        cout<<"\n\n Number of rooms we had : "<<Qnoodles;
        cout<<"\n\n Number of rooms we exchanged for rent"<<Snoodles;
        cout<<"\n\n Remaining rooms : "<<Qnoodles-Snoodles;
        cout<<"\n\n Total rooms collection for the day : "<<Total_noodles;

        cout<<"\n\n Number of rooms we had : "<<Qshake;
        cout<<"\n\n Number of rooms we exchanged for rent"<<Sshake;
        cout<<"\n\n Remaining rooms : "<<Qshake-Sshake;
        cout<<"\n\n Total rooms collection for the day : "<<Total_Shake;

        cout<<"\n\n Number of rooms we had : "<<Qchicken;
        cout<<"\n\n Number of rooms we exchanged for rent"<<Schicken;
        cout<<"\n\n Remaining rooms : "<<Qchicken-Schicken;
        cout<<"\n\n Total rooms collection for the day : "<<Total_chicken;

        case 8:
            exit(0);

            default:
                cout<<"\n Please select the number mentioned above!";
    };
    goto label;
    0;
}