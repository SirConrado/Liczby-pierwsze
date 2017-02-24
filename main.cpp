#include <iostream>
#include <cstdlib>

using namespace std;
class pierwsza{
    int liczba;
public:
    pierwsza(){
    liczba = 2;
    }
    pierwsza(int l){
    liczba = l;
    }
    pierwsza(pierwsza & p){
    liczba = p.liczba;
    }
    int getLiczba(){
        return liczba;
    }
    void setLiczba(int l){
        liczba = l;
    }
    bool czy01(){
        if(liczba == 1 || liczba == 0)
            return true;
        return false;
    }
    bool czyNaturalna(){
        if(liczba > 1)
            return true;
        return false;
    }
    bool czyPierwsza(){
        for(int i = 2; i <= liczba; i++){
            if(liczba == i)
                continue;
            if(liczba % i == 0)
                return false;
            return true;
        }
    }
    bool sprawdz(){
    if(!czy01() && czyNaturalna() && czyPierwsza())
        return true;
    return false;
    }
    void wypiszInfo(){
        if(czy01())
            cout << "Liczba: " << liczba << " jest 0 lub 1 - to znaczy, ze nie jest pierwsza ani zlozona" << endl;
        else if(!czyNaturalna())
            cout << "Liczba: " << liczba << " nie jest naturalna" << endl;
        else if(sprawdz())
            cout << "Liczba: " << liczba << " jest liczba pierwsza" << endl;
        else
            cout << "Liczba: " << liczba << " jest to liczba zlozona" << endl;
    }
};
class menu{
    int menu1,wyswietlMenu;
public:
    menu(){
    menu1 = -1;
    wyswietlMenu = 1;
    }
    void wyswietlMenu1(){
    cout << "Witaj w programie liczby pierwsze. Wybierz co chcesz zrobic: " << endl;
    cout << "1 - sprawdz czy liczba jest pierwsza" << endl;
    cout << "0 - wyjscie z programu" << endl;
    //cout << "11 - pierwiastkowanie" << endl;
    }
    int getMenu1(){
        return menu1;
    }
    int getWyswietlMenu(){
        return wyswietlMenu;
    }
    void setMenu1(int m){
        menu1 = m;
    }
    void setWyswietlMenu(int wM){
        wyswietlMenu = wM;
    }
};
int main()
{
    menu m;
    int liczba, m1;
   while(m.getMenu1() != 0){
        m.wyswietlMenu1();
        cin >> m1;
         if(m1 == 1){
            system("CLS");
            cout << "Liczba piersza:" << endl;
            cout << "Podaj liczbe aby spradzic czy jest pierwsza: ";
            cin >> liczba;
            pierwsza p1(liczba);
            p1.wypiszInfo();
         }
          else if(m1 == 0)
            break;
         else
            cout << "Bledna liczba." << endl;
      }
    return 0;
}
