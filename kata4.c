/*-------------------------------------------------------
 * Tarea de Programación Avanzada: Kata 4
 * Fecha: 21-09-2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */
int gemstones(int rocks_size, char** rocks) {
    int i, j, e, sum, min, m;
    char com;
    min = INT_MAX;
    bool k;
    sum = 0;
    for (j = 0; j < rocks_size; j++) {
        if (strlen(rocks[j]) < min) {
            min = strlen(rocks[j]);
            m = j;
        }
    }
    for (j = 0; j < min; j++) {
        com = rocks[m][j];
        k = false;
        for (i = 0; i < rocks_size; i++) {
            if (i == m) continue;
            if (strchr(rocks[i], com) != NULL) k = true;
            else {
                k = false;
                break;
            }
        }
        if (k == true) sum += 1;
    }
    return sum;
}