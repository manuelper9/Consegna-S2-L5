#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{
	char scelta = {'\0'};
	menu ();
	scanf ("%c", &scelta);                    //ho sostituito con %c prevista nella variabile char

	switch (scelta)
	{
		case 'A':
		moltiplica();
		break;
		case 'B':
                dividi();
                break;
		case 'C':
                ins_string();
                break;
	}

return 0;

}


void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica ()
{
	short int  a,b = 0;
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%hd", &a);       //ho sostituito con %hd che è previsto nella variabile short int
	scanf ("%hd", &b);       //ho sostituito con %hd che è previsto nella variabile short int

	short int prodotto = a * b;

	printf ("Il prodotto tra %hd e %hd e': %hd", a,b,prodotto);  //ho sostituito con %hd che è previsto nella variabile short int
}


void dividi ()
{
        int  a,b = 0;
        printf ("Inserisci il numeratore:");
        scanf ("%d", &a);
	printf ("Inserisci il denumeratore:");
        scanf ("%d", &b);

        int divisione = a / b;     //ho sostituito % con / che si utilizza per le divisoni

        printf ("La divisione tra %d e %d e': %d", a,b,divisione);
}





void ins_string () 
{
	    char stringa[10];
        printf ("Inserisci la stringa:");
        scanf ("%s", stringa);      //ho rimosso la &
}

