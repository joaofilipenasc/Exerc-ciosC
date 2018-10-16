#include <stdio.h>

int main()

{

    int hinicial, minicial, hfinal, mfinal, resultadoh, resultadom;

    scanf("%d %d %d %d", &hinicial, &minicial, &hfinal, &mfinal);

    resultadoh = hfinal - hinicial;

    if (resultadoh < 0) {

        resultadoh = 24 + (hfinal - hinicial);

    }

    resultadom = mfinal - minicial;

    if (resultadom < 0) {

        resultadom = 60 + (mfinal - minicial);

        resultadoh--;

    }

    if (hfinal == hinicial && mfinal == minicial) {

        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

    }

    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", resultadoh, resultadom);

    return 0;

}