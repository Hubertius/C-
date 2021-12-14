#include "dma.h"

void menuPanel();
void printDMS(DMA ** dms, int count);
int main()
{
    const int DMA_COUNT = 4;
    DMA * dmas[DMA_COUNT]; 
    for(int i = 0; i < DMA_COUNT; i++)
    {
        menuPanel();
        int choice;
        do
        {
            (std::cin >> choice).ignore();
            if(std::cin.bad())
                std::cin.clear();
        } while (choice < 1 || choice > 3);
        
        std::cout << "Write label: ";
        char label[40];
        std::cin.getline(label, 40);
        std::cout << "Write rating: ";
        int rating;
        (std::cin >> rating).ignore();
        if(choice == 1)
        {
            dmas[i] = new BaseDMA(label,rating);
            std::cout << std::endl;
            std::cout << "Label: " << label << std::endl;
            std::cout << "Ratin: " << rating << std::endl;
        }
        else if(choice == 2)
        {
            std::cout << "Write color: ";
            char color[40];
            std::cin.getline(color,40);
            dmas[i] = new LacksDMA(color, label, rating);
        }
        else // choice == 3
        {
            std::cout << "write style: ";
            char style[40];
            std::cin.getline(style,40);
            dmas[i] = new HasDMA(style, label, rating);
        }
    }
    printDMS(dmas, DMA_COUNT);
    for(int i = 0; i < DMA_COUNT; i++)
        delete dmas[i];
    
}

void menuPanel()
{
    std::cout << "Panel action:\n";
    std::cout << "1) make BbaseDMA" << std::endl;
    std::cout << "2) make LacksDMA" << std::endl;
    std::cout << "3) make HasDMA" << std::endl;
    std::cout << std::endl;
}

void printDMS(DMA **  dms, int count)
{
    for(int i = 0; i < count; i++)
    {
        dms[i]->readInfo();
        std::cout << std::endl;
    }
}
