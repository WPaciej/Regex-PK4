// Regex.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

// Laboratorium – Wyrażenia regularne (regex)

#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <algorithm>

/* Lekka pomoc
Podstawowe regex:
.        dowolny znak
\d       cyfra
\w       litera lub cyfra
+        jeden lub więcej
*        zero lub więcej
?        opcjonalne
{n}      dokładnie n
{n,}     co najmniej n

^        początek tekstu
$        koniec tekstu

[abc]    jeden z: a b c
[a-z]    zakres

()       grupa
|        alternatywa

W C++ wygodnie jest używać RAW STRING:

R"(regex)"

dzięki temu nie trzeba uciekać znaków \\
np.

regex r(R"(\d+)");
*/

using namespace std;


// -----------------------------
// Funkcja pomocnicza
// -----------------------------
template<typename T>
static void drukuj(const T& cont)
{
    cout << "{ ";
    for (const T::value_type& el : cont)
        cout << el << " ";
    cout << "}\n";
}



// ----------------------------------------------------
// Główna część programu
// ----------------------------------------------------
int main()
{

    cout << "PROSZE WPISAC SWOJE IMIE I NAZWISKO\n";


    int Uruchomzad = 5;

    /* =========================================================
       LABORATORIUM – WYRAŻENIA REGULARNE (regex)

       Celem ćwiczenia jest poznanie biblioteki <regex> w C++.

       Do dyspozycji macie funkcje:
       - regex_match()
       - regex_search()
       - regex_replace()
       - sregex_iterator

       W każdym zadaniu należy wpisać odpowiedni regex.
       ========================================================= */

    if (Uruchomzad == 1) {

        // ----------------------------------------------------
        // ZADANIE 1 – WYCIĄGANIE LICZB
        // ----------------------------------------------------
        cout << "\n\nZAD 1: WYCIAGANIE LICZB Z TEKSTU\n";

        /* Zadanie:
            W podanym tekście znajdź wszystkie liczby
            i zapisz je do wektora numbers.

            Wykorzystaj jedną z funkcji biblioteki <regex>:
            - regex_match()
            - regex_search()
            - regex_replace()
            - sregex_iterator
        */

        string text = "User1 scored 120 points, User2 scored 95 points, User3 scored 100.";

        vector<int> numbers;

        regex number_pattern; // TODO

        // TODO:
        // użyj jednej z funkcji biblioteki <regex> aby znaleźć liczby w tekście i zapisać je do wektora numbers

        drukuj(numbers);
        
        cout << "(pop: {120 95 100})\n";

    }




    if (Uruchomzad == 2) {

        // ----------------------------------------------------
        // ZADANIE 2 – ZAMIANA TEKSTU
        // ----------------------------------------------------
        cout << "\n\nZAD 2: CENZURA TEKSTU\n";

        /* Zadanie:
            Zamień wszystkie wystąpienia słowa "stupid"
            na "***".

            Wybierz odpowiednią funkcję z biblioteki <regex>.
        */

        string text2 =
            "This project is stupid and this bug is stupid.";

        regex bad_word; // TODO

        // TODO:
        // użyj jednej z funkcji biblioteki <regex> aby znaleźć wszystkie wystąpienia stupid i zastąpić je ***

        string result; // TODO

        cout << result << endl;

        cout << "(pop: This project is *** and this bug is ***)\n";

    }

    if (Uruchomzad == 3) {

        // ----------------------------------------------------
        // ZADANIE 3 – FILTROWANIE LOGINÓW
        // ----------------------------------------------------
        cout << "\n\nZAD 3: FILTROWANIE LOGINOW\n";

        /* Zadanie:          

            Login musi:
            - mieć minimum 5 znaków
            - zawierać tylko:
                litery
                cyfry
                znak _

            Sprawdź które loginy są poprawne
            używając biblioteki <regex>.


            Dodatkowe pytanie:
                Jak zmodyfikować regex, aby znak '_' nie mógł wystąpić na początku loginu?
        */

        vector<string> logins =
        {
            "admin123",
            "user",
            "john_99",
            "x",
            "test_user_123"
        };

        vector<string> correct;

        regex login_pattern; // TODO

        // TODO:
        // sprawdź które loginy są poprawne i zapisz je do wektora correct

        for (const auto& login : logins)
            {
                // TODO
            }

        drukuj(correct);

        cout << "(pop: {admin123 john_99 test_user_123})\n";


        cout << "\n================\n";
        cout << "Koniec programu\n";

    }

    if (Uruchomzad == 4) {
        // ----------------------------------------------------
        // ZADANIE 4 – WALIDACJA EMAIL
        // ----------------------------------------------------
        cout << "\n\nZAD 4: WALIDACJA EMAIL\n";

        /* Zadanie:
           Napisz wyrażenie regularne sprawdzające poprawność adresu email.

           Wymagania:
           - przed @ mogą być litery, cyfry oraz kropka
           - musi występować znak @
           - domena musi zawierać przynajmniej jedną kropkę
           - końcówka domeny musi mieć min. 2 znaki

           Przykłady poprawne:
           student@agh.edu.pl
           test@test.com
           john.doe@company.org
        */

        vector<string> emails =
        {
            "student@agh.edu.pl",
            "test@test.com",
            "bad_email.com",
            "user@domain",
            "john.doe@company.org"
        };

        regex email_pattern; // TODO

        for (const auto& e : emails)
        {
            //TODO
        }

        cout << "(poprawne: student@agh.edu.pl, test@test.com, john.doe@company.org)\n";

    }

    if (Uruchomzad == 5) {

        // ----------------------------------------------------
        // ZADANIE 5 – PARSER LOGÓW
        // ----------------------------------------------------
        cout << "\n\nZAD 5: PARSER LOGOW\n";

        /* Zadanie:
            Z loga wyciągnij:

            LEVEL
            DATE
            MESSAGE

            używając grup w regexie ().

            przykład:
            [INFO] 2024-03-01 User logged in
        */

        vector<string> logs =
        {
            "[INFO] 2024-03-01 User logged in",
            "[ERROR] 2024-03-01 Database connection failed",
            "[WARNING] 2024-03-02 Low memory"
        };

        regex log_pattern; // TODO

        // TODO:
        // użyj jednej z funkcji biblioteki <regex> (regex_match, regex_search)
        // aby wyciągnąć LEVEL, DATE i MESSAGE z loga

        for (auto& log : logs)
        {
            // TODO
            // jeśli regex złapie, wypisz FULL, LEVEL, DATE i MESSAGE
        }

    }
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
