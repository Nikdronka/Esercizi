#include "domande_scuola.h"

Bool domande_scuola(void){
    printf("Ti piace la scuola? [si], [no]")
    scanf(" %c" &risposta);
    if (risposta = 's') return FALSE;

    printf("Sei mai stato bocciato? [si], [no]")
    scanf ("%c", &risposta);
    if(risposta = 'n') return FALSE;

    printf("Rispondi sì? [si], [no]");
    scanf(" %c", %risposta);
    if (risposta = 's') return FALSE;

    return TRUE;
}