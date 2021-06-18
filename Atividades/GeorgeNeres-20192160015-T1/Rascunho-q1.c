int q1(char *data)
{
    int datavalida;
    
    char dt[11];
    char sDia[3];
    char sMes[3];
    char sAno[5];
 
 //  1) Passo Completo quebrar as strings
  for(int i =0; i < 11; i++) {
    

    if(sDia[i] < 3 || sDia[i] =='/') {
        sDia[i]++;
    }
    if(sMes[i] >= 3 || sMes[i] =='/') {
        sMes[i]++;
    }
    if(sMes[i] >= 5 || sMes[i] =='\0') {
        sAno[i]++;
    }
                 
    dt[i]++;
 }
  // 2) Passo sDia, sMes e sAno para inteiros
   
  
   int iDia = atoi(sDia);
   int iMes = atoi(sMes);
   int iAno = atoi(sAno);
 

// 3) Passo Criar as variaveis iDia, iMes, iAno
 


    //quebrar a string data em strings sDia, sMes, sAno

  // DataQuebrada quebraData = quebraData(data); // (struct)passo a data
// chamar a função quebrar Data

    //converter sDia, sMes e sAno em inteiros (ex: atoi)

    //criar as variáveis iDia, iMes, iAno

    //printf("%s\n", data);
   
  // Verificar se o ano e Bissexto ou nao EX:
  // Verificar se dias tem entre 31 ou 1 no primeiro teste
  //O mes tem que ser entre 1 e 12
  //O ano pode ser com qualuqer valor positivo

  while(iAno > 0) {

     if(iMes == 1 || iMes == 3 || iMes == 5 || iMes == 7 ||
        iMes == 8 || iMes == 10 || iMes == 12) {

        if(iDia >= 1 && iDia <= 31) {
            return 1; 
         }
          else {
              return 0;
          }
         
        }
   }
    if (datavalida)
        return 1;
    else
        return 0;
} 
