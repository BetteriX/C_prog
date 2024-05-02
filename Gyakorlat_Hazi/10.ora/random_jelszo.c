// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200411a
// 20200411a

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* generate_password(){
    int const kis_betu_kezdo = 97;
    int const kis_betu_vege = 122;
    int const nagy_betu_kezdo = 65;
    int const nagy_betu_vege = 90;
    int const szam_kezdo = 48;
    int const szam_vege = 57;
    char const special_karakter[4] = ".,;'";

    char* password = malloc(13*sizeof(char));
    int index = 0;
    int elozo_ertek = -1; // Olyan értéket adunk meg ennél ami nincsen benne

    while(index < 12){
        int ertek = rand() % 4;

        if(ertek == elozo_ertek) // Ellenőrzi hogy egyenlő-e
            continue; // Ha igen akkor visszamegy a ciklus legelejére

        switch (ertek){
            case 0: // kis betu
                password[index++] = kis_betu_kezdo + rand() % ((kis_betu_vege - kis_betu_kezdo)+1);             
                break;
            case 1: // nagy betu
                password[index++] = nagy_betu_kezdo + rand() % ((nagy_betu_vege - nagy_betu_kezdo)+1);
                break;
            case 2: // szam
                password[index++] = szam_kezdo + rand() % ((szam_vege - szam_kezdo)+1);
                break;
            case 3: // specialis
                password[index++] = special_karakter[rand() % 4];
        }
        elozo_ertek = ertek;
    }

    password[index] == '\0';

    return password;
}


int main(){
    srand(time(NULL));
    
    char* password = generate_password();
    printf("%s\n", password);
    free(password);

    return 0;
}