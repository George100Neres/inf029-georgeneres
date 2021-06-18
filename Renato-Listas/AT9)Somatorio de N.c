
 #include<stdio.h>
 #include<stdlib.h>

   int som(int val) {
       if(val == 0) {
           return 0;
       }else {
           return val + som(val - 1);
       }
   }

    main() {
        int num=0, i=0, r=0;

        printf("Digite o numero\n");
        scanf("%d", &num);

        r=som(num);
        printf("Valor somado %d\n", r);
    }