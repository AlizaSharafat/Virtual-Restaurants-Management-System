# Virtual-Restaurants-Management-System

A fully functional food ordering system built in C++ as a console application. Supports 20+ real Lahore restaurants across four cuisines, with end-to-end order placement, discount handling, bill generation, and order tracking.

Features

Multi-cuisine support: Italian, Pakistani, Chinese, and Japanese restaurants — 20+ establishments with real menus and prices
Full ordering flow: Browse menus → select items → set quantities → modify or remove items → confirm order
Customer management: Collects name, address, and phone number with input validation
Discount system: Influencer promo codes applied at checkout with automatic bill recalculation
Dual-currency billing: Totals displayed in both PKR and USD with live conversion
Order tracking: Track active order status post-placement
Special instructions: Free-text delivery notes attached to each order
Randomized order IDs: 9-digit order numbers generated at confirmation
Dynamic console UI: Formatted, centered order receipts that adapt to console window width


Restaurants Included
CuisineRestaurantsItalianItalian Express, Paola's Cosa Nostra, Italian Slice, Tuscany Courtyard, EI MomentoPakistaniHaveli, Salt 'n Pepper, DERA, Bundo Khan, MonalChineseXiwang, PF Chang's, Mandarin Chinese, Lung Fung, Yum Chinese & ThaiJapaneseWasabi, KAI, Jushi, Fujiyama, Sukhi Sushi

Tech Stack

Language: C++
Libraries: iostream, fstream, string, iomanip, windows.h
Data: Menu data stored in .txt files, loaded via ifstream
UI: Console-based with dynamic formatting using setw and iomanip


Project Structure
├── Code/
│   └── Project_CPP.cpp          
│
├── Data/
│   ├── Italian Express.txt
│   ├── Paola's Cosa Nostra.txt
│   ├── ... ( .txt files)
│   └── confirm.txt         
     
Course
Object-Oriented Programming 