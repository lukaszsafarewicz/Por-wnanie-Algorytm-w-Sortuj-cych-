#include <iostream>
#include <time.h>
#include <windows.h>
#include <iomanip>
using namespace std;

int ile=10000, ile2=100000;

int tablica_m1[10000],tablica_m2[10000],tablica_m3[10000],tablica_m4[10000],tablica_m5[10000];
int tablica_m1_q[10000],tablica_m2_q[10000],tablica_m3_q[10000],tablica_m4_q[10000],tablica_m5_q[10000];
int tablica_m1_u[10000],tablica_m2_u[10000],tablica_m3_u[10000],tablica_m4_u[10000],tablica_m5_u[10000];
int tablica_d1[1000000],tablica_d2[1000000],tablica_d3[1000000],tablica_d4[1000000],tablica_d5[1000000];
int tablica_d1_q[1000000],tablica_d2_q[1000000],tablica_d3_q[1000000],tablica_d4_q[1000000],tablica_d5_q[1000000];
int tablica_d1_u[1000000],tablica_d2_u[1000000],tablica_d3_u[1000000],tablica_d4_u[1000000],tablica_d5_u[1000000];
int tablica_m1_r[10000],tablica_m2_r[10000],tablica_m3_r[10000],tablica_m4_r[10000],tablica_m5_r[10000];
int tablica_m1_r_q[10000],tablica_m2_r_q[10000],tablica_m3_r_q[10000],tablica_m4_r_q[10000],tablica_m5_r_q[10000];
int tablica_m1_r_u[10000],tablica_m2_r_u[10000],tablica_m3_r_u[10000],tablica_m4_r_u[10000],tablica_m5_r_u[10000];
int tablica_d1_r[1000000],tablica_d2_r[1000000],tablica_d3_r[1000000],tablica_d4_r[1000000],tablica_d5_r[1000000];
int tablica_d1_r_q[1000000],tablica_d2_r_q[1000000],tablica_d3_r_q[1000000],tablica_d4_r_q[1000000],tablica_d5_r_q[1000000];
int tablica_d1_r_u[1000000],tablica_d2_r_u[1000000],tablica_d3_r_u[1000000],tablica_d4_r_u[1000000],tablica_d5_r_u[1000000];
int tablica_m1_m[10000],tablica_m2_m[10000],tablica_m3_m[10000],tablica_m4_m[10000],tablica_m5_m[10000];
int tablica_m1_q_m[10000],tablica_m2_q_m[10000],tablica_m3_q_m[10000],tablica_m4_q_m[10000],tablica_m5_q_m[10000];
int tablica_m1_u_m[10000],tablica_m2_u_m[10000],tablica_m3_u_m[10000],tablica_m4_u_m[10000],tablica_m5_u_m[10000];
int tablica_d1_m[1000000],tablica_d2_m[1000000],tablica_d3_m[1000000],tablica_d4_m[1000000],tablica_d5_m[1000000];
int tablica_d1_q_m[1000000],tablica_d2_q_m[1000000],tablica_d3_q_m[1000000],tablica_d4_q_m[1000000],tablica_d5_q_m[1000000];
int tablica_d1_u_m[1000000],tablica_d2_u_m[1000000],tablica_d3_u_m[1000000],tablica_d4_u_m[1000000],tablica_d5_u_m[1000000];
int tablica_d1_u_q[1000000],tablica_d2_u_q[1000000],tablica_d3_u_q[1000000],tablica_d4_u_q[1000000],tablica_d5_u_q[1000000];

clock_t start,stop;
long double czas;

void sortowanie_babelkowe(int *tab, int n);

void czas_start();

void czas_start1();

void czas_stop();

void czas_stop1();

void quicksort_male(int *tablica, int lewy, int prawy);

void quicksort(int *tablica, int lewy, int prawy);

void selection_sort(int tab[],int n);

void przypisanie_male(int tablica[]);

void przypisanie_duze(int tablica[]);

void przepisanie_tab_m(int tab[],int tablica[]);


int main()
{
    cout << "Porownanie czasow sortowania v.1.4" << endl;
srand(time(NULL));

    // gen tablic malych
    przypisanie_male(tablica_m1);
    przypisanie_male(tablica_m2);
    przypisanie_male(tablica_m3);
    przypisanie_male(tablica_m4);
    przypisanie_male(tablica_m5);

    // gen tablic duzych
    przypisanie_duze(tablica_d1);
    przypisanie_duze(tablica_d2);
    przypisanie_duze(tablica_d3);
    przypisanie_duze(tablica_d4);
    przypisanie_duze(tablica_d5);

    //przepisanie tablic duzych dla QS
    przepisanie_tab_m(tablica_d1, tablica_d1_q);
    przepisanie_tab_m(tablica_d2, tablica_d2_q);
    przepisanie_tab_m(tablica_d3, tablica_d3_q);
    przepisanie_tab_m(tablica_d4, tablica_d4_q);
    przepisanie_tab_m(tablica_d5, tablica_d5_q);

    //przepisanie tablic malych dla QS
    przepisanie_tab_m(tablica_m1, tablica_m1_q);
    przepisanie_tab_m(tablica_m2, tablica_m2_q);
    przepisanie_tab_m(tablica_m3, tablica_m3_q);
    przepisanie_tab_m(tablica_m4, tablica_m4_q);
    przepisanie_tab_m(tablica_m5, tablica_m5_q);


    //przepisanie tablic malych rosnące dla QS
    przepisanie_tab_m(tablica_m1,tablica_m1_r_q);
    przepisanie_tab_m(tablica_m2,tablica_m2_r_q);
    przepisanie_tab_m(tablica_m3,tablica_m3_r_q);
    przepisanie_tab_m(tablica_m4,tablica_m4_r_q);
    przepisanie_tab_m(tablica_m5,tablica_m5_r_q);

    //przepisanie tablic malych malejace dla QS
    przepisanie_tab_m(tablica_m1,tablica_m1_q_m);
    przepisanie_tab_m(tablica_m2,tablica_m2_q_m);
    przepisanie_tab_m(tablica_m3,tablica_m3_q_m);
    przepisanie_tab_m(tablica_m4,tablica_m4_q_m);
    przepisanie_tab_m(tablica_m5,tablica_m5_q_m);

    //przepisanie tablic duzych rosnąco dla QS
    przepisanie_tab_m(tablica_d1,tablica_d1_r_q);
    przepisanie_tab_m(tablica_d2,tablica_d2_r_q);
    przepisanie_tab_m(tablica_d3,tablica_d3_r_q);
    przepisanie_tab_m(tablica_d4,tablica_d4_r_q);
    przepisanie_tab_m(tablica_d5,tablica_d5_r_q);

    //przepisanie tablic duzych malejaco dla QS
    przepisanie_tab_m(tablica_d1,tablica_d1_q_m);
    przepisanie_tab_m(tablica_d2,tablica_d2_q_m);
    przepisanie_tab_m(tablica_d3,tablica_d3_q_m);
    przepisanie_tab_m(tablica_d4,tablica_d4_q_m);
    przepisanie_tab_m(tablica_d5,tablica_d5_q_m);

    //przepisanie tablic malych rosnące dla SC
    przepisanie_tab_m(tablica_m1,tablica_m1_r_u);
    przepisanie_tab_m(tablica_m2,tablica_m2_r_u);
    przepisanie_tab_m(tablica_m3,tablica_m3_r_u);
    przepisanie_tab_m(tablica_m4,tablica_m4_r_u);
    przepisanie_tab_m(tablica_m5,tablica_m5_r_u);

    //przepisanie tablic malych dla SC
    przepisanie_tab_m(tablica_m1, tablica_m1_u);
    przepisanie_tab_m(tablica_m2, tablica_m2_u);
    przepisanie_tab_m(tablica_m3, tablica_m3_u);
    przepisanie_tab_m(tablica_m4, tablica_m4_u);
    przepisanie_tab_m(tablica_m5, tablica_m5_u);

    //przepisanie tablic duzych dla SC
    przepisanie_tab_m(tablica_d1, tablica_d1_u);
    przepisanie_tab_m(tablica_d2, tablica_d2_u);
    przepisanie_tab_m(tablica_d3, tablica_d3_u);
    przepisanie_tab_m(tablica_d4, tablica_d4_u);
    przepisanie_tab_m(tablica_d5, tablica_d5_u);

    //przepisanie tablic malych malejace dla SC
    przepisanie_tab_m(tablica_m1,tablica_m1_u_m);
    przepisanie_tab_m(tablica_m2,tablica_m2_u_m);
    przepisanie_tab_m(tablica_m3,tablica_m3_u_m);
    przepisanie_tab_m(tablica_m4,tablica_m4_u_m);
    przepisanie_tab_m(tablica_m5,tablica_m5_u_m);

    //przepisanie tablic duzych rosnąco dla SC
    przepisanie_tab_m(tablica_d1,tablica_d1_r_u);
    przepisanie_tab_m(tablica_d2,tablica_d2_r_u);
    przepisanie_tab_m(tablica_d3,tablica_d3_r_u);
    przepisanie_tab_m(tablica_d4,tablica_d4_r_u);
    przepisanie_tab_m(tablica_d5,tablica_d5_r_u);

    //przepisanie tablic duzych malejaco dla SC
    przepisanie_tab_m(tablica_d1,tablica_d1_u_m);
    przepisanie_tab_m(tablica_d2,tablica_d2_u_m);
    przepisanie_tab_m(tablica_d3,tablica_d3_u_m);
    przepisanie_tab_m(tablica_d4,tablica_d4_u_m);
    przepisanie_tab_m(tablica_d5,tablica_d5_u_m);

    //przepisanie tablic malych rosnące dla BS
    przepisanie_tab_m(tablica_m1,tablica_m1_r);
    przepisanie_tab_m(tablica_m2,tablica_m2_r);
    przepisanie_tab_m(tablica_m3,tablica_m3_r);
    przepisanie_tab_m(tablica_m4,tablica_m4_r);
    przepisanie_tab_m(tablica_m5,tablica_m5_r);

    //przepisanie tablic malych malejace dla BS
    przepisanie_tab_m(tablica_m1,tablica_m1_m);
    przepisanie_tab_m(tablica_m2,tablica_m2_m);
    przepisanie_tab_m(tablica_m3,tablica_m3_m);
    przepisanie_tab_m(tablica_m4,tablica_m4_m);
    przepisanie_tab_m(tablica_m5,tablica_m5_m);

    //przepisanie tablic duzych rosnąco dla BS
    przepisanie_tab_m(tablica_d1,tablica_d1_r);
    przepisanie_tab_m(tablica_d2,tablica_d2_r);
    przepisanie_tab_m(tablica_d3,tablica_d3_r);
    przepisanie_tab_m(tablica_d4,tablica_d4_r);
    przepisanie_tab_m(tablica_d5,tablica_d5_r);

    //przepisanie tablic duzych malejąco dla BS
    przepisanie_tab_m(tablica_d1,tablica_d1_m);
    przepisanie_tab_m(tablica_d2,tablica_d2_m);
    przepisanie_tab_m(tablica_d3,tablica_d3_m);
    przepisanie_tab_m(tablica_d4,tablica_d4_m);
    przepisanie_tab_m(tablica_d5,tablica_d5_m);

    //wstępne sortowania rosnące malych tablic
    quicksort(tablica_m1_r, 0, ile-1);
    quicksort(tablica_m2_r, 0, ile-1);
    quicksort(tablica_m3_r, 0, ile-1);
    quicksort(tablica_m4_r, 0, ile-1);
    quicksort(tablica_m5_r, 0, ile-1);

    quicksort(tablica_m1_r_q, 0, ile-1);
    quicksort(tablica_m2_r_q, 0, ile-1);
    quicksort(tablica_m3_r_q, 0, ile-1);
    quicksort(tablica_m4_r_q, 0, ile-1);
    quicksort(tablica_m5_r_q, 0, ile-1);

    quicksort(tablica_m1_r_u, 0, ile-1);
    quicksort(tablica_m2_r_u, 0, ile-1);
    quicksort(tablica_m3_r_u, 0, ile-1);
    quicksort(tablica_m4_r_u, 0, ile-1);
    quicksort(tablica_m5_r_u, 0, ile-1);

    //wstępne sortowania malejace malych tablic
    quicksort_male(tablica_m1_m, 0, ile-1);
    quicksort_male(tablica_m2_m, 0, ile-1);
    quicksort_male(tablica_m3_m, 0, ile-1);
    quicksort_male(tablica_m4_m, 0, ile-1);
    quicksort_male(tablica_m5_m, 0, ile-1);

    quicksort_male(tablica_m1_q_m, 0, ile-1);
    quicksort_male(tablica_m2_q_m, 0, ile-1);
    quicksort_male(tablica_m3_q_m, 0, ile-1);
    quicksort_male(tablica_m4_q_m, 0, ile-1);
    quicksort_male(tablica_m5_q_m, 0, ile-1);

    quicksort_male(tablica_m1_u_m, 0, ile-1);
    quicksort_male(tablica_m2_u_m, 0, ile-1);
    quicksort_male(tablica_m3_u_m, 0, ile-1);
    quicksort_male(tablica_m4_u_m, 0, ile-1);
    quicksort_male(tablica_m5_u_m, 0, ile-1);

    //wstępne sortowania malejące duzych tablic
    quicksort(tablica_d1_m, 0, ile2-1);
    quicksort(tablica_d2_m, 0, ile2-1);
    quicksort(tablica_d3_m, 0, ile2-1);
    quicksort(tablica_d4_m, 0, ile2-1);
    quicksort(tablica_d5_m, 0, ile2-1);

    quicksort(tablica_d1_q_m, 0, ile2-1);
    quicksort(tablica_d2_q_m, 0, ile2-1);
    quicksort(tablica_d3_q_m, 0, ile2-1);
    quicksort(tablica_d4_q_m, 0, ile2-1);
    quicksort(tablica_d5_q_m, 0, ile2-1);

    quicksort(tablica_d1_u_m, 0, ile2-1);
    quicksort(tablica_d2_u_m, 0, ile2-1);
    quicksort(tablica_d3_u_m, 0, ile2-1);
    quicksort(tablica_d4_u_m, 0, ile2-1);
    quicksort(tablica_d5_u_m, 0, ile2-1);

    //wstępne sortowania rosnące duzych tablic
    quicksort(tablica_d1_r, 0, ile2-1);
    quicksort(tablica_d2_r, 0, ile2-1);
    quicksort(tablica_d3_r, 0, ile2-1);
    quicksort(tablica_d4_r, 0, ile2-1);
    quicksort(tablica_d5_r, 0, ile2-1);

    quicksort(tablica_d1_r_q, 0, ile2-1);
    quicksort(tablica_d2_r_q, 0, ile2-1);
    quicksort(tablica_d3_r_q, 0, ile2-1);
    quicksort(tablica_d4_r_q, 0, ile2-1);
    quicksort(tablica_d5_r_q, 0, ile2-1);

    quicksort(tablica_d1_r_u, 0, ile2-1);
    quicksort(tablica_d2_r_u, 0, ile2-1);
    quicksort(tablica_d3_r_u, 0, ile2-1);
    quicksort(tablica_d4_r_u, 0, ile2-1);
    quicksort(tablica_d5_r_u, 0, ile2-1);

    //sortowanie babelkowe male losowe
    sortowanie_babelkowe(tablica_m1,ile);
    sortowanie_babelkowe(tablica_m2,ile);
    sortowanie_babelkowe(tablica_m3,ile);
    sortowanie_babelkowe(tablica_m4,ile);
    sortowanie_babelkowe(tablica_m5,ile);

    //sortowanie babelkowe male rosnace
    sortowanie_babelkowe(tablica_m1_r,ile);
    sortowanie_babelkowe(tablica_m2_r,ile);
    sortowanie_babelkowe(tablica_m3_r,ile);
    sortowanie_babelkowe(tablica_m4_r,ile);
    sortowanie_babelkowe(tablica_m5_r,ile);

    //sortowanie babelkowe male malejace
    sortowanie_babelkowe(tablica_m1_m,ile);
    sortowanie_babelkowe(tablica_m2_m,ile);
    sortowanie_babelkowe(tablica_m3_m,ile);
    sortowanie_babelkowe(tablica_m4_m,ile);
    sortowanie_babelkowe(tablica_m5_m,ile);

    //sortowanie babelkowe duze losowe

    sortowanie_babelkowe(tablica_d1,ile2);
    sortowanie_babelkowe(tablica_d2,ile2);
    sortowanie_babelkowe(tablica_d3,ile2);
    sortowanie_babelkowe(tablica_d4,ile2);
    sortowanie_babelkowe(tablica_d5,ile2);

    //sortowanie babelkowe duze malejace
    sortowanie_babelkowe(tablica_d1_m,ile2);
    sortowanie_babelkowe(tablica_d2_m,ile2);
    sortowanie_babelkowe(tablica_d3_m,ile2);
    sortowanie_babelkowe(tablica_d4_m,ile2);
    sortowanie_babelkowe(tablica_d5_m,ile2);

    //sortowanie babelkowe duze rosnace
    sortowanie_babelkowe(tablica_d1_r,ile2);
    sortowanie_babelkowe(tablica_d2_r,ile2);
    sortowanie_babelkowe(tablica_d3_r,ile2);
    sortowanie_babelkowe(tablica_d4_r,ile2);
    sortowanie_babelkowe(tablica_d5_r,ile2);

    // selection sort male losowe

    czas_start1();
    selection_sort(tablica_m1_u,ile);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_m2_u,ile);
    czas_stop1();


    czas_start1();
    selection_sort(tablica_m3_u,ile);
    czas_stop1();


    czas_start1();
    selection_sort(tablica_m4_u,ile);
    czas_stop1();


    czas_start1();
    selection_sort(tablica_m5_u,ile);
    czas_stop1();

    // selection sort male losowe rosące

    czas_start1();
    selection_sort(tablica_m1_r_u,ile);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_m2_r_u,ile);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_m3_r_u,ile);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_m4_r_u,ile);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_m5_r_u,ile);
    czas_stop1();

    // selection_sort male losowe malejace

    czas_start1();
    selection_sort( tablica_m1_u_m,ile);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_m2_u_m,ile);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_m3_u_m,ile);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_m4_u_m,ile);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_m5_u_m,ile);
    czas_stop1();

    // selection_sort duze losowe

    czas_start1();
    selection_sort(tablica_d1_u,ile2);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_d2_u,ile2);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_d3_u,ile2);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_d4_u,ile2);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_d5_u,ile2);
    czas_stop1();

    // selection_sort duze losowe rosnace

    czas_start1();
    selection_sort(tablica_d1_r_u,ile2);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_d2_r_u,ile2);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_d3_r_u,ile2);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_d4_r_u,ile2);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_d5_r_u,ile2);
    czas_stop1();

    // selection_sort duze losowe malejaco

    czas_start1();
    selection_sort(tablica_d1_u_m,ile2);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_d2_u_m,ile2);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_d3_u_m,ile2);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_d4_u_m,ile2);
    czas_stop1();

    czas_start1();
    selection_sort(tablica_d5_u_m,ile2);
    czas_stop1();


    // quicksort male losowe

    czas_start();
    quicksort(tablica_m1_q, 0, ile-1);
    czas_stop();

    czas_start();
    quicksort(tablica_m2_q, 0, ile-1);
    czas_stop();

    czas_start();
    quicksort(tablica_m3_q, 0, ile-1);
    czas_stop();

    czas_start();
    quicksort(tablica_m4_q, 0, ile-1);
    czas_stop();

    czas_start();
    quicksort(tablica_m5_q, 0, ile-1);
    czas_stop();

    // quicksort male losowe rosnące
    czas_start();
    quicksort(tablica_m1_r_q, 0, ile-1);
    czas_stop();

    czas_start();
    quicksort(tablica_m2_r_q, 0, ile-1);
    czas_stop();

    czas_start();
    quicksort(tablica_m3_r_q, 0, ile-1);
    czas_stop();

    czas_start();
    quicksort(tablica_m4_r_q, 0, ile-1);
    czas_stop();

    czas_start();
    quicksort(tablica_m5_r_q, 0, ile-1);
    czas_stop();

    // quicksort male losowe malejace
    czas_start();
    quicksort(tablica_m1_q_m, 0, ile-1);
    czas_stop();

    czas_start();
    quicksort(tablica_m2_q_m, 0, ile-1);
    czas_stop();

    czas_start();
    quicksort(tablica_m3_q_m, 0, ile-1);
    czas_stop();

    czas_start();
    quicksort(tablica_m4_q_m, 0, ile-1);
    czas_stop();

    czas_start();
    quicksort(tablica_m5_q_m, 0, ile-1);
    czas_stop();

    //quicksort duze losowe
    czas_start();
    quicksort(tablica_d1_q, 0, ile2-1);
    czas_stop();

    czas_start();
    quicksort(tablica_d2_q, 0, ile2-1);
    czas_stop();

    czas_start();
    quicksort(tablica_d3_q, 0, ile2-1);
    czas_stop();

    czas_start();
    quicksort(tablica_d4_q, 0, ile2-1);
    czas_stop();

    czas_start();
    quicksort(tablica_d5_q, 0, ile2-1);
    czas_stop();

    //quicksort duze losowe rosnaco
    czas_start();
    quicksort(tablica_d1_r_q, 0, ile2-1);
    czas_stop();

    czas_start();
    quicksort(tablica_d2_r_q, 0, ile2-1);
    czas_stop();

    czas_start();
    quicksort(tablica_d3_r_q, 0, ile2-1);
    czas_stop();

    czas_start();
    quicksort(tablica_d4_r_q, 0, ile2-1);
    czas_stop();

    czas_start();
    quicksort(tablica_d5_r_q, 0, ile2-1);
    czas_stop();

    //quicksort duze losowe malejaco
    czas_start();
    quicksort(tablica_d1_q_m, 0, ile2-1);
    czas_stop();

    czas_start();
    quicksort(tablica_d2_q_m, 0, ile2-1);
    czas_stop();

    czas_start();
    quicksort(tablica_d3_q_m, 0, ile2-1);
    czas_stop();

    czas_start();
    quicksort(tablica_d4_q_m, 0, ile2-1);
    czas_stop();

    czas_start();
    quicksort(tablica_d5_q_m, 0, ile2-1);
    czas_stop();

    return 0;
}

//ciala funkcji


void sortowanie_babelkowe(int *tab, int n)
{
    cout << "sortuje babelkowo prosze czekac!";
     start = clock();
    for(int i=1; i<n; i++)
    {
        for(int j=n-1; j>=1; j--)
        {
            if(tab[j]<tab[j-1])
            {
                int bufor;
                bufor=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=bufor;
            }
        }
    }
        stop = clock();
    czas = (double)(stop-start) / CLOCKS_PER_SEC;
    cout<<endl<<"Czas sortowania babelkowego : "<<setprecision(100)<<czas<<" s"<<endl;
}

    void czas_start()
  {
      cout << "sortuje quicksort prosze czekac!";
     start = clock();
     }

     void czas_stop()
{
            stop = clock();
    czas = (double)(stop-start) / CLOCKS_PER_SEC;
    cout<<endl<<"Czas sortowania quicksort : "<<setprecision(100)<<czas<<" s"<<endl;
}

    void czas_start1()
  {
      cout << "sortuje selection sort prosze czekac!";
     start = clock();
     }

     void czas_stop1()
{
            stop = clock();
    czas = (double)(stop-start) / CLOCKS_PER_SEC;
    cout<<endl<<"Czas selection sort: "<<setprecision(100)<<czas<<" s"<<endl;
}


void quicksort(int *tablica, int lewy, int prawy)
{
    {int v=tablica[(lewy+prawy)/2];
    int i,j,x;
    i=lewy;
    j=prawy;
    do
    {
        while(tablica[i]<v) i++;
        while(tablica[j]>v) j--;
        if(i<=j)
        {
            x=tablica[i];
            tablica[i]=tablica[j];
            tablica[j]=x;
            i++;
            j--;
        }
    }
    while(i<=j);
    if(j>lewy) quicksort(tablica,lewy, j);
    if(i<prawy) quicksort(tablica, i, prawy);
    }
}

void quicksort_male(int *tablica, int lewy, int prawy)
{
    {int v=tablica[(lewy+prawy)/2];
    int i,j,x;
    i=lewy;
    j=prawy;
    do
    {
        while(tablica[i]>v) i++;
        while(tablica[j]<v) j--;
        if(i<=j)
        {
            x=tablica[i];
            tablica[i]=tablica[j];
            tablica[j]=x;
            i++;
            j--;
        }
    }
    while(i<=j);
    if(j>lewy) quicksort(tablica,lewy, j);
    if(i<prawy) quicksort(tablica, i, prawy);
    }
}

void selection_sort(int tab[],int n)
{
int mn_index;
  for(int i=0;i<n-1;i++)
  {
  	mn_index = i;
    for(int j=i+1;j<n;j++)
    if(tab[j]<tab[mn_index])
      mn_index = j;

	swap(tab[i], tab[mn_index]);
  }
}

void przypisanie_male(int tablica[])
{
       for(int i=0; i<ile; i++)
    {
        tablica[i] = rand()%100+1;
    }
}
void przypisanie_duze(int tablica[])
{
       for(int i=0; i<ile2; i++)
    {
        tablica[i] = rand()%100+1;
    }
}
void przepisanie_tab_m(int tab[],int tablica[])
{
        for(int i=0; i<ile; i++)
    {
       tablica[i]=tab[i];
    }
}
