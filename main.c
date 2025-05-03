#include <stdio.h>
#include <windows.h>
#include <unistd.h>

void first();
void humano();
void arqueiro();
void assassino();
void guerreiro();
void tank();
void anao();
void anaomontanha();
void anaoferreiro();
void anaofloresta();
void anaocovarde();
void gigante();
void gigantepequeno();
void giganteterra();
void gigantepedra();
void gigantenormal();
void elfo();
void elfoarqueiro();
void elfonecromante();
void elfoferreiro();
void elfofloresta();
void fugir();
void esconder();
void nadahumano();
void nadaanao();
void nadagigante();
void nadaelfo();
void retorno();

int main(){

    first();

    return 0;
}

void first(){
    int v1;

    printf("Voce acordou em um corpo e apos olhar seu reflexo na poca de agua voce viu:\n 1) Humano\n 2) Anao\n 3) Gigante\n 4) Elfo \n");
    printf("Escolha um numero: ");
    scanf("%d", &v1);

    if (v1 == 1)
    {
        printf("Voce escolheu a raca Humano\n");
        humano();
    }
    else
    {
        if (v1 == 2)
        {
            printf("Voce escolheu a raca Anao\n");
            anao();
        }
        else
        {
            if (v1 == 3)
            {
                printf("Voce escolheu a raca Gigante\n");
                gigante();
            }
            else
            {
                if (v1 == 4)
                {
                    printf("Voce escolheu a raca Elfo\n");
                    elfo();
                }
                else
                {
                    printf("escolha apenas as alternativas\n");
                    first();
                }
            }
        }
    }
}

void humano(){
    int v2;

     printf("Escolha uma Classe:\n 1) Arqueiro \n 2) Assassino \n 3) Guerreiro \n 4) tanque \nEscolha um numero: ");
     scanf ("%d",&v2);

    if (v2 == 1)
    {
        printf ("-Voce escolheu o Arqueiro\n-Voce tem grande velocidade e habilidade de longa distancia\n\n");
        arqueiro();
    }
    else
    {
        if (v2 == 2)
        {
            printf ("-Voce escolheu o Assassino\n-Voce tem habilidade furtiva e acerto garantido nas costas utilizando adagas duplas\n\n");
            assassino();
        }
        else
        {
            if (v2 == 3)
            {
                 printf ("-Voce escolheu o guerreiro\n-Voce tem esgrima de nivel superior e resistencia a golpes criticos\n\n");
                 guerreiro();
            }
            else
            {
                if (v2 == 4)
                {
                     printf ("-Voce escolheu o tanque\n-Voce tem baixas velocidades e uma resistencia incomparavel\n\n");
                     tank();
                }
                else
                {
                    printf("escolha apenas as alternativas");
                    humano();
                }
            }
        }

    }
}

void arqueiro(){
    int v3;

    printf("Um dragao esta atacando a cidade,o que voce  faz?\n 1) lutar\n 2) fugir\n 3) se esconder\n 4) fazer nada\nEscolha um Numero: ");
    scanf("%d",&v3);

    if(v3 == 1)
    {
        printf("Seu arco possui uma flecha de fibra do coracao de um orc, um material capaz de perfurar as escamas do monstro a sua frente.\n");
        printf("Voce puxa a corda do arco o mais forte que consegue, mira para o olho do maldito e com um breve suspiro desfere o ataque.\n");
        printf("Um ataque certeiro e critico, o dragao cai com um enorme grito de dor, voce nao sabia que havia uma forca deste nivel.\n");
        printf("Sua sede por aventura apenas aumentou, parabens, voce se tornou oficialmente um heroi.\n");
        printf("   FIM DE JOGO, VOCE VENCEU!\n");retorno();
    }
    else
    {
        if (v3 == 2)
        {
            fugir();
        }
        else
        {
            if (v3 == 3)
            {
                esconder();
            }
            else
            {
                if (v3 == 4)
                {
                    nadahumano();
                }
                else
                {
                    printf("Escolha apenas as alternativas");
                    arqueiro();
                }
            }
        }
    }
}

void assassino(){
    int v3;

    printf("Um dragao esta atacando a cidade,o que voce  faz?\n 1) lutar\n 2) fugir\n 3) se esconder\n 4) fazer nada\nEscolha um Numero: ");
    scanf("%d",&v3);

    if (v3 == 1)
    {
        printf("Sorrateiramente voce se camufla nas sombras, o dragao continua desferindo golpes aleatorios tentanto atingir outros aventureiros\n");
        printf("que estavam por perto.\nSuas adagas duplas aparentam ser muito afiadas, o seu manto negro que se camufla nas sombras balancam em sincronia com o vento.\n ");
        printf("Voce investe contra o dragao se mantendo furtivo, o dragao nao te encherga devido ao nivel da sua furtividade, em um golpe aereo giratorio\n");
        printf("Voce atavessa as escamas do monstro atingindo o coracao do bicho, nem reacao esboca o dragao, apenas cai no chao...\n");
        printf("Os aventureiros que la estavam ficaram sem entender de onde veio o golpe, voce sai de dentro do dragao pela boca do defunto caido revelando oque aconteceu.\n");
        printf("Sua habilidade e incrivel. Agora todos te reconhecem como o assassino de dragoes.\n");
        printf("   FIM DE JOGO, VOCE VENCEU!");retorno();
    }
    else
    {
        if (v3 == 2)
        {
            fugir();
        }
        else
        {
            if (v3 == 3)
            {
                esconder();
            }
            else
            {
                if (v3 == 4)
                {
                    nadahumano();
                }
                else
                {
                    printf("escolha apenas as alternativas");
                    assassino();
                }
            }
        }
    }

}

void guerreiro(){
    int v3;

    printf("Um dragao esta atacando a cidade,o que voce  faz?\n 1) lutar\n 2) fugir\n 3) se esconder\n 4) fazer nada\nEscolha um Numero: ");
    scanf("%d",&v3);

    if (v3 == 1)
    {
        printf("PELA HONRA E PELA GLORIA GRANDE GUERREIRO.");
        printf("Sua espada afiada com sede de sangue de dragao comeca a erradiar um brilho que ofusca a vista de qualquer um.\n");
        printf("Mais que depressa voce comeca a investir contra o monstro pulando na calda dele e subindo o corpo do dragao.\n");
        printf("Enquando sobe no corpo do monstro sua espada vai retalhando tudo que toca, o dragao grita por clemencia, voce parace feliz e\n");
        printf(" sobrecarregado de dopamina, chegando no pescoco do dragao, com apenas um unico golpe certeiro, voce atinge decapita-o.\n");
        printf("   FIM DE JOGO, VOCE VENCEU!");retorno();
    }
    else
    {
        if (v3 == 2)
        {
            fugir();
        }
        else
        {
            if (v3 == 3)
            {
                esconder();
            }
            else
            {
                if (v3 == 4)
                {
                    nadahumano();
                }
                else
                {
                    printf("escolha apenas as alternativas");
                    guerreiro();
                }
            }
        }
    }
}

void tank(){
    int v3;

    printf("Um dragao esta atacando a cidade,o que voce  faz?\n 1) lutar\n 2) fugir\n 3) se esconder\n 4) fazer nada\nEscolha um Numero: ");
    scanf("%d",&v3);

    if (v3 == 1)
    {
        printf("A vida de um tank e tao gloriosa como a de qualquer atacante, voce motivado por ajudar e proteger a todos ergue seu escudo e vai a frente de todos bloqueado todos ataques.\n");
        printf("Os aventureiros comecam a se sentir empolgados e cativados por terem um tank tao bom protegendo eles.\n");
        printf("O seu escudo parece absorver todos ataques sem nenhum problema, voce continua avancando reduzindo a distancia dos aventureiros com o dragao.\n");
        printf("Voce fica gritando com todos para motivar ainda mais a atacarem e nao desistir. ''ATAQUEM ATAQUEM ATAQUEM'' os aventureiros nao param em nenhuma hipotese.\n");
        printf("O dragao parece cansado, voce venceu ele pelo cansaco e insistencia como um grande tank deve ser, toda os aventureiros comecaram a te tratar com toda gloria que voce merece.\n");
        printf("Sua vida nunca mais sera a mesma, agora voce e o heroi do escudo, o protetor de todos.\n");
        printf("   FIM DE JOGO, VOCE VENCEU!");retorno();
    }
    else
    {
        if (v3 == 2)
        {
            fugir();
        }
        else
        {
            if (v3 == 3)
            {
                esconder();
            }
            else
            {
                if (v3 == 4)
                {
                    nadahumano();
                }
                else
                {
                    printf("escolha apenas as alternativas");
                    tank();
                }
            }
        }
    }
}

void anao(){
    int v2;

    printf("Escolha a sua classe de anao: \n 1) Anao da Montanha \n 2) Anao Ferreiro \n 3) Anao da Floresta \n 4) Anao Covarde \nEscolha um Numero: ");
    scanf ("%d",&v2);

    if (v2 == 1)
    {
        printf ("-Voce escolheu o Anao da Montanha\n-Voce tem grande resistencia e habilidade de escalada\n");
        anaomontanha();
    }
    else
    {
        if (v2 == 2)
        {
            printf ("-Voce escolheu o Anao Ferreiro\n-Voce tem grande habilidade em forjar armas\n");
            anaoferreiro();
        }
        else
        {
            if (v2 == 3)
            {
                printf ("-Voce escolheu o Anao da Floresta\n-Voce tem grande habilidade de sobrevencia\n");
                anaofloresta();
            }
            else
            {
                if (v2 == 4)
                {
                    printf ("-Voce escolheu o Anao Covarde\n-Voce tem baixas habilidade e sente muito medo de tudo\n");
                    anaocovarde();
                }
                else
                {
                    printf("escolha uma das Alternativas");
                    anao();
                }
            }
        }
    }
}

void anaomontanha(){
    int v3;

    printf("Um dragao esta atacando a cidade,o que voce  faz?\n 1) lutar\n 2) fugir\n 3) se esconder\n 4) fazer nada\nEscolha um Numero: ");
    scanf("%d",&v3);

    if (v3 == 1)
    {
        printf("Com um grito gutural que ecoa pelas cavernas, o anao ergue seu machado de batalha feito de rochas com ambas as maos.\n");
        printf("As chamas do dragão refletem em sua armadura de aço polido enquanto ele corre na direção da criatura colossal.\n");
        printf("Num salto surpreendente para alguem de sua estatura, ele desfere um golpe poderoso nas escamas do peito do dragao,\n");
        printf("mirando uma falha na armadura natural. O impacto ressoa como trovão, e o dragão solta um rugido de dor e furia!\n\n");
        printf("Cambaleando, a besta alada tenta contra-atacar, mas o anao já se posiciona para o golpe final.\n");
        printf("Girando seu machado com furia ancestral, ele acerta a cabeça do dragão com toda sua força.\n");
        printf("O dragão solta um último suspiro de fogo antes de tombar, derrotado, fazendo o chão tremer com sua queda.\n");
        printf("A vitoria e do anao!\n");
        printf("   FIM DE JOGO, VOCE VENCEU!");retorno();
    }
    else
    {
        if (v3 == 2)
        {
            fugir();
        }
        else
        {
            if (v3 == 3)
            {
                esconder();
            }
            else
            {
                if (v3 == 4)
                {
                    nadaanao();
                }
                else
                {
                    printf("escolha apenas as alternativas");
                    anaomontanha();
                }
            }
        }
    }
}

void anaoferreiro(){
    int v3;

    printf("Um dragao esta atacando a cidade,o que voce  faz?\n 1) lutar\n 2) fugir\n 3) se esconder\n 4) fazer nada\nEscolha um Numero: ");
    scanf("%d",&v3);

    if (v3 == 1)
    {
        printf("Thrain, o anão ferreiro, ergueu seu martelo rúnico e o cravou entre as escamas do dragão com um grito feroz.\n");
        printf("O golpe ressoou como trovão — e com um último rugido sufocado, o dragão tombou, seus olhos se apagando como brasas ao vento.\n");
        printf("   FIM DE JOGO, VOCE VENCEU!");retorno();
    }
    else
    {
        if (v3 == 2)
        {
            fugir();
        }
        else
        {
            if (v3 == 3)
            {
                esconder();
            }
            else
            {
                if (v3 == 4)
                {
                    nadaanao();
                }
                else
                {
                    printf("escolha apenas as alternativas");
                    anaoferreiro();
                }
            }
        }
    }
}

void anaofloresta(){
    int v3;

    printf("Um dragao esta atacando a cidade,o que voce  faz?\n 1) lutar\n 2) fugir\n 3) se esconder\n 4) fazer nada\nEscolha um Numero: ");
    scanf("%d",&v3);

    if (v3 == 1)
    {
        printf("O anão da floresta, com sua lâmina de ferro-elfo, saltou de entre as árvores e cravou a espada na garganta do dragão.\n");
        printf("Com um rugido de dor, a besta se contorceu, tentando lutar, mas a lâmina mágica cortou suas escamas como manteiga.\n");
        printf("Em um último suspiro, o dragão caiu, sua vida se extinguindo sob a força da natureza.\n");
        printf("   FIM DE JOGO, VOCE VENCEU!");retorno();
    }
    else
    {
        if (v3 == 2)
        {
            fugir();
        }
        else
        {
            if (v3 == 3)
            {
                esconder();
            }
            else
            {
                if (v3 == 4)
                {
                    nadaanao();
                }
                else
                {
                    printf("escolha apenas as alternativas");
                    anaofloresta();
                }
            }
        }
    }
}

void anaocovarde(){
    int v3;

    printf("Um dragao esta atacando a cidade,o que voce  faz?\n 1) lutar\n 2) fugir\n 3) se esconder\n 4) fazer nada\nEscolha um Numero: ");
    scanf("%d",&v3);

    if (v3 == 1)
    {
        printf("O anão, tremendo de medo, escondeu-se atrás de uma rocha enquanto o dragão rugia furioso.\n");
        printf("Com a mão trêmula, ele lançou uma flecha envenenada, que acertou o monstro na pata.\n");
        printf("O dragão, enfraquecido pelo veneno, cambaleou, e o anão, aproveitando a chance, correu para dar o golpe final.\n");
        printf("Sem honra, mas com sorte, o dragão caiu, e o covarde saiu vitorioso, ainda sem acreditar no que havia feito.\n");
        printf("   FIM DE JOGO, VOCE VENCEU!");retorno();
    }
    else
    {
        if (v3 == 2)
        {
            fugir();
        }
        else
        {
            if (v3 == 3)
            {
                esconder();
            }
            else
            {
                if (v3 == 4)
                {
                    nadaanao();
                }
                else
                {
                    printf("escolha apenas as alternativas");
                    anaocovarde();
                }
            }
        }
    }
}

void gigante(){
    int v2;

    printf("Escolha a sua classe de gigante\n 1) Gigante Pequeno\n 2) Gigante de Terra\n 3) Gigante de Pedra\n 4) Gigante Normal\nEscolha um Numero: ");
    scanf ("%d",&v2);

    if (v2 == 1)
    {
        printf("Agora voce e um Gigante Pequeno!\n-Possui forca imensa, mas com mais controle que outros gigantes.\n-Imponente entre humanos, porem menos assustador e mais acessivel.\n");
        gigantepequeno();
    }
    else
    {
        if (v2 == 2)
        {
            printf("-Um gigante da terra e uma criatura colossal, com pes que estremecem o solo e bracos que moldam montanhas.\n");
            printf("-Seu corpo e feito de rochas, raizes e terra, como se a propria natureza tivesse ganhado vida.\n");
            giganteterra();
        }
        else
        {
            if (v2 == 3)
            {
                printf("-Corpo rochoso: Composto por pedra macica, coberto de musgo e rachaduras, resistente como uma montanha.\n");
                printf("-Forca bruta: Possui forca imensa, capaz de esmagar rochas e inimigos com um unico golpe.\n");
                gigantepedra();
            }
            else
            {
                if (v2 == 4)
                {
                    printf("-Um gigante de estatura colossal, com forca sobre-humana.\n");
                    printf("-Costuma viver isolado na planicie.\n");
                    printf("-Sua presenca impoe respeito e temor.\n");
                    gigantenormal();
                }
                else
                {
                    printf("escolha uma das Alternativas");
                    gigante();
                }
            }
        }
    }
}

void gigantepequeno(){
    int v3;

    printf("Um dragao esta atacando a cidade,o que voce  faz?\n 1) lutar\n 2) fugir\n 3) se esconder\n 4) fazer nada\nEscolha um Numero: ");
    scanf("%d",&v3);

    if (v3 == 1)
    {
        printf("Voce escolhe enfrentar o dragao com ferocidade, avançando sem hesitar.\n");
        printf("Com precisao letal, desfere um golpe certeiro em seu ponto fraco.\n");
        printf("O impacto ressoa como um trovao\num golpe critico que faz a fera rugir de dor!\n");
        printf("Voce fica conhecido como o Gigante de um Golpe");
        printf("   FIM DE JOGO, VOCE VENCEU!");retorno();
    }
    else
    {
        if (v3 == 2)
        {
            fugir();
        }
        else
        {
            if (v3 == 3)
            {
                esconder();
            }
            else
            {
                if (v3 == 4)
                {
                    nadagigante();
                }
                else
                {
                    printf("escolha apenas as alternativas");
                    gigantepequeno();
                }
            }
        }
    }
}

void giganteterra(){
    int v3;

    printf("Um Dragao se aproxima calmamente,\nUtilizando os seus poderes lhe ajuda a controlar sua ira\nCom a mente clara, voce e o dragao ajudam as cidadaes proximas a floresta contra as forcas do mal\n");
    printf("Lutando contras as forcas do mal voce se encontra encuralhado\no que voce  faz?\n 1) lutar\n 2) fugir\n 3) se esconder\n 4) fazer nada\nEscolha um Numero: ");
    scanf("%d",&v3);

    if (v3 == 1)
    {
        printf("Voce lutou Bravamente, agora junto com o dragao \nvoce protegeu a cidade das forcas do mal\nGraca a sua coragem voce foi declarado o heroi");
        printf("   FIM DE JOGO, VOCE VENCEU!");retorno();
    }
    else
    {
        if (v3 == 2)
        {
            fugir();
        }
        else
        {
            if (v3 == 3)
            {
                esconder();
            }
            else
            {
                if (v3 == 4)
                {
                    nadagigante();
                }
                else
                {
                    printf("escolha apenas as alternativas");
                    giganteterra();
                }
            }
        }
    }
}

void gigantepedra(){
    int v3;

    printf("O ceu escurece enquanto o dragao surge, cuspindo chamas sobre a floresta.\n");
    printf("O Gigante de Pedra ergue-se das montanhas, com passos que fazem a terra tremer.\n");
    printf("Escolha as opcoes\n 1) lutar\n 2) fugir\n 3) se esconder\n 4) fazer nada\nEscolha um Numero: ");
    scanf("%d",&v3);

    if (v3 == 1)
    {
        printf("O dragao ataca primeiro, lancando uma rajada de fogo!\n");
        printf("As chamas envolvem o gigante, mas apenas deixam sua superficie fumegante — ele nao sente dor.\n\n");
        printf("Com um rugido grave como o eco das cavernas, o gigante avanca.\n");
        printf("Ele lanca um soco colossal, acertando o dragao em pleno voo e derrubando-o ao chao.\n\n");
        printf("O dragao tenta se levantar, mas o gigante ergue uma enorme pedra e a lanca com forca.\n");
        printf("O impacto e devastador. O dragao cai, derrotado.\n\n");
        printf("Vitoria do Gigante de Pedra!\n");
        printf("   FIM DE JOGO, VOCE VENCEU!");retorno();
    }
    else
    {
        if (v3 == 2)
        {
            fugir();
        }
        else
        {
            if (v3 == 3)
            {
                esconder();
            }
            else
            {
                if (v3 == 4)
                {
                    nadagigante();
                }
                else
                {
                    printf("escolha apenas as alternativas");
                    gigantepedra();
                }
            }
        }
    }
}

void gigantenormal(){
    int v3;

    printf("Um dragao esta atacando a planicie onde voce vive,o que voce faz?\n 1) lutar\n 2) fugir\n 3) se esconder\n 4) fazer nada\nEscolha um Numero: ");
    scanf("%d",&v3);

    if (v3 == 1)
    {
        printf("Em uma vasta planicie, um gigante imenso enfrentava um dragao assustador.\n");
        printf("O dragao, com suas asas enormes e um fogo que nao apagava, ataca com furia.\n");
        printf("Resistindo aos golpes, Voce acerta um golpe poderoso na cabeca do dragao, Derrubando o dragao.\n");
        printf("A vitoria foi sua, ao terminar a luta, provou ser mais temivel do que qualquer criatura.\n");
        printf("   FIM DE JOGO, VOCE VENCEU!");retorno();
    }
    else
    {
        if (v3 == 2)
        {
            fugir();
        }
        else
        {
            if (v3 == 3)
            {
                esconder();
            }
            else
            {
                if (v3 == 4)
                {
                    nadagigante();
                }
                else
                {
                    printf("escolha apenas as alternativas");
                    gigantenormal();
                }
            }
        }
    }
}

void elfo(){
int v2;

    printf("Voce escolheu Elfo\n1) Elfo Arqueiro\n2) Elfo Necromante\n3) Elfo Ferreiro\n4) Elfo da Floresta\nEscolha sua classe de elfo: ");
    scanf ("%d",&v2);

    if (v2 == 1)
    {
        printf("Voce escolheu o Elfo Arqueiro!\n-Agil e silencioso\n-domina o arco com precisao letal a longa distancia.\n");
        elfoarqueiro();
    }
    else
    {
        if (v2 == 2)
        {
            printf("Voce escolheu o Elfo Necromante\n-controle de Espiritos Ancestrais\n-Magia Corrosiva da Morte\n");
            elfonecromante();
        }
        else
        {
            if (v2 == 3)
            {
                printf("Voce escolheu o Elfo Ferreiro\n-Habilidade excepcional em forjar armas magicas, combinando tecnicas elficas antigas com encantamentos.\n-Olhos atentos e maos precisas, capazes de moldar metais raros com leveza e perfeiçao quase artistica.\n");
                elfoferreiro();
            }
            else
            {
                if (v2 == 4)
                {
                    printf("Voce escolheu o elfo da Floresta\n-Os elfos da floresta possuem uma conexao profunda com a natureza, comunicando-se com animais e plantas.\n-Sao mestres em arqueria e camuflagem, conseguindo se esconder com facilidade na floresta.\n");
                    elfofloresta();
                }
                else
                {
                    printf("escolha uma das Alternativas");
                    elfo();
                }
            }
        }
    }
}

void elfoarqueiro(){
    int v3;

    printf("Um dragao esta atacando a cidade,o que voce  faz?\n 1) lutar\n 2) fugir\n 3) se esconder\n 4) fazer nada\nEscolha um Numero: ");
    scanf("%d",&v3);

    if(v3 == 1)
    {
        printf("O elfo arqueiro, com seu arco em maos, mira contra o dragao.\n");
        printf("O dragao, com suas asas enormes e fogo ardente, desafia o heroi.\n");
        printf("   FIM DE JOGO, VOCE VENCEU!");retorno();
    }
    else
    {
        if (v3 == 2)
        {
            fugir();
        }
        else
        {
            if (v3 == 3)
            {
                esconder();
            }
            else
            {
                if (v3 == 4)
                {
                    nadaelfo();
                }
                else
                {
                    printf("Escolha apenas as alternativas");
                    elfoarqueiro();
                }
            }
        }
    }
}

void elfonecromante(){
    int v3;

    printf("Um dragao esta atacando a cidade,o que voce  faz?\n 1) lutar\n 2) fugir\n 3) se esconder\n 4) fazer nada\nEscolha um Numero: ");
    scanf("%d",&v3);

    if(v3 == 1)
    {
        printf("Voce invoca espiritos ancestrais que prendem o dragao, enquanto sua magia corrosiva apodrece suas escamas.\n");
        printf("O dragao ruge em agonia, cospe fogo, mas cai quando sua alma e arrancada por maos fantasmagoricas.\n");
        printf("   FIM DE JOGO, VOCE VENCEU!");retorno();
    }
    else
    {
        if (v3 == 2)
        {
            fugir();
        }
        else
        {
            if (v3 == 3)
            {
                esconder();
            }
            else
            {
                if (v3 == 4)
                {
                    nadaelfo();
                }
                else
                {
                    printf("Escolha apenas as alternativas");
                    elfonecromante();
                }
            }
        }
    }
}

void elfoferreiro(){
    int v3;

    printf("Um dragao esta atacando a cidade,o que voce  faz?\n 1) lutar\n 2) fugir\n 3) se esconder\n 4) fazer nada\nEscolha um Numero: ");
    scanf("%d",&v3);

    if(v3 == 1)
    {
        printf("O Elfo Ferreiro enfrenta o Dragao, desferindo golpes rapidos com sua lamina encantada, enquanto o Dragao ataca com sua cauda e rajadas de fogo.\n");
        printf("Apos um intenso combate, o Elfo usa um feitiço magico, acertando um golpe decisivo no ponto fraco do Dragao.\n");
        printf("Vitorioso, o Elfo observa o Dragao caido, silencioso no campo de batalha.\n");
        printf("   FIM DE JOGO, VOCE VENCEU!");retorno();
    }
    else
    {
        if (v3 == 2)
        {
            fugir();
        }
        else
        {
            if (v3 == 3)
            {
                esconder();
            }
            else
            {
                if (v3 == 4)
                {
                    nadaelfo();
                }
                else
                {
                    printf("Escolha apenas as alternativas");
                    elfoferreiro();
                }
            }
        }
    }
}

void elfofloresta(){
    int v3;

    printf("Um dragao esta atacando a cidade,o que voce  faz?\n 1) lutar\n 2) fugir\n 3) se esconder\n 4) fazer nada\nEscolha um Numero: ");
    scanf("%d",&v3);

    if(v3 == 1)
    {
        printf("O heroi enfrenta o dragao, esquivando-se de suas chamas e desferindo golpes precisos com sua espada encantada.\n");
        printf("Após uma batalha intensa, ele encontra uma brecha e derrota a fera com um golpe mortal no coracao.\n");
        printf("   FIM DE JOGO, VOCE VENCEU!");retorno();
    }
    else
    {
        if (v3 == 2)
        {
            fugir();
        }
        else
        {
            if (v3 == 3)
            {
                esconder();
            }
            else
            {
                if (v3 == 4)
                {
                    nadaelfo();
                }
                else
                {
                    printf("Escolha apenas as alternativas");
                    elfofloresta();
                }
            }
        }
    }
}

void fugir(){
    char escolha;
    printf("Voce escolheu fugir, a adrenalina foi muito intensa.\nMovido no impulso e sem olhar pra tras voce corre desesperadamente.\n");
    printf("Sua vida depende disso, corra mais rapido.\n");
    printf("Nao existe coisa pior que covardes...\n\nVoce comeca a se arrepender dessa escolha, sua vida toda foi em vao.\n");
    printf("Todos os anos de treino inutilizados em segundos.\n");
    printf("Parabens, sua vida e uma merda!\n\n");
    printf("Oque voce quer fazer?\n");
    printf("1-Deitar e chorar.\n2-Ignorar seus sentimentos.\n3-Voltar e lutar.\n4-Final ''feliz'' \nEscolha uma alternativa: ");
    scanf(" %c",&escolha);
    if (escolha=='1')
    {
        system("color 4f");
        printf("Voce se joga no chao e comeca a chorar, nunca sentiu tanta vergonha de si, toda aquela sede de aventuras ");
        printf("anos de sonhos...\nVoce queria apenas que sua vida deixasse de existir porem nao consegue nem cometer suicidio de quao inutil voce e.\nPelo resto de sua vida ira sofrer com esse peso?Parece que nao.\n\n");
        printf("O destino esta ao seu lado, um urso gigante te ataca e te estripa inteiro apenas por diversao.");
        printf("FIM DE JOGO.\n\n\n\n\n\n\n\n");
        retorno();
    }
    else if(escolha=='2')
    {
        system("color 4f");
        printf("Voce ignora toda a angustia que lhe abala e segue sua vida como se aquele dia nunca aconteceu.\n");
        printf("1 mes se passa desde o ocorrido, sua reputacao de medroso e fujao se espalhou \nnenhum aventureiro quer voce na equipe.");
        printf("Ja se faz 2 semanas que sua comida acabou, voce esta com muita fome porem sem trabalho nao tem comida.\n");
        printf("Voce cai no chao, seu corpo nao te responde mais, e da forma que cai permanece ali, quieto e imovel.\n");
        printf("Voce morreu de fome!\n\n");
        printf("FIM DE JOGO.\n\n\n\n\n\n\n\n");
        retorno();
    }
    else if(escolha=='3')
    {
        system("color 4f");
        printf("Otima ideia, volte e lute como um verdadeiro aventureiro, sua mente nunca havia pensado em algo tao certo e honesto como isso.\n");
        printf("Rapidamente voce se vira, no mesmo instante uma gigantesca bola de fogo caindo em sua direcao... Sua vida de lixo passa diante de seus olhos, voce nunca deveria ter fugido.\n");
        printf("Sua morte foi a morte mais tosca de todas.\n\n");
        printf("FIM DE JOGO.\n\n\n\n\n\n\n\n");retorno();

    }
    else if(escolha=='4')
    {
        system("color 4f");
        printf("Por sorte do destino, voce se depara com uma corda jogada no pe de uma arvore\ninstitivamente seu corpo se move sozinho sabendo oque e preciso ser feito. Voce comete suicidio.\n\n");
        printf("FIM DE JOGO.\n\n\n\n\n\n\n\n");retorno();
    }
    else if(escolha>'4' || escolha=='0')
    {
        printf("Opcao invalida!\n\n\n");
        fugir();
    }
}

void esconder(){
    int v4;

    printf("onde voce se esconde? \n1) dentro de uma carroca \n2) em uma taverna \n3) atras de uma rocha \n4) dentro de um bueiro, no esgoto \nEscolha uma opcao: ");
    scanf("%d",&v4);

    if(v4 == 1 || v4 == 3)
    {
        system("color 4f");
        printf("Eu só queria... mais um pôr do sol... ao seu lado... \nvoce morreu\n\n\n");
        retorno();
    }
    else
    {
        if (v4 == 2 || v4 == 4)
        {
            printf("A dor me ensinou a viver... mesmo quando tudo dentro de mim ja queria desistir.\nvoce sobreviveu\n\n\n");
            retorno();
        }
        else
        {
            printf("\nescolha apenas uma das alternativas");
            esconder();
        }
    }
}

void nadahumano(){
    printf("Diante da imensa fera seu corpo contrai e paralisa de medo, a criatura berra em seu rumo ate que uma estalactite cai sobre a cabeça do dela\n");
    printf(".___________________.\n");
    printf("|     PARABENS      |\n");
    printf("|___________________|\n");
    printf("Voce volta a sua terra com o cranio do dragao, todos te adoram e te consideram o grande heroi!<3\n");
    retorno();
}

void nadaanao(){
    system("color 4f");
    printf("Voce sente seu corpo paralisado e tremendo, o dragao se aproxima e bufa encima  de voce,zn o bafo dele fede a mil cadaveres\n");
    printf(".___________________.\n");
    printf("|    VOCE MORREU    |\n");
    printf("|___________________|\n");
    printf("A fera lhe come com uma abocanhada, apesar do seu tamanho ela esta satisfeita e volta ao seu sono milenar, fazem uma estatua sua, seu nome e sacrificio serao lembrados!\n");
    retorno();
}

void nadagigante(){
    system("color 4f");
    printf("Voce sente seu corpo paralisado e prende a respiraçao, o dragao, aparentemente  uma femea, se aproxima e cheira voce, talvez seu cheiro a tenha agradado, ela o  agarra em um abraco e volta ao seu sono milenar\n");
    printf(".___________________.\n");
    printf("|    VOCE MORREU    |\n");
    printf("|___________________|\n");
    printf("Voce foi imcapaz de se soltar do abraco, mesmo com todo o seu tamanho, fazem uma estatua sua, seu nome e sacrificio serao lembrados!\n");
    retorno();
}

void nadaelfo(){
    printf("Diante da imensa fera seu corpo contrai e paralisa de medo, a criatura berra em seu rumo ate que uma estalactite cai sobre a cabeça do dela\n");
    printf(".___________________.\n");
    printf("|     PARABENS      |\n");
    printf("|___________________|\n");
    printf("Voce volta a sua terra com o cranio do dragao, todos te adoram e te consideram o grande heroi!<3\n");
    retorno();
}

void retorno(){
    sleep(15);
    system("cls");
    first();
}
