#ifndef _GAMEDARTGAMEDART
#define _GAMEDARTGAMEDART

#include"Player.h"
//klasa game która posiada pola i metody umo¿liwiaj¹ce zasymulowanie gry w Darta.
//u¿ytkownik sam wybiera iloœæ graczy,iloœæ legów,setów i punktów które trzeba zdoyæ w grze.
class Game :public Player
{
private:
	//pole przechowuj¹ce iloœæ punktów jakie gracz musi straciæ w ka¿dym legu.
	int how_many_point;
	//pole przechowuj¹ce iloœæ legów jakie trzeba zdobyæ w ka¿dym secie
	int how_many_leg;
	// pole przechowuj¹ce iloœæ setów jakie trzeba zdobyæ by wygraæ mecz.
	int how_many_set;
	// pole mówi¹ce o tym kto zaczyna rzucaæ w kolejnym legu.
	int who_first;
	// wskaŸnik typu Player tablica przechowuj¹ca wszystkich playerwów
	Player *players;
	// pole trzeymaj¹ce iloœæ graczy,ograniczenie iteracji w forach.
	int how_many_players;

public:
	//metoda sprawdza czy któryœ z graczy uzyska³ odpowiedni¹ iloœæ punktów w legu.
	int that_one_player_heve_zero_points();
	//metoda sprawdz czy któryœ z graczy ma odpowiedni¹ iloœæ setów by zakoñczyæ grê.
	int that_one_player_heve_good_set();
	// metoda sprawdz czy któryœ z graczy ma odpowiedzni¹ iloœæ legó by zdobyæ seta.
	int that_one_player_heve_good_leg();
	//konstruktor,inicjalizuje pola zerami.
	Game();
	//g³ówna metoda odpowiedzialna za przebieg gry.
	void game();
	//seter do pola who_first.
	void set_who_first(int who_first);
	//geter do pola who_first.
	int get_who_first();
	//seter do pola how_many_point.
	void set_how_many_point(int how_many_point);
	//geter do pola how_many_point.
	int get_how_many_point();
	//seter do pola how_many_set.
	void set_how_many_set(int how_many_set);
	//geter do pola how_many_set.
	int get_how_many_set();
	//seter do pola how_many_leg.
	void set_how_many_leg(int how_many_leg);
	//geter do pola how_many_leg.
	int get_how_many_leg();
	//geter do pola how_many_players.
	int get_how_many_players();
	//seter do pola how_many_players.
	void set_how_many_players(int how_many_players);

};
#endif
