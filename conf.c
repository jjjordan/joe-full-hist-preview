#include <stdio.h>

main(argc,argv)
char *argv[];
 {
 int x;
 int bits=8;
 int isiz=sizeof(int);
 int lsiz=sizeof(long);
 int shft;
 long maxint;
 FILE *f=fopen("config.h","w");
 FILE *g;

 /* Output header */
 fprintf(f,"/* Configuration file generated by conf.c program */\n");
 fprintf(f,"\n");
 fprintf(f,"#ifndef _Iconfig\n");
 fprintf(f,"#define _Iconfig 1\n");
 fprintf(f,"\n");

 fprintf(f,"/* Uncomment to use TERMINFO database*/\n");
 if(argv[2][0]=='1')
  fprintf(f,"#define TERMINFO 1\n");
 else
  fprintf(f,"/* #define TERMINFO 1 */\n");
 fprintf(f,"\n");

 fprintf(f,"/* Path where main.c tries to open rc file */\n");
 fprintf(f,"#define JOERC \"%s/\"\n\n",argv[1]);

 fprintf(f,"\n");

 /* Figure out what type of tty we have */
 if(g=fopen("/usr/include/termios.h","r"))
  {
  fprintf(f,"/* Uncomment the tty type.  Leave all uncommented for BSD */\n");
  fprintf(f,"#define TTYPOSIX 1\n");
  fprintf(f,"/* #define SYSPOSIX 1*/\n");
  fprintf(f,"/* #define TTYSV 1 */\n");
  fprintf(f,"/* #define SYSSV 1 */\n");
  fclose(g);
  }
 else if(g=fopen("/usr/include/sys/termios.h","r"))
  {
  fprintf(f,"/* Uncomment the tty type.  Leave all uncommented for BSD */\n");
  fprintf(f,"#define TTYPOSIX 1\n");
  fprintf(f,"#define SYSPOSIX 1\n");
  fprintf(f,"/* #define TTYSV 1 */\n");
  fprintf(f,"/* #define SYSSV 1 */\n");
  fclose(g);
  }
 else if(g=fopen("/usr/include/termio.h","r"))
  {
  fprintf(f,"/* Uncomment the tty type.  Leave both uncommented for BSD */\n");
  fprintf(f,"/* #define TTYPOSIX 1 */\n");
  fprintf(f,"/* #define SYSPOSIX 1 */\n");
  fprintf(f,"#define TTYSV 1\n");
  fprintf(f,"/* #define SYSSV 1 */\n");
  fclose(g);
  }
 else if(g=fopen("/usr/include/sys/termio.h","r"))
  {
  fprintf(f,"/* Uncomment the tty type.  Leave all uncommented for BSD */\n");
  fprintf(f,"/* #define TTYPOSIX 1 */\n");
  fprintf(f,"/* #define SYSPOSIX 1 */\n");
  fprintf(f,"#define TTYSV 1\n");
  fprintf(f,"#define SYSSV 1\n");
  fclose(g);
  }
 else
  {
  fprintf(f,"/* Uncomment the tty type.  Leave all uncommented for BSD */\n");
  fprintf(f,"/* #define TTYPOSIX 1 */\n");
  fprintf(f,"/* #define SYSPOSIX 1 */\n");
  fprintf(f,"/* #define TTYSV 1 */\n");
  fprintf(f,"/* #define SYSSV 1 */\n");
  fclose(g);
  }

 fprintf(f,"\n");

 /* Figure out what type of directory access we have */
 if(g=fopen("/usr/include/dirent.h","r"))
  {
  fprintf(f,"/* Uncomment the directory access type.  Leave all commented for none */\n");
  fprintf(f,"#define DIRENT 1\n");
  fprintf(f,"/* #define SYSDIRENT 1 */\n");
  fprintf(f,"/* #define SYSDIR 1 */\n");
  fprintf(f,"/* #define BSDSYSDIR 1 */\n");
  fclose(g);
  }
 else if(g=fopen("/usr/include/sys/dirent.h","r"))
  {
  fprintf(f,"/* Uncomment the directory access type.  Leave all commented for none */\n");
  fprintf(f,"/* #define DIRENT 1 */\n");
  fprintf(f,"#define SYSDIRENT 1\n");
  fprintf(f,"/* #define SYSDIR 1 */\n");
  fprintf(f,"/* #define BSDSYSDIR 1 */\n");
  fclose(g);
  }
 else if(g=fopen("/usr/include/sys/dir.h","r"))
  {
  fprintf(f,"/* Uncomment the directory access type.  Leave all commented for none */\n");
  fprintf(f,"/* #define DIRENT 1 */\n");
  fprintf(f,"/* #define SYSDIRENT 1 */\n");
  fprintf(f,"#define SYSDIR 1\n");
  fprintf(f,"/* #define BSDSYSDIR 1 */\n");
  fclose(g);
  }
 else if(g=fopen("/usr/include/bsd/sys/dir.h","r"))
  {
  fprintf(f,"/* Uncomment the directory access type.  Leave all commented for none */\n");
  fprintf(f,"/* #define DIRENT 1 */\n");
  fprintf(f,"/* #define SYSDIRENT 1 */\n");
  fprintf(f,"/* #define SYSDIR 1 */\n");
  fprintf(f,"#define BSDSYSDIR 1\n");
  fclose(g);
  }

 fprintf(f,"\n");

 /* Check if we have utime.h */
 if(g=fopen("/usr/include/utime.h","r"))
  {
  fprintf(f,"/* Uncomment if we have utime.h */\n");
  fprintf(f,"#define UTIME 1\n");
  fprintf(f,"/* #define SYSUTIME 1 */\n");
  fclose(g);
  }
 else if(g=fopen("/usr/include/sys/utime.h","r"))
  {
  fprintf(f,"/* Uncomment if we have utime.h */\n");
  fprintf(f,"/* #define UTIME 1 */\n");
  fprintf(f,"#define SYSUTIME 1\n");
  fclose(g);
  }
 else
  {
  fprintf(f,"/* Uncomment if we have utime.h */\n");
  fprintf(f,"/* #define UTIME 1 */\n");
  fprintf(f,"/* #define SYSUTIME 1 */\n");
  }

 fprintf(f,"\n");

 for(shft=0,x=1;x<isiz;++shft,x<<=1);
 fprintf(f,"#define BITS %d	/* Bits in a byte */\n",bits);
 fprintf(f,"#define ISIZ %d	/* Int size in bytes */\n",isiz);

 fprintf(f,"#define SHFT %d	/* Log base 2 of ISIZ */\n",shft);

 for(maxint=1,x=0;x<bits*isiz-1;maxint<<=1,++x);
 --maxint;
 fprintf(f,"#define MAXINT 0x%lX	/* Largest Int */\n",maxint);
 for(maxint=1,x=0;x<bits*lsiz-1;maxint<<=1,++x);
 --maxint;
 fprintf(f,"#define MAXLONG 0x%lX	/* Largest Long */\n",maxint);
 fprintf(f,"\n");

 fprintf(f,"/* Uncomment the next line if your compiler has trouble with void */\n");
 fprintf(f,"/* #define void int */\n");
 fprintf(f,"\n");

 fprintf(f,"#ifndef NULL\n");
 fprintf(f,"#define NULL ((void *)0)\n");
 fprintf(f,"#endif\n");
 fprintf(f,"\n");

 fprintf(f,"#ifndef HZ\n");
 fprintf(f,"#define HZ 10\n");
 fprintf(f,"#endif\n");
 fprintf(f,"\n");

 fprintf(f,"/* #define AUTOINC 1 */\n");
 fprintf(f,"/* #define ALIGNED 1 */\n");

#ifdef __MSDOS__
 if(sizeof(void *)==4)
  {
  fprintf(f,"#define physical(a) (((unsigned long)(a)&0xFFFF)+(((unsigned long)(a)&0xFFFF0000)>>12))\n");
  fprintf(f,"#define normalize(a) \\\n\
  ((void *)(((unsigned long)(a)&0xFFFF000F)+(((unsigned long)(a)&0x0000FFF0)<<12)))\n");
  }
 else
  {
  fprintf(f,"#define physical(a) ((unsigned long)(a))\n");
  fprintf(f,"#define normalize(a) (a)\n");
  }
 fprintf(f,"#define SEGSIZ 1024\n");
 fprintf(f,"#define PGSIZE 1024\n");
 fprintf(f,"#define LPGSIZE 10\n");
 fprintf(f,"#define ILIMIT (PGSIZE*96L)\n");
 fprintf(f,"#define HTSIZE 128\n");
#else
 fprintf(f,"#define physical(a) ((unsigned long)(a))\n");
 fprintf(f,"#define normalize(a) (a)\n");
 fprintf(f,"#define SEGSIZ 4096\n");
 fprintf(f,"#define PGSIZE 4096\n");
 fprintf(f,"#define LPGSIZE 12\n");
 fprintf(f,"#define ILIMIT (PGSIZE*1024)\n");
 fprintf(f,"#define HTSIZE 2048\n");
#endif
 fprintf(f,"\n");

 fprintf(f,"char *getenv();\n");
 if(sizeof(long)==8) fprintf(f,"int time();\n");
 else fprintf(f,"long time();\n");
 fprintf(f,"void *malloc();\n");
 fprintf(f,"void free();\n");
 fprintf(f,"void *calloc();\n");
 fprintf(f,"void *realloc();\n");
 fprintf(f,"int jread();\n");
 fprintf(f,"int jwrite();\n");
 fprintf(f,"\n");

 /* End of file */
 fprintf(f,"#endif\n");
 fclose(f);
 return 0;
 }
