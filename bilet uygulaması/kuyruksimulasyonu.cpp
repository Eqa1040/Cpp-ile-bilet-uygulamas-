#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> ticketQueue;
    int choice;
    string name;

    do {
        cout << "\n=== Bilet Sistemi ===" << endl;
        cout << "1. Bilet al" << endl;
        cout << "2. Siradaki kullaniciyi isle" << endl;
        cout << "3. Kuyruktaki kullanicilari goruntule" << endl;
        cout << "4. Cikis" << endl;
        cout << "Seciminiz: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Adinizi girin: ";
                cin >> name;
                ticketQueue.push(name);
                cout << name << " siraya eklendi." << endl;
                break;

            case 2:
                if (!ticketQueue.empty()) {
                    cout << ticketQueue.front() << " isleniyor..." << endl;
                    ticketQueue.pop();
                } else {
                    cout << "Kuyruk bos!" << endl;
                }
                break;

            case 3:
                if (!ticketQueue.empty()) {
                    cout << "Kuyruktaki kullanicilar: ";
                    queue<string> tempQueue = ticketQueue;
                    while (!tempQueue.empty()) {
                        cout << tempQueue.front() << " ";
                        tempQueue.pop();
                    }
                    cout << endl;
                } else {
                    cout << "Kuyruk bos!" << endl;
                }
                break;

            case 4:
                cout << "Cikis yapiliyor..." << endl;
                break;

            default:
                cout << "Gecersiz secim! Tekrar deneyin." << endl;
        }
    } while (choice != 4);

    return 0;
}
