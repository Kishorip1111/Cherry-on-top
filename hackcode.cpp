#include <iostream>
#include <iomanip>
using namespace std;

class Restaurant {
public:
    int id;
    string name;
    string loc;

    Restaurant() {
        id = 101;
        name = ".............*Cherry On The Top*.............";
        loc = "Pune";
    }

    void display() {
        cout << "Welcome to " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Location: " << loc << endl;
        cout << "Our Branches: Pune, Mumbai, Delhi, Solapur, Pandharpur, Indore, Jaipur, Paranda\n" << endl;
        cout << "Your Trust Our Service... \n\n";
    }
};

class Snacks : public Restaurant {
public:
    int ch;
    int n;
    static float pre, post;

    Snacks() {}

    Snacks(int ch1) {
        ch = ch1;
    }

    void Samosa() {
        cout << "\nMenu \n1.Samosa with Imli chutney\n2.Samosa with Green chutney\n3.Samosa with Imli chutney and Green chutney\n";
        cout << "\nEnter choice: ";
        cin >> n;
        if (n == 1) {
            cout << "Price: Rs. 25 only\n";
            cout << "Your Fresh Samosa with Imli chutney is ready!!!!\n";
            post = 25;
        } else if (n == 2) {
            cout << "Price: Rs. 20 only\n";
            cout << "Your Fresh Samosa with Green chutney is ready!!!!\n";
            post = 20;
        } else if (n == 3) {
            cout << "Price: Rs. 30 only\n";
            cout << "Your Fresh Samosa with Imli and Green chutney is ready!!!!\n";
            post = 30;
        } else {
            cout << "Sorry no other choice available....\n";
            post = 0;
        }
        pre += post;
    }

    void Sandwich() {
        cout << "Enter\n1. Sandwich with cheese\n2. Grilled Sandwich\n3. Grilled Sandwich with extra cheese\n";
        cout << "Enter choice: ";
        cin >> n;
        if (n == 1) {
            cout << "Price: Rs. 70 only\nYour Fresh Sandwich with cheese is ready!!!!\n";
            post = 70;
        } else if (n == 2) {
            cout << "Price: Rs. 90 only\nYour Fresh Grilled Sandwich is ready!!!!\n";
            post = 90;
        } else if (n == 3) {
            cout << "Price: Rs. 120 only\nYour Fresh Grilled Sandwich with extra cheese is ready!!!!\n";
            post = 120;
        } else {
            cout << "Sorry no other choice available....\n";
            post = 0;
        }
        pre += post;
    }

    void Noodles() {
        cout << "Enter\n1. Noodles\n2. Spicy Noodles\n3. Chicken Noodles\n";
        cout << "Enter choice: ";
        cin >> n;
        if (n == 1) {
            cout << "Price: Rs. 80 only\nYour Fresh Noodles is ready!!!!\n";
            post = 80;
        } else if (n == 2) {
            cout << "Price: Rs. 90 only\nYour Fresh Spicy Noodles is ready!!!!\n";
            post = 90;
        } else if (n == 3) {
            cout << "Price: Rs. 150 only\nYour Fresh Chicken Noodles is ready!!!!\n";
            post = 150;
        } else {
            cout << "Sorry no other choice available....\n";
            post = 0;
        }
        pre += post;
    }

    void FrenchFries() {
        cout << "Enter\n1. French Fries\n2. Peri peri French Fries with cheese\n3. Masala French Fries with cheese\n";
        cout << "Enter choice: ";
        cin >> n;
        if (n == 1) {
            cout << "Price: Rs. 70 only\nYour Fresh French Fries is ready!!!!\n";
            post = 70;
        } else if (n == 2) {
            cout << "Price: Rs. 80 only\nYour Fresh Peri peri French Fries with cheese is ready!!!!\n";
            post = 80;
        } else if (n == 3) {
            cout << "Price: Rs. 100 only\nYour Fresh Masala French Fries with cheese is ready!!!!\n";
            post = 100;
        } else {
            cout << "Sorry no other choice available....\n";
            post = 0;
        }
        pre += post;
    }

    void Dosa() {
        cout << "Enter\n1. Plain Dosa\n2. Paper Dosa\n3. Masala Dosa\n";
        cout << "Enter choice: ";
        cin >> n;
        if (n == 1) {
            cout << "Price: Rs. 70 only\nYour Plain Dosa with Aloo Sabji is ready!!!!\n";
            post = 70;
        } else if (n == 2) {
            cout << "Price: Rs. 80 only\nYour Paper Dosa with Aloo Sabji is ready!!!!\n";
            post = 80;
        } else if (n == 3) {
            cout << "Price: Rs. 150 only\nYour Masala Dosa with Aloo Sabji, Coconut Chutney, and Sambhar is ready!!!!\n";
            post = 150;
        } else {
            cout << "Sorry no other choice available....\n";
            post = 0;
        }
        pre += post;
    }

    void Dessert() {
        int dessertChoice, subDessert;
        cout << "\nDessert Menu:\n";
        cout << "1. Gulab Jamun\n2. Kheer\n3. Rasmalai\n4. Cake\n5. Barfi\n6. Ice Cream\n7. Rabri\n";
        cout << "Enter your choice: ";
        cin >> dessertChoice;

        switch (dessertChoice) {
            case 1:
                cout << "1. Simple Gulab Jamun - Rs. 30\n2. Mava Gulab Jamun - Rs. 40\n3. Mava Gulab Jamun with Dry Fruits - Rs. 50\n";
                cout << "Select type: ";
                cin >> subDessert;
                if (subDessert == 1) { post = 30; cout << "Price: Rs. 30 only\nYour Simple Gulab Jamun is ready!!!!\n"; }
                else if (subDessert == 2) { post = 40; cout << "Price: Rs. 40 only\nYour Mava Gulab Jamun is ready!!!!\n"; }
                else if (subDessert == 3) { post = 50; cout << "Price: Rs. 50 only\nYour Mava Gulab Jamun with Dry Fruits is ready!!!!\n"; }
                else cout << "Invalid choice.\n";
                break;

            case 2:
                cout << "1. Vermicelli Kheer - Rs. 35\n2. Rice Kheer - Rs. 40\n3. Wheat Kheer - Rs. 45\n";
                cout << "Select type: ";
                cin >> subDessert;
                if (subDessert == 1) { post = 35; cout << "Price: Rs. 35 only\nYour Vermicelli Kheer is ready!!!!\n"; }
                else if (subDessert == 2) { post = 40; cout << "Price: Rs. 40 only\nYour Rice Kheer is ready!!!!\n"; }
                else if (subDessert == 3) { post = 45; cout << "Price: Rs. 45 only\nYour Wheat Kheer is ready!!!!\n"; }
                else cout << "Invalid choice.\n";
                break;

            case 3:
                cout << "1. Classic Bengali Rasmalai - Rs. 60\n2. Mango Rasmalai - Rs. 70\n3. Rasmalai Cake - Rs. 80\n4. Angoori Rasmalai - Rs. 65\n5. Bread Rasmalai - Rs. 55\n";
                cout << "Select type: ";
                cin >> subDessert;
                if (subDessert == 1) { post = 60; cout << "Price: Rs. 60 only\nYour Classic Bengali Rasmalai is ready!!!!\n"; }
                else if (subDessert == 2) { post = 70; cout << "Price: Rs. 70 only\nYour Mango Rasmalai is ready!!!!\n"; }
                else if (subDessert == 3) { post = 80; cout << "Price: Rs. 80 only\nYour Rasmalai Cake is ready!!!!\n"; }
                else if (subDessert == 4) { post = 65; cout << "Price: Rs. 65 only\nYour Angoori Rasmalai is ready!!!!\n"; }
                else if (subDessert == 5) { post = 55; cout << "Price: Rs. 55 only\nYour Bread Rasmalai is ready!!!!\n"; }
                else cout << "Invalid choice.\n";
                break;

            case 4:
                cout << "1. Chocolate Cake - Rs. 90\n2. Vanilla Cake - Rs. 80\n3. Red Velvet Cake - Rs. 110\n4. Black Forest Cake - Rs. 100\n";
                cout << "Select type: ";
                cin >> subDessert;
                if (subDessert == 1) { post = 90; cout << "Price: Rs. 90 only\nYour Chocolate Cake is ready!!!!\n"; }
                else if (subDessert == 2) { post = 80; cout << "Price: Rs. 80 only\nYour Vanilla Cake is ready!!!!\n"; }
                else if (subDessert == 3) { post = 110; cout << "Price: Rs. 110 only\nYour Red Velvet Cake is ready!!!!\n"; }
                else if (subDessert == 4) { post = 100; cout << "Price: Rs. 100 only\nYour Black Forest Cake is ready!!!!\n"; }
                else cout << "Invalid choice.\n";
                break;

            case 5:
                cout << "1. Coconut Barfi - Rs. 25\n2. Kaju Barfi - Rs. 35\n3. Besan Barfi - Rs. 30\n";
                cout << "Select type: ";
                cin >> subDessert;
                if (subDessert == 1) { post = 25; cout << "Price: Rs. 25 only\nYour Coconut Barfi is ready!!!!\n"; }
                else if (subDessert == 2) { post = 35; cout << "Price: Rs. 35 only\nYour Kaju Barfi is ready!!!!\n"; }
                else if (subDessert == 3) { post = 30; cout << "Price: Rs. 30 only\nYour Besan Barfi is ready!!!!\n"; }
                else cout << "Invalid choice.\n";
                break;

            case 6:
                cout << "1. Vanilla Ice Cream - Rs. 30\n2. Chocolate Ice Cream - Rs. 35\n3. Strawberry Ice Cream - Rs. 40\n";
                cout << "Select type: ";
                cin >> subDessert;
                if (subDessert == 1) { post = 30; cout << "Price: Rs. 30 only\nYour Vanilla Ice Cream is ready!!!!\n"; }
                else if (subDessert == 2) { post = 35; cout << "Price: Rs. 35 only\nYour Chocolate Ice Cream is ready!!!!\n"; }
                else if (subDessert == 3) { post = 40; cout << "Price: Rs. 40 only\nYour Strawberry Ice Cream is ready!!!!\n"; }
                else cout << "Invalid choice.\n";
                break;

            case 7:
                cout << "1. Plain Rabri - Rs. 50\n2. Rabri with Malpua - Rs. 70\n3. Rabri Falooda - Rs. 80\n";
                cout << "Select type: ";
                cin >> subDessert;
                if (subDessert == 1) { post = 50; cout << "Price: Rs. 50 only\nYour Plain Rabri is ready!!!!\n"; }
                else if (subDessert == 2) { post = 70; cout << "Price: Rs. 70 only\nYour Rabri with Malpua is ready!!!!\n"; }
                else if (subDessert == 3) { post = 80; cout << "Price: Rs. 80 only\nYour Rabri Falooda is ready!!!!\n"; }
                else cout << "Invalid choice.\n";
                break;

            default:
                cout << "Invalid Dessert choice.\n";
        }

        pre += post;
    }

    void Bill() {
        cout << "\nTotal Bill: Rs. " << pre << " only" << endl;
    }

    void CancelOrder() {
        pre = 0;
        cout << "\nOrder Cancelled. Total is reset to Rs. 0.\n";
    }
};

float Snacks::pre = 0;
float Snacks::post = 0;

int main() {
    Restaurant r;
    r.display();
    int ch;

    do {
        cout << "\nMenu:\n";
        cout << "1. Samosa\n2. Sandwich\n3. Noodles\n4. French Fries\n5. Dosa\n6. Dessert\n7. Bill\n8. Cancel Order\n9. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;
        Snacks s(ch);

        switch (ch) {
        case 1: s.Samosa(); break;
        case 2: s.Sandwich(); break;
        case 3: s.Noodles(); break;
        case 4: s.FrenchFries(); break;
        case 5: s.Dosa(); break;
        case 6: s.Dessert(); break;
        case 7: s.Bill(); break;
        case 8: s.CancelOrder(); break;
        case 9: cout << "Thank you for visiting us!\n"; break;
        default: cout << "Invalid choice. Try again.\n";
        }
    } while (ch != 9);

    return 0;
}

