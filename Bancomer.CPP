#include<conio.h>
#include<stdio.h>
char nom[20];
float prec, sub_total, comision, total;
int camb;

main()
{
  printf(" BANCOMER \n\n");

  fflush(stdin);
  printf(" Nombre del cliente: "); scanf("%s", &nom);
  printf("\n Precio del dolar: "); scanf("%f", &prec);
  printf("\n Cantidad de dolares a cambiar: "); scanf("%d", &camb);

  sub_total = prec * camb;

  printf("\n Subtotal: %.2f", sub_total);
  if (sub_total > 100)
  {
    comision = sub_total * .05;
  }
  else
  {
   comision = 0;
  }
  printf("\n\n Comision: %.2f", comision);

  total = sub_total - comision;

  printf("\n\n Total a regresar al cliente: %.2f", total);
  printf("\n\n\n Autor: IRVIN ADRIAN");
  getch();
}
