#include <iostream>

int main() {
  
    int notebooks, pens;
    float notebookCost, penCost, totalCost;

    notebooks = 15;
    pens = 20;
    notebookCost = 2.25;
    penCost = 0.75;
    totalCost = (notebooks * notebookCost) + (pens * penCost);
    
    std::cout << "Total cost of supplies: Rs." << totalCost << std::endl;

    return 0;
}
