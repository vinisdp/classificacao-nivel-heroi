#include <stdio.h>
#include <string.h>
struct Heroi {
  char nome[50];
  int xp;
  char nivel[50];
};
typedef struct Heroi heroi;
int main(void) {
  heroi heroi;
  scanf("%s", heroi.nome);
  scanf("%d", &heroi.xp);

  if (heroi.xp <= 1000) {
    strcpy(heroi.nivel, "Ferro");
  } else if (heroi.xp > 1000 && heroi.xp <= 2000) {
    strcpy(heroi.nivel, "Bronze");
  } else if (heroi.xp > 2000 && heroi.xp <= 5000) {
    strcpy(heroi.nivel, "Prata");
  } else if (heroi.xp > 5000 && heroi.xp <= 7000) {
    strcpy(heroi.nivel, "Ouro");
  } else if (heroi.xp > 7000 && heroi.xp <= 8000) {
    strcpy(heroi.nivel, "Platina");
  } else if (heroi.xp > 8000 && heroi.xp <= 9000) {
    strcpy(heroi.nivel, "Ascendente");
  } else if (heroi.xp > 9000 && heroi.xp <= 10000) {
    strcpy(heroi.nivel, "Imortal");
  } else {
    strcpy(heroi.nivel, "Radiante");
  }
  printf("O Herói de nome %s está no nível de %s", heroi.nome, heroi.nivel);
  return 0;
}