    #include<stdio.h>
    int main()
    {
      int nc,i,j;
      int all[256];
      for (i = 0; i < 256; ++i)
      {
         all[i]=0;
      }
      while ((nc=getchar())!=EOF)
      {
        all[nc]=all[nc]+1;
      }
      for (i = 0; i < 256; ++i)
      {
        putchar(i);
        for (j = 0; j < all[i]; ++j)
        {
            putchar('*');
                    }
        putchar('\n');
      }
      
      

        return 0;
    }
    