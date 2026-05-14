# Virtual Restaurants Management System

A fully functional food ordering system built in C++ as a console application.  
Supports 20+ Lahore restaurants across multiple cuisines with complete order placement, billing, and tracking functionality.

---

## Features

- Multi-cuisine support (Italian, Pakistani, Chinese, Japanese)
- Full ordering workflow with cart modification
- Customer information validation
- Discount and promo code system
- Dual-currency billing (PKR & USD)
- Order tracking system
- Delivery instructions support
- Randomized 9-digit order IDs
- Dynamic formatted console UI

---

## Restaurants Included

### Italian
- Italian Express
- Paola's Cosa Nostra
- Italian Slice
- Tuscany Courtyard
- El Momento

### Pakistani
- Haveli
- Salt 'n Pepper
- DERA
- Bundo Khan
- Monal

### Chinese
- Xiwang
- PF Chang's
- Mandarin Chinese
- Lung Fung
- Yum Chinese & Thai

### Japanese
- Wasabi
- KAI
- Jushi
- Fujiyama
- Sukhi Sushi

---

## Tech Stack

| Component | Details |
|---|---|
| Language | C++ |
| Libraries | iostream, fstream, string, iomanip, windows.h |
| Data Storage | `.txt` menu files loaded using `ifstream` |
| Interface | Console-based UI using `setw` and `iomanip` |

---

## Project Structure

```plaintext
Virtual-Restaurants-Management-System/
│
├── Code/
│   └── Project_CPP.cpp
│
├── Data/
│   ├── Italian Express.txt
│   ├── Paola's Cosa Nostra.txt
│   ├── ... (menu files)
│   └── confirm.txt
│
└── README.md
```

---

## Course

Object-Oriented Programming (OOP)