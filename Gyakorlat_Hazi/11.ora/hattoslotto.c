// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Py3.20160613a
// 20160613a

#include <stdio.h>
int main(){
    for(int i = 1; i <= 25; i++){
        for(int j = i+1; j <= 30; j++){
            for(int n = j+1; n <= 35; n++){
                for(int m = n+1; m <= 40; m++){
                    for(int k = m+1; k <= 42; k++){
                        for(int l = k+1; l <= 45; l++){
                            int osszeg = i + j + n + m + k + l;
                            int szorzat = i * j * n * m * k * l;
                            if(osszeg == 90 && szorzat == 996300){
                                printf("%d %d %d %d %d %d\n", i, j, n, m, k, l);
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