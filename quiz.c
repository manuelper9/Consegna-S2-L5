#include <stdio.h>


int main() {
    char risposta1, risposta2, risposta3, risposta4, risposta5;
    char scelta, giocaAncora;
    char nome [20];
    int punteggioTotale = 0;

    printf("Benvenuto! Questo e' un quiz a punteggio. Guadagnerai un punto per ogni risposta esatta\n");
    printf("Premi invio per proseguire\n");
    getchar();

    do {
        punteggioTotale = 0;

        do {
            printf("A) Iniziare una nuova partita\n");
            printf("B) Uscire dal gioco\n");
            printf("Fai la tua scelta (A o B): ");
            scanf(" %c", &scelta);

            if (scelta == 'A' || scelta == 'a') {
                printf("Benvenuto!\nInserisci il tuo nome (massimo 19 caratteri): ");
                scanf(" %19s", nome);
                printf("Ciao %s! Hai scelto di iniziare una nuova partita!\n", nome);



                // Domanda 1
                do {
                    printf("\nDomanda 1: Quanto fa 2 + 2?\n");
                    printf("A) 3\n");
                    printf("B) 4\n");
                    printf("C) 5\n");
                    printf("Inserisci la tua risposta (A, B o C): ");
                    scanf(" %c", &risposta1);

                    if (risposta1 == 'B' || risposta1 == 'b') {
                        punteggioTotale++;     //incrementa il punteggio di 1 se la risposta è corretta
                        printf("Corretto! Hai guadagnato 1 punto.\n");
                    } else if (risposta1 != 'A' && risposta1 != 'a' && risposta1 != 'C' && risposta1 != 'c') {
                        printf("Risposta non valida. Inserisci A, B o C.\n");
                    } else {
                        printf("Sbagliato! La risposta corretta era B.\n");
                    }
                } while (risposta1 != 'A' && risposta1 != 'a' && risposta1 != 'B' && risposta1 != 'b' &&
                        risposta1 != 'C' && risposta1 != 'c');  //ripropone la domanda se l'utente non inserisce uno dei caratteri previsti (a, b o c)

                // Domanda 2
                do {
                    printf("\nDomanda 2: Quanto fa 5 * 3?\n");
                    printf("A) 8\n");
                    printf("B) 20\n");
                    printf("C) 15\n");
                    printf("Inserisci la tua risposta (A, B o C): ");
                    scanf(" %c", &risposta2);

                    if (risposta2 == 'C' || risposta2 == 'c') {
                        punteggioTotale++;
                        printf("Corretto! Hai guadagnato 1 punto.\n");
                    } else if (risposta2 != 'A' && risposta2 != 'a' && risposta2 != 'B' && risposta2 != 'b') {
                        printf("Risposta non valida. Inserisci A, B o C.\n");
                    } else {
                        printf("Sbagliato! La risposta corretta era C.\n");
                    }
                } while (risposta2 != 'A' && risposta2 != 'a' && risposta2 != 'B' && risposta2 != 'b' &&
                        risposta2 != 'C' && risposta2 != 'c');

                // Domanda 3
                do {
                    printf("\nDomanda 3: Qual e' la capitale dell'Italia?\n");
                    printf("A) Parigi\n");
                    printf("B) Madrid\n");
                    printf("C) Roma\n");
                    printf("Inserisci la tua risposta (A, B o C): ");
                    scanf(" %c", &risposta3);

                    if (risposta3 == 'C' || risposta3 == 'c') {
                        punteggioTotale++;
                        printf("Corretto! Hai guadagnato 1 punto.\n");
                    } else if (risposta3 != 'A' && risposta3 != 'a' && risposta3 != 'B' && risposta3 != 'b') {
                        printf("Risposta non valida. Inserisci A, B o C.\n");
                    } else {
                        printf("Sbagliato! La risposta corretta era C.\n");
                    }
                } while (risposta3 != 'A' && risposta3 != 'a' && risposta3 != 'B' && risposta3 != 'b' &&
                        risposta3 != 'C' && risposta3 != 'c');

                // Domanda 4
                do {
                    printf("\nDomanda 4: Chi e' il presidente della repubblica italiana?\n");
                    printf("A) Berlusconi\n");
                    printf("B) Mattarella\n");
                    printf("C) Gerry Scotti\n");
                    printf("Inserisci la tua risposta (A, B o C): ");
                    scanf(" %c", &risposta4);

                    if (risposta4 == 'B' || risposta4 == 'b') {
                        punteggioTotale++;
                        printf("Corretto! Hai guadagnato 1 punto.\n");
                    } else if (risposta4 != 'A' && risposta4 != 'a' && risposta4 != 'C' && risposta4 != 'c') {
                        printf("Risposta non valida. Inserisci A, B o C.\n");
                    } else {
                        printf("Sbagliato! La risposta corretta era B.\n");
                    }
                } while (risposta4 != 'A' && risposta4 != 'a' && risposta4 != 'B' && risposta4 != 'b' &&
                        risposta4 != 'C' && risposta4 != 'c');

                // Domanda 5
                do {
                    printf("\nDomanda 5: Cosa ha due ruote?\n");
                    printf("A) Triciclo\n");
                    printf("B) Moto\n");
                    printf("C) Macchina\n");
                    printf("Inserisci la tua risposta (A, B o C): ");
                    scanf(" %c", &risposta5);

                    if (risposta5 == 'B' || risposta5 == 'b') {
                        punteggioTotale++;
                        printf("Corretto! Hai guadagnato 1 punto.\n");
                    } else if (risposta5 != 'A' && risposta5 != 'a' && risposta5 != 'C' && risposta5 != 'c') {
                        printf("Risposta non valida. Inserisci A, B o C.\n");
                    } else {
                        printf("Sbagliato! La risposta corretta era B.\n");
                    }
            } while (risposta5 != 'A' && risposta5 != 'a' && risposta5 != 'B' && risposta5 != 'b' &&
                    risposta5 != 'C' && risposta5 != 'c');

        
                printf("\nIl tuo punteggio finale e': %d\n", punteggioTotale);

                printf("Vuoi giocare ancora? (S per si, qualsiasi altro tasto per no): ");
                scanf(" %c", &giocaAncora);

            } else if (scelta == 'B' || scelta == 'b') {
                printf("Hai scelto di uscire dal gioco. Arrivederci!\n");
                return 0;
            } else {
                printf("Scelta non valida.\n");
            }

        } while (scelta != 'A' && scelta != 'a' && scelta != 'B' && scelta != 'b');     //se l'utente inserisce un carattere diverso da quelli richiesti gli sarà riproposta la domanda

    } while (giocaAncora == 'S' || giocaAncora == 's');  //se l'utente acconsente gli sarà riproposto il gioco

    return 0;
}
