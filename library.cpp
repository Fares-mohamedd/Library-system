#include <string>
#include <iostream>
using namespace std;
class library 
{
public:
    int id;
    string name, authorname;
    string available;

}B[100];
int i = 0 ;
void AddBook() {
    cout << " enter book id " << endl;
    cin >> B[i].id;
    cout << " enter book name " << endl;
    cin >> B[i].name;
    cout << " enter book author name " << endl;
    cin >> B[i].authorname;
    cout << " Book available now " << endl;
    cin >> B[i].available;
    i++;
    cout << " Adding Done "<<endl;
    cout << "---------------------------------------------------------------------------------------------------------" << endl;
}
void IdSearch() {
    if (i == 0) {
        cout << " library is empty " << endl<<"------------------------------------------------------------------------------------------------------------"<<endl;
    }
    else {
        int idToSearch, found =0;
        cout << " enter book id for searching " << endl;
        cin >> idToSearch;
        for (int a = 0; a < i; a++) {
            if (idToSearch == B[a].id) {
                cout << "  book name : " << B[a].name << endl;
                cout << " book author name : " << B[a].authorname << endl;
                cout << " Book available now : " << B[a].available << endl;
                cout << "---------------------------------------------------------------------------------" << endl;
                found++;
                break;
            }
        }
        if (found == 0) {
            cout << " book id not found "<<endl;
        }
        cout << "----------------------------------------------------------------------------------------" << endl;
    }
}
void BorrowingBooks() {
    if (i == 0) {
        cout << " library is empty " << endl<<"------------------------------------------------------------------------------------------------------------"<<endl;
    }
    else {
        int idToSearch, found =0;
        cout << " enter book id for Borrowing " << endl;
        cin >> idToSearch;
        for (int a = 0; a < i; a++) {
            if (idToSearch == B[a].id) {
                cout << " Book is unavailable now because it borrowed" << endl;
                cout << "---------------------------------------------------------------------------------" << endl;
                found++;
                break;
            }
        }
        if (found == 0) {
            cout << " book is not available "<<endl;
        }
        cout << "----------------------------------------------------------------------------------------" << endl;
    }
}
void ReturningBooks() {
    if (i == 0) {
        cout << " library is empty " << endl << "------------------------------------------------------------------------------------------------------------" << endl;
    }
    else {
        int idToSearch, found = 0;
        cout << " enter book id for Returning " << endl;
        cin >> idToSearch;
        for (int a = 0; a < i; a++) {
            if (idToSearch == B[a].id) {
                cout << " Book is available , you can return it " << endl;
                cout << "---------------------------------------------------------------------------------" << endl;
                found++;
                break;
            }
        }
        if (found == 0) {
            cout << " book is not available " << endl;
        }
        cout << "----------------------------------------------------------------------------------------" << endl;
    }
}
void UpdatingBooks() {
    if (i == 0) {
        cout << " library is empty " << endl << "------------------------------------------------------------------------------------------------------------" << endl;
    }
    else {
        int idToSearch, found = 0;
        cout << " enter book id for updating " << endl;
        cin >> idToSearch;
        for (int a = 0; a < i; a++) {
            if (idToSearch == B[a].id) {
                cout << " enter book id " << endl;
                cin >> B[a].id;
                cout << " enter book name " << endl;
                cin >> B[a].name;
                cout << " enter book author name " << endl;
                cin >> B[a].authorname;
                cout << " Book available now " << endl;
                cin >> B[a].available;
                cout << " Updating Done " << endl;
                cout << "---------------------------------------------------------------------------------" << endl;
                found++;
                break;
            }
        }
        if (found == 0) {
            cout << " book id not found " << endl;
        }
        cout << "----------------------------------------------------------------------------------------" << endl;
    }
}
void RemovingBooks() {
    if (i == 0) {
        cout << " library is empty " << endl << "------------------------------------------------------------------------------------------------------------" << endl;
    }
    else {
        int idToSearch, found = 0;
        cout << " enter book id for removing " << endl;
        cin >> idToSearch;
        for (int a = 0; a < i; a++) {
            if (idToSearch == B[a].id) {
                cout << " Removing Done " << endl;
                found++;
                i--;
                cout << "---------------------------------------------------------------------------------" << endl;
                break;
            }
        }
        if (found == 0) {
            cout << " book id not found " << endl;
        }
        cout << "----------------------------------------------------------------------------------------" << endl;
    }
}
void Displaying_Books() {
    if (i == 0) {
        cout << " library is empty " << endl << "------------------------------------------------------------------------------------------------------------";
        cout << endl;
    }
    else {
        for (int a = 0; a < i; a++) {
            cout << "  book id : " << B[i].id << endl;
            cout << "  book name : " << B[i].name << endl;
            cout << " book author name : " << B[i].authorname << endl;
            cout << " Book available now : " << B[i].available << endl;
            cout << "---------------------------------------------------------------------------------" << endl;
        }
    }
}
int main()
{
    while (true) {
        cout << " The Alex Library Management System " << endl;
        cout << " 1. Adding Books " << endl;
        cout << " 2. Removing Books " << endl;
        cout << " 3. Updating Books " << endl;
        cout << " 4. Borrowing Books " << endl;
        cout << " 5. Returning Books " << endl;
        cout << " 6. Displaying Books " << endl;
        cout << " 7. Searching " << endl;
        cout << " 8. Exit " << endl;
        cout << " ----------------------------------------------------------------------------" << endl;
        int choice;
        cin >> choice;
        switch (choice) {
        case 1:
            AddBook();
            break;
        case 2:
            RemovingBooks();
            break;
        case 3:
            UpdatingBooks();
            break;
        case 4:
            BorrowingBooks();
            break;
        case 5:
            ReturningBooks();
            break;
        case 6:
            Displaying_Books();
            break;
        case 7:
            IdSearch();
            break;
        case 8:
            exit(0);
        default:
            cout << " wrong choice " << endl;
        }
    }
}

