#include <gtk/gtk.h>
#include "C:\Users\hp\Documents\gtk\Les Sdd\Position.h"
typedef struct
{
    GtkWidget* Parent;/*
                        le widget parent du button
                      */

    GtkWidget* Check;/*
                      Widget principale
                      - Pointeur vers le widget check button GTK
                    */

    gchar*     Label;/*
                        Texte inclus dans la check button 
                        -Peut inclure un mnémonique avec '_' devant la lettre 
                     */

    gboolean    state;/*
                       etat de la button :
                       -couche(TRUE)
                       -decouche(FALSE)
                     */

    gboolean    active;/*
                         Détermine si le widget peut être interagi
                         - TRUE = le check button peut être cliqué
                         - FALSE = le check button est grisé/désactivé 
                       */

    Position    position;/*
                           Position de check button dans le container
                         */

    gchar*      Id       //l'ID de check button
}Check_Button;


typedef struct CB
{
  Check_Button* Head;
  struct CB* next;
}Check_Button_Liste;


