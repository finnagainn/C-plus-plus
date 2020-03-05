/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Kaffeein Bellamy  3/12/2019
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    std::string movieName;
    double adultTicketPrice, childTicketPrice, percentDonation;
    int adultTicketsSold, childTicketsSold, totalTickets;
    
    totalTickets = adultTicketsSold + childTicketsSold;

    cout << "Enter movie name:      ";
    std::getline(std::cin, movieName);
    cout << "Enter the price of an adult ticket:   $";
    cin >> adultTicketPrice;
    cout << "Enter the price of a child ticket:    $";
    cin >> childTicketPrice;
    cout << "Enter the number of adult tickets sold:     ";
    cin >> adultTicketsSold;
    cout << "Enter the number of child tickets sold:     ";
    cin >> childTicketsSold;
    cout << "Enter percentage of donation:      ";
    cin >> percentDonation;

    double grossAmount, amountDonated, netSale;

    grossAmount = (adultTicketPrice * adultTicketsSold) + (childTicketPrice * childTicketsSold);
    amountDonated = (grossAmount * percentDonation)  / 100;
    netSale = grossAmount - amountDonated;

    
    std::cout << string(movieName.length() + 50, '*') << endl;
    std::cout << std::setfill ('.') << std::setw (50);

    std::cout.width(50); std::cout << std::left << "Movie Name: ";
    std::cout << std::right << movieName << '\n';

    std::cout.width(50); std::cout << std::left << "Number of Tickets Sold: ";
    std::cout << std::right << (adultTicketsSold + childTicketsSold) << '\n';

    std::cout.width(50); std::cout << std::left << "Gross Amount: ";
    std::cout << std::right << setprecision (2) << fixed << "$" << grossAmount << '\n';

    std::cout.width(50); std::cout << std::left << "Percentage of Gross Amount Donated: ";
    std::cout << std::right << setprecision (2) << fixed << percentDonation << "%" << '\n';

    std::cout.width(50); std::cout << std::left << "Amount Donated: ";
    std::cout << std::right << setprecision (2) << fixed << "$" << amountDonated << '\n';

    std::cout.width(50); std::cout << std::left << "Net Sale: ";
    std::cout << std::right << setprecision (2) << fixed << "$" << netSale << '\n';
    std::cout << string(movieName.length() + 50, '*') << endl;

    return 0;
}

