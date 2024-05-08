// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Py3.20160613a
// 20160613a

#include <stdio.h>
int main(){
    int i, j, n, m, k, l;
    for(i = 1; i <= 25; i++){
        for(j = i+1; j <= 30; j++){
            for(n = j+1; n <= 35; n++){
                for(m = n+1; m <= 40; m++){
                    for(k = m+1; k <= 42; k++){
                        for(l = k+1; l <= 45; l++){
                            int osszeg = i + j + n + m + k + l;
                            int szorzat = i * j * n * m * k * l;
                            if(osszeg == 90 && szorzat == 996300){
                                printf("%d %d %d %d %d %d", i, j, n, m, k, l);
                                return 0;
                            }
                        }
                    }
                }
            }
        } 
    }
    return 0;
}