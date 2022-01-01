#include <iostream>
#include "sales.h"

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double vals1[12] = 
    {
        1220, 1100, 1122, 2212, 1232, 2334,
        2884, 2393, 3302, 2922, 2003, 3544
    };

    double vals2[12] =
    {
        12, 11, 22, 21, 32, 34,
        28, 29, 33, 29, 32, 25
    };

    Sales sales1(2011, vals1, 12);
    LabeledSales sales2("Blogstar", 2012, vals2, 12);

    std::cout << "1) First check for exceptions:\n";
    try 
    {
        cout << "Year: " << sales1.getYear() << endl;
        for(int i = 0; i < Sales::MONTHS; ++i)
        {
            cout << sales1[i] << " ";
            if(i % 6 == 5)
                cout << endl;
        }
        cout << endl;
        cout << "Year: " << sales2.getYear() << endl;
        cout << "Label: " << sales2.getLabel() << endl;
        for(int i = 0; i <= Sales::MONTHS; ++i)
        {
            cout << sales2[i] << " ";
            if(i % 6 == 5)
                cout << endl;
        }
        cout << "The end of the first block of try.\n";
    }
    catch(LabeledSales::nbad_index & nbad)
    {
        cout << nbad.what();
        cout << "Company: " << nbad.label_val() << endl;
        cout << "Incorrect index: " <<  nbad.getBiVal() << endl;
    }
    catch(Sales::bad_index & bad)
    {
        cout << bad.what();
        cout << "Incorrect index: " <<  bad.getBiVal() << endl;
    }
    std::cout << "2) Second check for exception:\n";
    try
    {
        sales2[2] = 37.5;
        sales1[20] = 23345;
        cout << "The end of the second block of try.\n";
    }
    catch(LabeledSales::nbad_index & nbad)
    {
        std::cout << nbad.what();
        std::cout << "Company: " << nbad.label_val() << endl;
        std::cout << "Incorrect index: " << nbad.getBiVal() << endl;
    } 
    catch(Sales::bad_index & bad)
    {
        std::cout << bad.what();
        std::cout << "Incorrect index: " << bad.getBiVal() << endl;
    }
    std::cout << "THE END";
    return 0;
}