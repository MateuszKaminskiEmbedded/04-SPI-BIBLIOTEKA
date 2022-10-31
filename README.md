# 04-SPI-BIBLIOTEKA
Biblioteka składa się zasadniczo z trzech funkcji. Są one jednak powielone, z tego względu, że użyty mikrokontroler ma wbudowanych aż 6 modułów SPI. 

SPI.h
Zawiera deklaracje funkcji. Daje nam do dyspozycji funkcję inicjalizacyjną każdego modułu SPI, funkcję wysyłającą/odbierającą znak, albo wysyłającą/odbierającą łańcuch znaków.

SPI.c
Plik ten zawiera definicję wszystkich funkcji. Funkcje wysyłające/odbierające dane nie wymagają komentarza. Uwagę należy za to zwrócić na funkcje SPIxInit(). To w niej, w razie potrzeby można ustawić parametry takie jak:
- szybkość transmisji
- tryb pracy
- użycie pinu SS - Slave Select
- długość pola danych
- poziom logiczny zegara w czasie bezczynności
- polaryzację zegara

main.c
W pliku tym znajduje się konfiguracja pinów używanych przez wybrane moduły SPI oraz funkcja inicjalizacyjna.

W celu użycia biblioteki należy:
1) Dodać pliki do projktu
2) Dołaczyć plik nagłówkowy do pliku głównego
3) W razie potrzeby dokonać zmian ustawień konfiguracyjnych (np. szybkość transmisji) w pliku SPI.c
4) W funkcji głównej wywołać funkcję inicjalizacyjną konkretny moduł SPI
5) W funkcji głównej skonfigurować piny używane przez wybrane moduły SPI
6) Biblioteka jest gotowa do wysyłania lub odbierania danych poprze SPI
