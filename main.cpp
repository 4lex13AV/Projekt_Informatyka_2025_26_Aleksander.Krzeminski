/*
Temat projektu: Gra Arkanoid
Opis projektu: Piłka odbija się od paletki sterowanej przez użytkowinika oraz trafia w bloczki umieszczone w górnej części ekranu gry.
Gracz dostaje punkty za każdy zniszczony blok. Gracz rozpoczyna grę z trzema życiami i traci je za każdym razem, kiedy piłka dotknie podłoża.
Po zakończonej grze, w zależności od wygranej lub przegranej, gracz może zapisać swój wynik oraz wpisać swój nick.
Wszystkie wyniki zapisują się w pliku wyniki.txt, które później są ładowane do głównego Menu.
Sterowanie w Grze:
Ruch w lewo - A / Strzałka lewo
Ruch w prawo - D / Strzałka prawo
Rozpoczęcie gry (wypuszczenie piłki) - Spacja

Sterowanie w Menu:
Przemieszczanie - Strzałka góra / Strzałka dół
Wybór opcji - Enter
Wyjście z opcji - ESC
*/

#include "Gra.h"

int main() {
	Gra gra;
	gra.run();
}
