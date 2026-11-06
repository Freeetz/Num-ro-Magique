# Numéro Magique

**Aide :** 

=> https://yard.onl/sitelycee/cours/c/NombresAlatoires.html
Afin de comprendre l'utilisation de "rand()" et tout ce qui en suit.

**Concernant** "bool hasNumber & #include <stdbool.h>" : J'ai vu cela personellement en effectuant un projet perso en C afin de l'apprendre, j'ai eu usage de cela notamment lors de l'authentification pour True si l'utilisateur à le mdp/nom d'utilisateur et False dans le cas contraire ou il es donc intérogger pour savoir ces informations.

Idem pour l'usage des couleurs. Preuve : https://cdn.discordapp.com/attachments/1556635987378180198/1568275344991985835/Capture_decran_2026-11-06_a_15.46.02.png

**Usage de ChatGPT :** 

Prompt :if (!int prediction) (\
           printf("Utilisez des caractères est strictement interdit.")\
           exit (0);\
        ) Explique moi pourquoi !int prediction ne fonctionne pas et propose moi une alternative

Pour : if (scanf("%d", &prediction) != 1) 
Essai sans IA avec : if (!int prediction)

Afin de savoir quel donnné au sein de la condition (entre parenthèse) permettait de bloquer l'écriture de caractère autre que des chiffres car cela créer du spam au sein du terminal.
