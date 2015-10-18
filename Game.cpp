#include<iostream>
#include<string>
#include"Game.h"
#include"Player.h"

int Game::that_one_player_heve_good_leg(){

	int temp=0;

	for(int i=0;i<get_how_many_players();i++)
	{
		if(players[i].get_leg()==this->get_how_many_leg())
		{
			temp=1;
		}
	}
	return temp;



}


int Game::that_one_player_heve_good_set(){

	int temp=0;

	for(int i=0;i<get_how_many_players();i++)
	{
		if(players[i].get_set()==this->get_how_many_set())
		{
			temp=1;
		}
	}
	return temp;


}

int Game::that_one_player_heve_zero_points()
{
	int temp=0;

	for(int i=0;i<get_how_many_players();i++)
	{
		if(players[i].get_point()==0)
		{
			temp=1;
		}
	}
	return temp;
}

Game::Game(){
this->how_many_leg=0;
	this->how_many_players=0;
	this->how_many_point=0;
	this->how_many_set=0;
	this->who_first=0;
}

 void Game::game()
{
	
	int temps=0;
	cout<<"Ile graczy gra w gre?";
	cin>>temps;
	this->set_how_many_players(temps);
	players=new Player[get_how_many_players()];
	//pêtla prosz¹ca o podanie imienie dla ka¿dego gracza.
	for(int i=0;i<get_how_many_players();i++)
	{
	do
	{
		string temp;
		cout<<"Podaj swoje imie graczu nr."<<(i+1)<<"\n";
		cin>>temp;
		players[i].set_name(temp);
	}
	while(players[i].get_name().size()<3);
	}
	for(int i=0;i<get_how_many_players();i++)
	{
		cout<<players[i].get_name()<<endl;
	}
	
	// wybór przez u¿ytkownika iloœci setów legów i punktów.
	int temp;
	cout<<"Ile gemow chcecie miec w secie?:";
	cin>>temp;
	this->set_how_many_leg(temp);
	cout<<"Ile setow chcecie w meczu? :";
	cin>>temp;
	this->set_how_many_set(temp);
	cout<<"Ile punktow musicie 'stracic' w gemie? : ";
	cin>>temp;
	this->set_how_many_point(temp);
	//pêtla ustawiaj¹ca ka¿demu graczowi 0 setów.
	for(int i=0;i<get_how_many_players();i++)
	{
		players[i].set_set(0);
		cout<<players[i].get_set()<<endl;
	}

	do
	{
		//pêtla ustawiajaca ka¿demu grczowi iloœæ legów na 0.
		for(int i=0;i<get_how_many_players();i++)
		{
	     	players[i].set_leg(0);
	    	cout<<players[i].get_leg()<<endl;
		}

		do
		{
			//pêtla ustawiaj¹ca ka¿demu graczowi dan¹ iloœæ punktów.
			for(int i=0;i<get_how_many_players();i++)
			{
				players[i].set_point(this->get_how_many_point());
				cout<<players[i].get_point()<<endl;
			}
		//do t¹d dobrze 
			do
			{
				system("cls");
				int temp;
				    //pêtla oczekuj¹ca na wpisanie iloœci rzuconych punktów w ka¿dej serii rzutów.
					for(int i=0;i<get_how_many_players();i++)
					{
						//petla wyœiêtlaj¹ca imiê gracza iloœæ setów legó i punktów.
						for(int j=0;j<get_how_many_players();j++)
						{
							cout<<players[j].get_name()<<"  set: "<<players[j].get_set()
								<<"  leg: "<<players[j].get_leg()
							<<" point: "<<players[j].get_point()<<endl;
						}
						
						cout<<players[i].get_name()<<" uzyskal w rzucie: ";
						cin>>temp;
				temp=players[i].get_point()-temp;
				if(temp<0)
				{

				}
				else
				{
				players[i].set_point(temp);
				}
				if(players[i].get_point()==0)
				{
				players[i].set_leg(players[i].get_leg()+1);
				break;
				}
					}
			
				
		
			}
			while(this->that_one_player_heve_zero_points()!=1);
			
		}
		while(this->that_one_player_heve_good_leg()!=1);
		// pêtla sprawdzajaca komu przydzieliæ punkt za zdobycie seta.
		for(int i=0;i<this->get_how_many_players();i++)
		{
			if(players[i].get_leg()==this->get_how_many_leg())
			{
				players[i].set_set(players[i].get_set()+1);
			}
		}
		
	}
	while(that_one_player_heve_good_set()!=1);
	//pêtla sprawdza kto zdoby³ potrzebne sety i wygra³ mecz.
	for(int i=0;i<this->get_how_many_players();i++)
		{
			if(players[i].get_set()==this->get_how_many_set())
			{
				cout<<"Brawo wygral: "<<players[i].get_name();
			}
		}
}

void Game::set_how_many_point(int how_many_point)
{
	this->how_many_point=how_many_point;
}
	int Game::get_how_many_point()
	{
		return this->how_many_point;
	}


void Game::set_how_many_set(int how_many_set)
{
	this->how_many_set=how_many_set;
}



	int Game::get_how_many_set()
{
	return this->how_many_set;
}
	void Game::set_how_many_leg(int how_many_leg)
{
	this->how_many_leg=how_many_leg;
}
	int Game::get_how_many_leg()
{
	return this->how_many_leg;
}

void Game::set_who_first(int who_first)
{
	this->who_first=who_first;
}
int Game::get_who_first()
{
	return this->who_first;
}
int Game::get_how_many_players(){
	return how_many_players;
}
	void Game::set_how_many_players(int how_many_players){
		this->how_many_players=how_many_players;
	}

