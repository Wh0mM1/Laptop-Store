#include <iostream>
using namespace std;
struct customer
{
    char name[30];
    int reg_id;
    char add[30];
    float shipping_charged;
};
int company(int n)
{
    int price;
    cout<<"Enter your budget"<<endl;
    cin>>price;
    if (n==1)
    {
        cost:
        cout<<"Select company name"<<endl;
        char c[100];
        cin>>c;
        if(price>30000 && price<=40000)
        {
            if(c[0]=='H' && c[1]=='P')
            {
                cout<<"https://www.amazon.in/HP-Chromebook-14a-na0002TU-Integrated-Graphics/dp/B08C5WLK3P/ref=sr_1_1?dchild=1&keywords=laptops&qid=1628580240&refinements=p_36%3A7252030031%2Cp_89%3AHP&rnid=3837712031&s=computers&sr=1-1"<<endl;
            }
            else if(c[0]=='L' && c[1]=='e'&&c[2]=='n'&&c[3]=='o' && c[4]=='v'&&c[5]=='o')
            {
                cout<<"https://www.amazon.in/Lenovo-82C7A006IH-Windows-10-Integrated-Graphics/dp/B08DHZS1XQ/ref=sr_1_2?dchild=1&keywords=laptops&qid=1628579875&refinements=p_36%3A7252030031&rnid=7252027031&s=computers&sr=1-2"<<endl;
            }
            else if(c[0]=='A' && c[1]=='s'&&c[2]=='u'&&c[3]=='s')
            {
                cout<<"https://www.amazon.in/ASUS-VivoBook-i3-1005G1-Integrated-X415JA-EK104T/dp/B08S4NF565/ref=sr_1_6?dchild=1&keywords=laptops&qid=1628580309&refinements=p_36%3A7252030031%2Cp_89%3AASUS%7CDell&rnid=3837712031&s=computers&sr=1-6"<<endl;
            }
            else
            {
                cout<<"Enter valid name"<<endl;
                cout<<"Valid names are HP/Asus/Lenovo"<<endl;
                goto cost;
            }
        }
        else if(price>40000 && price<=50000)
        {
            if(c[0]=='H' && c[1]=='P')
            {
                cout<<"https://www.amazon.in/HP-Chromebook-14-inch-Celeron-14a-na0010nr/dp/B08529TZMC/ref=sr_1_2?dchild=1&keywords=laptops&qid=1628591626&refinements=p_36%3A7252031031%2Cp_89%3AHP&rnid=3837712031&s=computers&sr=1-2\nhttps://www.amazon.in/HP-Processor-Integrated-Microsoft-Subscription/dp/B09B7B95Q2/ref=sr_1_2?dchild=1&keywords=laptops&qid=1628591577&refinements=p_36%3A7252031031%2Cp_89%3AHP&rnid=3837712031&s=computers&sr=1-2"<<endl;
            }
            else if(c[0]=='L' && c[1]=='e'&&c[2]=='n'&&c[3]=='o' && c[4]=='v'&&c[5]=='o')
            {
                cout<<"https://www.amazon.in/Lenovo-Ideapad-Laptop-Windows-81W800FLIN/dp/B087D4C4H5/ref=sr_1_11?dchild=1&keywords=laptops&qid=1628611287&refinements=p_36%3A7252031031%2Cp_89%3ALenovo%2Cp_n_condition-type%3A8609960031&rnid=8609959031&s=computers&sr=1-11\nhttps://www.amazon.in/Lenovo-81W800FLIN-Accidental-Extended-Warranty/dp/B0952DN1ZH/ref=sr_1_6?dchild=1&keywords=laptops&qid=1628611388&refinements=p_36%3A7252031031%2Cp_89%3ALenovo%2Cp_n_condition-type%3A8609960031&rnid=8609959031&s=computers&sr=1-6"<<endl;
            }
            else if(c[0]=='A' && c[1]=='s'&&c[2]=='u'&&c[3]=='s')
            {
                cout<<"https://www.amazon.in/ASUS-VivoBook14-i3-1005G1-Transparent-X415JA-EK312TS/dp/B08Q37M3KB/ref=sr_1_7?dchild=1&keywords=laptops&qid=1628591399&refinements=p_89%3AASUS%2Cp_36%3A7252031031&rnid=7252027031&s=computers&sr=1-7\nhttps://www.amazon.in/ASUS-i3-1115G4-15-6-inch-Integrated-X513EA-BQ313TS/dp/B08PQWFT2T/ref=sr_1_2?dchild=1&keywords=laptops&qid=1628591399&refinements=p_89%3AASUS%2Cp_36%3A7252031031&rnid=7252027031&s=computers&sr=1-2"<<endl;
            }
            else
            {
                cout<<"Enter valid name"<<endl;
                goto cost;
            }
        }
        else if(price>50000)
        {
            cout<<"we would like to suggest you gaming laptops as professional laptops have limits."<<endl;
            n=2;
        }
    }
    if (n==2)
    {
        cout<<"        These are better only if your budget is above 50,000 Rs."<<endl;
        cout<<"Above 50000Rs Brand doesn't matters your requirements are more important"<<endl;
        if(price>50000 && price<=60000)
        {
            char p;
            cout<<"What is your preferrence\na)Basic\nb)Storage\nc)Performance"<<endl;
            cin>>p;
            switch (p)
            {
                case 'a':
                cout<<"https://www.amazon.in/Lenovo-Ideapad-Windows-Graphics-81LK017UIN/dp/B087D3HNKR/ref=sr_1_6?dchild=1&keywords=gaming+laptops&qid=1628613054&refinements=p_36%3A5000000-6000000&rnid=7252027031&s=computers&sr=1-6"<<endl;
                break;
                case 'b':
                cout<<"https://www.amazon.in/Lenovo-IdeaPad-Windows-Graphics-81Y40183IN/dp/B096SK39ZB/ref=sr_1_3?dchild=1&keywords=gaming+laptops&qid=1628613054&refinements=p_36%3A5000000-6000000&rnid=7252027031&s=computers&sr=1-3"<<endl;
                break;
                case 'c':
                cout<<"https://www.amazon.in/MSI-9SCSR-1040IN-i5-9300H-Graphics/dp/B087QCNDS2/ref=sr_1_9?dchild=1&keywords=gaming+laptops&qid=1628613054&refinements=p_36%3A5000000-6000000&rnid=7252027031&s=computers&sr=1-9"<<endl;
                break;
                default:
                cout<<"I am still learning more"<<endl;
                break;
            }
        }
    }
    struct customer s;
    cout<<"Enter name of customer:";
    cin>>s.name;
    cout<<"Enter address: ";
    cin>>s.add;
    cout<<"Enter Register ID and shipping charges: ";
    cin>>s.reg_id>>s.shipping_charged;
    cout<<"The details of customer are:\n"<<"Name of customer: "<<s.name<<"\nName of address: "<<s.add<<"\nRegister ID: "<<s.reg_id<<"\nShipping Charges: "<<s.shipping_charged<<endl;
}


int32_t main()
{
    int n;
    cout<<"        Best laptop selection!"<<endl;
    cout<<"Choose which kind of laptop do you want:"<<endl;
    again:
    cout<<"1)Professional\n2)Gaming\nEnter a number(1 for professional or 2 for gaming)"<<endl;
    cin>>n;
    if (n>=3)
    {
        cout<<"Please select correct option"<<endl;
        goto again; 
    }
    cout<<company(n)<<endl;
}

