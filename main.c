#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <math.h>

/** @brief Calcola se un punto appartiene ad una retta
 Verifica se il punto di coordinate P(px,py) appartiene alla retta
 di equazione ax + by + c = 0
 @return true se il punto appartiene, false in tutti gli altri casi
*/
bool appartiene_punto_retta(int a, int b, int c, int px, int py);

/** @brief Calcola il coefficiente angolare di una retta
 La retta ha equazione ax + by + c = 0
 @return il coefficiente angolare della retta
*/
float calcola_coefficiente_angolare(float a, float b, float c);

int main()
{
    /** IMPORTANTE */
    /* NON MODIFICARE IL CONTENUTO DEL MAIN!!! */

    int n_punti_test = 0;

    /** Test funzione appartiene_punto_retta */
    {
        int a = 0, b = 0, c = 0, px = 0, py = 0;
        bool appartiene = false;

        // Test
        a = 2;
        b = 1;
        c = -5;
        px = 2;
        py = 1;
        appartiene = appartiene_punto_retta(a, b, c, px, py);
        printf("Il punto P(%d,%d) appartiene alla retta %dx%+dy%+d=0: %s\n", px, py, a, b, c, appartiene ? "true" : "false");
        assert(appartiene == true);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        a = 2;
        b = 1;
        c = -5;
        px = 1;
        py = 1;
        appartiene = appartiene_punto_retta(a, b, c, px, py);
        printf("Il punto P(%d,%d) appartiene alla retta %dx%+dy%+d=0: %s\n", px, py, a, b, c, appartiene ? "true" : "false");
        assert(appartiene == false);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        a = 2;
        b = 2;
        c = 0;
        px = -1;
        py = 1;
        appartiene = appartiene_punto_retta(a, b, c, px, py);
        printf("Il punto P(%d,%d) appartiene alla retta %dx%+dy%+d=0: %s\n", px, py, a, b, c, appartiene ? "true" : "false");
        assert(appartiene == true);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        a = 2;
        b = 1;
        c = -5;
        px = 0;
        py = 0;
        appartiene = appartiene_punto_retta(a, b, c, px, py);
        printf("Il punto P(%d,%d) appartiene alla retta %dx%+dy%+d=0: %s\n", px, py, a, b, c, appartiene ? "true" : "false");
        assert(appartiene == false);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        a = 0;
        b = 0;
        c = 0;
        px = 1;
        py = 1;
        appartiene = appartiene_punto_retta(a, b, c, px, py);
        printf("Il punto P(%d,%d) appartiene alla retta %dx%+dy%+d=0: %s\n", px, py, a, b, c, appartiene ? "true" : "false");
        assert(appartiene == false);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        a = 1;
        b = 0;
        c = 0;
        px = 0;
        py = 1;
        appartiene = appartiene_punto_retta(a, b, c, px, py);
        printf("Il punto P(%d,%d) appartiene alla retta %dx%+dy%+d=0: %s\n", px, py, a, b, c, appartiene ? "true" : "false");
        assert(appartiene == true);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        a = 0;
        b = 1;
        c = 0;
        px = 1;
        py = 0;
        appartiene = appartiene_punto_retta(a, b, c, px, py);
        printf("Il punto P(%d,%d) appartiene alla retta %dx%+dy%+d=0: %s\n", px, py, a, b, c, appartiene ? "true" : "false");
        assert(appartiene == true);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        a = 0;
        b = 0;
        c = 0;
        px = 0;
        py = 0;
        appartiene = appartiene_punto_retta(a, b, c, px, py);
        printf("Il punto P(%d,%d) appartiene alla retta %dx%+dy%+d=0: %s\n", px, py, a, b, c, appartiene ? "true" : "false");
        assert(appartiene == false);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");
    }

    /** Test funzione calcola_coefficiente_angolare*/
    {
        float a = 0.0F;
        float b = 0.0F;
        float c = 0.0F;
        float coefficiente = 0.0F;
        const float epsilon = 0.00001F;

        // Test
        a = 2.0F;
        b = 1.0F;
        c = -5.0F;
        coefficiente = calcola_coefficiente_angolare(a, b, c);
        printf("Il coefficiente angoloare della retta %0.1fx%+0.1fy%+0.1f=0: %0.3f\n", a, b, c, coefficiente);
        assert( (coefficiente-2.0F) < epsilon);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        a = 1.0F;
        b = 2.0F;
        c = 5.0F;
        coefficiente = calcola_coefficiente_angolare(a, b, c);
        printf("Il coefficiente angoloare della retta %0.1fx%+0.1fy%+0.1f=0: %0.3f\n", a, b, c, coefficiente);
        assert( (coefficiente-0.5F) < epsilon);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        a = 1.0F;
        b = 1.0F;
        c = 0.0F;
        coefficiente = calcola_coefficiente_angolare(a, b, c);
        printf("Il coefficiente angoloare della retta %0.1fx%+0.1fy%+0.1f=0: %0.3f\n", a, b, c, coefficiente);
        assert( (coefficiente-1.0F) < epsilon);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        a = 0.0F;
        b = 1.0F;
        c = 1.0F;
        coefficiente = calcola_coefficiente_angolare(a, b, c);
        printf("Il coefficiente angoloare della retta %0.1fx%+0.1fy%+0.1f=0: %0.3f\n", a, b, c, coefficiente);
        assert( (coefficiente-0) < epsilon);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        a = 1.0F;
        b = 0.0F;
        c = -1.0F;
        coefficiente = calcola_coefficiente_angolare(a, b, c);
        printf("Il coefficiente angoloare della retta %0.1fx%+0.1fy%+0.1f=0: %0.3f\n", a, b, c, coefficiente);
        assert( coefficiente < -1e10 );
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        a = -1.0F;
        b = 0.0F;
        c = 4.0F;
        coefficiente = calcola_coefficiente_angolare(a, b, c);
        printf("Il coefficiente angoloare della retta %0.1fx%+0.1fy%+0.1f=0: %0.3f\n", a, b, c, coefficiente);
        assert( coefficiente > 1e10 );
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        a = 0.0F;
        b = 0.0F;
        c = 4.0F;
        coefficiente = calcola_coefficiente_angolare(a, b, c);
        printf("Il coefficiente angoloare della retta %0.1fx%+0.1fy%+0.1f=0: %0.3f\n", a, b, c, coefficiente);
        assert( isnan(coefficiente) == true);
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");

        // Test
        a = 0.0F;
        b = 0.0F;
        c = 0.0F;
        coefficiente = calcola_coefficiente_angolare(a, b, c);
        printf("Il coefficiente angoloare della retta %0.1fx%+0.1fy%+0.1f=0: %0.3f\n", a, b, c, coefficiente);
        assert( isnan(coefficiente) == true );
        n_punti_test += 1;
        printf("Hai completato %d punto\n", n_punti_test);
        printf("\n");
    }

    printf("Tutti i test sono andati a buon fine");
    printf("Punteggio finale: %d/%d", n_punti_test, n_punti_test);
    return n_punti_test;
}

/** Scrivere qui sotto le implementazioni delle funzioni del compito*/
bool appartiene_punto_retta(int a, int b, int c, int px, int py)
{
    // Correggi il bug e implementa i giusti controlli
    return a * px + b * px + c * py == 0;
}
