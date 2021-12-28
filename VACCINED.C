
// Proogram  : Find the dates of vaccine...



  #include<stdio.h>

  #include<conio.h>

  void main()

  {

   int i,m,f=2,n=84,k,d,t=0,temp=0,D,r,x,Y,y;

   clrscr();
   printf("\n\t\t\t\t WELCOME \n\t\t    FIND DATE FOR SECOND DOSE OF YOUR VACCINE.  ");

   Lable1:

   printf("\n\n\tEnter Which is your first vaccine : ");
   printf("\n\t Press > 1 < If COVISHIELD");
   printf("\n\t Press > 2 < If COVAXINE   \n\t>>> ");
   scanf("%d",&x);


   if(x>2)
    {
      printf("Invalide info plz enter info correclty...");

      goto Lable1;
    }
    else
    {


    printf("\n\tEnter the Date of First dose : ");
    scanf("%d",&D);

    printf("\tEnter the Month : ");
    scanf("%d",&m);

    printf("\tEnter the Year : ");
    scanf("%d",&Y);


    if(x==2)
    {
      n=30;
    }

    if(D>31||m>12)
      {

	 printf("\n\n\t Invalid format of DATE.\n\n\t Retry . . .");

      }
     else if(m==2 && D>28)
      {
	 printf("\n\n\t Invalid format of DATE.\n\n\t Retry . . .");
      }

    else

     {

      do

      {

	i=m;

	if(i<=7)

	{

	 if(i==2)
	 {
	   if(Y%4==0)
	   {
	     d=29;
	   }
	   else
	   {
	     d=28;
	   }
	 }
	 else if(i%2==0)
	 {
	   d=30;
	 }
	 else
	 {
	   d=31;
	 }
       }
       else
       {
	if(i%2==0)
	{
	  d=31;
	}
	else
	 {
	   d=30;
	 }
	}//if

	 if(temp==0)
	 {
	   r=d-D;
	   temp=1;
	 }
	 else
	 {
	   r=d;
	 }
	 n=n-r;
	 //printf("n = %d",n);

       if(m==12)
	 {
	  m=1;
	  Y++;
	 }
	else
	{
	   m++;
	}

     } while(n>31);


    for(y=2020;y<Y;y++)

     {

      for(i=1;i<13;i++)
      {

       if(i<=7)

       {

	 if(i==2)
	 {
	   if(y%4==0)
	   {
	     d=29;
	   }
	   else
	   {
	     d=28;
	   }
	 }
	 else if(i%2==0)
	 {
	   d=30;
	 }
	 else
	 {
	   d=31;
	 }
       }
       else
       {
	if(i%2==0)
	{
	  d=31;
	}
	else
	 {
	   d=30;
	 }
	}

	f=(f+d)%7;

       }
      // printf("\t%d   %d  ",y,f);

      }

     }

     for(i=1;i<m;i++)
     {


      if(i<=7)
      {

       if(i==2)
	 {
	   if(Y%4==0)
	   {
	      d=29;
	   }
	   else
	   {
	     d=28;
	   }
	 }
	else if(i%2==0)
	{
	   d=30;
	}
	else
	{
	   d=31;
	}
      }
      else
      {
	if(i%2==0)
	{
	  d=31;
	}
	else
	{
	   d=30;
	}
      }

      f=(f+d)%7;


     // printf("\n\n\t%d   %d",i,f);


    }


      r=(f+n)%7;

    // printf("\nn=%d,m=%d\n",n,m);

     if(m==2&&n>=28)
     {
       n=n-28;
       m=m+1;
     }

     printf("\n\t \t    The Dates for Second dose are :-\n\n\t  \t ");

     Lable2:

     if(t==0)
     {
      switch(r)
       {


	     case 1: printf("MONDAY");
	      break;
	     case 2: printf("TUESDAY");
	      break;
	     case 3: printf("WEDNESDAY");
	      break;
	     case 4: printf("THURSDAY");
	      break;
	     case 5: printf("FRIDAY");
	      break;
	     case 6: printf("SATURDAY");
	      break;
	     case 0: printf("SUNDAY");
	      break;

	    default:printf("\Invalide input");
	      break;

	}
      }

      if(t==1)
     {
       printf(" to ");
     }

      printf(" %d",n);

     if(n<20&&n>10)
     {
       printf("th ");
     }
      else
     {
       k=n%10;

     switch(k)
	{
	      case 1: printf("st ");
		break;
	      case 2: printf("nd ");
		break;
	      case 3: printf("rd ");
		 break;
	      default  :printf("th ");
		break;
	 }
       }

     switch(m)
      {
	     case 1: printf("JANUARY");
	      break;
	     case 2: printf("FEBRUARY");
	      break;
	     case 3: printf("MARCH");
	      break;
	     case 4: printf("APRIL");
	      break;
	     case 5: printf("MAY");
	      break;
	     case 6: printf("JUNE");
	      break;
	     case 7: printf("JULY");
	      break;
	     case 8: printf("AUGUST");
	      break;
	     case 9: printf("SEPTMBER");
	      break;
	      case 10: printf("OCTOBER");
	      break;
	      case 11: printf("NOVEMBER");
	      break;
	      case 12: printf("DECEMBER");
	      break;

	    default:printf("\Invalide input");
	      break;

      }

      //printf("\nn=%d,m=%d\n",n,m);
      if(t==0)
      {
	t=1;

       if(m < 8)
       {

	  if(m%2!=0 )
	  {
	     //printf("%d",m);
	     if(m==2&&n>=28)
	     {

		n=n-28;

	     }

	     else
	     {
	       n=n-1;
	     }
	  }
	  else if(m==2)
	  {
	     n=n+2;
	  }

       }
       else
       {
	  if(m%2==0)
	   {
	     n=n-1;
	   }
	}

	if(m>12)
	 {
	     m=1;
	     Y=Y+1;
	  }

	else if(n<3&&m==1)
	{

	  m=m+2;
	}
	else
	 {

	   m=m+1;

	 }

	if(n==0)
	{
	  //if(m)
	  n=31;
	  m=m-1;
	}

       //printf("\nn=%d\n",n);
       goto Lable2;
      }
     printf(" %d",Y);

     if(t==0)
     {

      switch(r)
       {


	     case 1: printf("MONDAY");
	      break;
	     case 2: printf("TUESDAY");
	      break;
	     case 3: printf("WEDNESDAY");
	      break;
	     case 4: printf("THURSDAY");
	      break;
	     case 5: printf("FRIDAY");
	      break;
	     case 6: printf("SATURDAY");
	      break;
	     case 0: printf("SUNDAY");
	      break;

	    default:printf("\Invalide input");
	      break;

	}
     }
	printf(".");

    } //else

   getch();

} //main


