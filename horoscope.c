#include<stdio.h>
void prediction();
void zodiac();
int hash(int);
void insertlp(int hashtable[],int key);
int rehashl(int key);


void aries()
{
	printf("\n");
	printf(" *\n");
	printf("   -\n");
	printf("     -\n");
	printf("       -\n");
	printf("         -\n");
	printf("           -\n");
	printf("             *\n");
	printf("              -\n");
	printf("               -\n");
	printf("                -\n");
	printf("                 -\n");
	printf("                  -\n ");
	printf("                  *\n");
  printf("                   -\n");	
	printf("                   -\n");
	printf("                   -\n");
	printf("                   *\n");
}

void taurus()
{
	printf("\n");
	printf("                     *\n");
	printf("                      -\n");
  printf("                       -\n");
  printf("     *                   -\n");
  printf("      -                   *\n");
	printf("       -                   -\n");
	printf("        -                   -\n ");
	printf("         -                   *\n");
	printf("          -                -\n");
	printf("           -             -\n");
	printf("            -           *\n");
	printf("             -            -\n");
	printf("              *             - \n");
	printf("               -              *\n");
	printf("                   -       -\n");
	printf("                    -    -\n ");
	printf("                      *\n");
	printf("                       -\n");
	printf("                        -\n");
	printf("                         *\n");
	printf("                          -\n");
	printf("                            -\n");
	printf("                              -\n");
	printf("                                -\n");
	printf("                                  *\n");
	printf("                                   -\n");
	printf("                                   -\n");
	printf("                                   *\n");
}

void gemini()
{
	printf("\n");
	printf("        *\n");
	printf("       -   - _\n");
	printf("      -        * -              *\n");
	printf("     -             *        -\n");
	printf("    *               -    -\n");
	printf("    -                 -\n");
	printf("     -                 *\n ");
	printf("      *                  - \n");
	printf("        - _                -\n ");
	printf("            - _             * \n");
	printf("                *         -\n");
	printf("                  - _   -  \n");
	printf("                      * \n");
	printf("                   _ -  \n");
	printf("                 -\n");
	printf("               *\n");
}

void cancer()
{ 
	printf("\n");
	printf("    *\n");
	printf("      - _\n");
	printf("          - \n");
	printf("            *\n");
	printf("               - _\n");
	printf("                    *  _\n");
	printf("                 _ -    - _\n");
	printf("              -             *\n");
	printf("            *\n");
}

void leo()
{
	printf("\n");
	printf("         *\n");
	printf("       -   -\n");
	printf("      -      -\n");
	printf("     *         *\n");
	printf("       - _\n");
	printf("           -\n");
	printf("             *\n");
	printf("         _ -    - _\n");
	printf("      -            * \n");
	printf("     *                - _\n  ");
	printf("   -                     *\n");
	printf("  -                    _ -\n");
	printf(" -              _ -\n");
	printf(" -            -\n");
	printf("  -         _ -\n");
	printf("    -     *\n");
	printf("     -    -  \n");
 	printf("        *\n ");
}

void virgo()
{
	printf("\n");
	printf("                             *\n");
	printf("            *               _-\n");
	printf("              - _          *\n");
	printf("                  -       -\n");
	printf("                    * -  - \n");
	printf("                   -    *\n");
	printf("               _ -        - _\n");
	printf("              *               *\n");
	printf("          _  -   - _       _ -\n ");
	printf("      _ -            -   *\n");
	printf("     *                 -    -\n");
	printf("  _ -          *          -  *\n");
	printf(" *            -  - _       _ -\n");
	printf("           _ -      -_  _ -\n");
	printf("        _ -            *\n");
	printf("       *\n");
}

void libra()
{
  printf("\n");
	printf("          *  _\n");	
	printf("           -     -  - _\n");
	printf("           -   _         *\n");
	printf("         *         _       -\n");
	printf("      _ -            _       - \n");
	printf("    *                  -       -\n");
	printf("   -                      - _    -\n");
	printf("     - _                        *\n");
	printf("         *                _ -\n");
	printf("                      _ \n");
	printf("                     *\n");
	printf("                      - _\n");
	printf("                         - _\n");
	printf("                             *\n");
}

void scorpio()
{
	printf("\n");
	printf("                       *-\n");
	printf("                        --\n");
	printf("                     --- -*\n");
	printf("                 --     --\n");
	printf("               -      --\n");
	printf("       *      -     *-\n");
	printf("      -       -\n");
  printf("  --*       -\n");
	printf("   -       -*\n");
	printf("    -    - -\n");
	printf("     -   -\n");
  printf("      * *\n");
}

void sagittarius()
{
    printf("\n");
    printf("      *\n");
    printf("       -     *\n");
    printf("        -   -\n");
    printf("          -          *\n");
    printf("           -         -\n");
    printf("            -     -*-       ---\n");
    printf("              -- -    -    -   -\n");
    printf("     -*-   --   --      ---     *\n");
    printf("    -    --    -       -    -\n");
    printf("   --     *----       *      *\n");
    printf("  * \n");
    printf("    -\n");
    printf("     -- \n");
    printf("       --     *\n");
    printf("        --   -\n");
    printf("           *--*\n");
    printf("              -\n");
    printf("               *  \n");
}

void capricorn()
{
	printf("\n");
	printf("                 *\n");
	printf("                 -\n");
	printf("                 -\n");
	printf("                 -\n");
	printf("                 *\n");
	printf("                - -\n");
	printf("               -   -\n");
	printf("              -     -\n");
	printf("             -       -\n");
	printf("            -         -\n");
	printf("           -           -\n");
	printf("          -            *\n");
	printf("         *            -\n");
	printf("       -           ---\n");
	printf("      -     -*---*\n");
	printf("    --     -\n");
	printf("  *      -*\n");
	printf(" -     --\n");
	printf(" -   -\n");
	printf("  *--\n");
}

void aquarius()
{
	printf("\n");
	printf("                *\n");
	printf("              -\n");
	printf("           **\n");
	printf("         -\n");
	printf("       -\n");
	printf("      *\n");
	printf("   -     -  \n");
	printf("    -     -       --*\n");
	printf("     -     -*-----\n");
	printf("      -\n");
	printf("   *--* \n");
	printf("  -\n");
	printf("  *\n");
	printf("  -\n");
	printf("   -\n");
	printf("    -       ----*\n");
	printf("     -     - \n");
	printf("      -   -\n");
	printf("        *\n");
}

void pisces()
{
	printf("\n");
	printf("                   -*-\n"); 
	printf("                 -      -\n"); 
	printf("               *         *\n"); 
	printf("              -         -\n"); 
	printf("              ---   ---\n"); 
	printf("                  *\n"); 
	printf("                  -\n");  
	printf("                  -\n"); 
	printf("                  *-\n"); 
	printf("                    -\n"); 
	printf("                      -\n"); 
	printf("                        -\n"); 
	printf("                            *\n"); 
	printf("                          -\n");
	printf(" *       *------       ---\n"); 
	printf("  -     -       -------\n"); 
	printf("   --  -\n"); 
	printf("     *\n"); 
}


void main()
{
	int choice,d,m;
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t==      ==   ==========   ==========   ==========   ==========   ==========   ==========   ==========   ========== \n");
	printf("\t\t\t==      ==   =        =   =        =   =        =   =            =            =        =   =        =   =\n");
	printf("\t\t\t==      ==   =        =   =        =   =        =   =            =            =        =   =        =   =\n");
	printf("\t\t\t== ==== ==   =        =   ==========   =        =   ==========   =            =        =   ==========   ========== \n");
	printf("\t\t\t==      ==   =        =   =  =         =        =            =   =            =        =   =            =\n");
	printf("\t\t\t==      ==   =        =   =     =      =        =            =   =            =        =   =            =\n");
	printf("\t\t\t==      ==   ==========   =        =   ==========   ==========   ==========   ==========   =            ========== \n");
	getchar();
	printf("\n\n\n\t\t\t\t\t\t\t\t\t    WELCOME!\n \t\t\t\t\t\t\t\tPRESS ENTER TO KNOW YOUR HOROSCOPE\n");
	getchar();
	system("cls");           //use system("clear") for gcc in linux
	do
	{
	  s: printf("Select from the following:\n1.PREDICTION\t\t           2.KNOW YOUR ZODIAC SIGN\n");
	                                printf("3.CONTACT A ASTROLOGIST\t\t   4.ABOUT US\n");
									printf("5.REFERENCE\t\t           6.EXIT\n");
	   scanf("%d",&choice);
	   switch(choice)
	   {
	   	    case 1:
	   	    	system("cls");
	            prediction();
	          	printf("\n\n\n\t\t\tTO GO BACK PRESS ENTER");
	   	    	getchar();
	   	    	getchar();
	   	    	system("cls");
	   	    	goto s;
	   	    	break;
	   	    	
	   	    case 2:
	   	    	system("cls");
	   	    	zodiac();
	   	    	printf("\n\n\n\t\t\tTO GO BACK PRESS ENTER");
	   	    	getchar();
	   	    	getchar();
	   	    	system("cls");
	   	    	goto s;
	   	    	break;	
	   	    	
	   	    case 3:
	   	    	system("cls");
	   	    	printf("1.BANWARI LAL\n\tEXPERIENCE:-33 YRS\n\tCHARGE:-RS 2500/session\n\n");
	   	    	printf("2.TAROT ISHA\n\tEXPERIENCE:-9 YRS\n\tCHARGE:-RS 1001/session\n\n");
	   	    	printf("3.JAGDISH SINGH\n\tEXPERIENCE:-14 YRS\n\tCHARGE:-RS 3500/session\n\n");
	   	    	printf("4.NEELU PATHAK\n\tEXPERIENCE:-12 YRS\n\tCHARGE:-RS 1800/session\n\n");
	   	    	printf("5.RITIK SHEKHDA\n\tEXPERIENCE:-5 YRS\n\tCHARGE:-RS 5000/session\n\n");
	   	    	printf("\n\n\n\t\t\tTO GO BACK PRESS ENTER");
	   	    	getchar();
	   	    	getchar();
	   	    	system("cls");
	   	    	goto s;
	   	    	break;	
	   	    	
	   	   	case 4:
	   	   		system("cls");
	   	   		printf("THIS HOROSCOPE IS MADE BY \nUTKARSH MISHRA\nADARSH PANDEY\nSACHIN K. \nUNDER THE GUIDANCE OF PROF.SUNNY SALL\n");
	   	    	printf("\n\n\n\t\t\tTO GO BACK PRESS ENTER");
	   	    	getchar();
	   	    	getchar();
	   	    	system("cls");
	   	    	goto s;
	   	    	break;	
	   	    	
	   	    case 5:
	   	    	system("cls");
	   	    	printf("1.TIMES OF INDIA\n2.MUMBAI MIRROR\n3.www.includehelp.com\n4.www.stackoverflow.com\n");
	   	    	printf("\n\n\n\t\t\tTO GO BACK PRESS ENTER");
	   	    	getchar();
	   	    	getchar();
	   	    	system("cls");
	   	    	goto s;
	   	    	break;
	   	    	
	   	    case 6:
	   	    	break;
	   	    	
	   	    default:
	   	    	printf("\n\t\tINVALID CHOICE PLEASE CHOOSE AGAIN\n\t\tPRESS ENTER TO CHOOSE");
	   	    	getchar();
	   	    	getchar();
	   	    	system("cls");
	   	    	goto s;
	   }
	   
    }while(choice!=6);
}


void zodiac()
{
	    int date,ch,key,i,a[120];                  //ch=month
  s:	printf("enter your birth date\n");
    	scanf("%d",&date);
    	printf("enter month\n");
    	scanf("%d",&ch);
    	key=date+ch;
    	 for (i=0;i<120;i++)
 	     a[i]=-1 ;
	if (((date>=21)  &&(date<32)&& (ch==3)) || ((date<=20 ) && (date>0) && (ch==4 )))
	{
        libra();
        printf("\n\n\t\tYOU ARE A ARIES ");
        printf("\n Element:Fire");
        printf("\n Quality:Cardinal");
        printf("\n Color:Red");
        printf("\n Day:Tuesday");
        printf("\n Ruler:Mars");
        printf("\n Greatest Overall Compatibility:Libra,Leo");
        insertlp(a,key);
        printf("\n Strengths:Courageous,determined,confident,enthusiastic,optimistic,honest,passionate");
        printf("\n Weaknesses:Impatient,moody,short-tempered,impulsive,aggressive");
        printf("\n Aries Likes:Comfortable clothes,taking on leadership roles,physical challenges,individual sports");
        printf("\n Aries Dislikes:Inactivity,delays,work that does not use one's talents\n");
    }
    else if (((date>=21) &&(date<31) && (ch==4)) || ((date<=21 ) && (date>0) && (ch==5 )))
    {
        taurus();
        printf("\n\n\t\tYOU ARE A TAURUS ");
        printf("\n Element:Earth");
        printf("\n Quality:Fixed");
        printf("\n Color:Green,Pink");
        printf("\n Day:Friday,Monday");
        printf("\n Ruler:Venus");
        printf("\n Greatest Overall compatibility:Scorpio,Cancer");
        insertlp(a,key);
        printf("\n Strengths:Reliable,patient,practical,devoted,responsible,stable");
        printf("\n Weaknesses:Stubborn,possessive,uncompromising");
        printf("\n Taurus Likes:Gardening,cooking,nusic,romance,high quality clothes");
        printf("\n Taurus Dislikes:Sudden changes,complications,insecurity of any kind\n");
    }
    else if (((date>=22)  &&(date<32)&& (ch==5)) || ((date<=21 ) && (date>0) && (ch==6 )))
    {
        gemini();
        printf("\n\n\t\tYOU ARE A GEMINI ");
        printf("\n Element:Air");
        printf("\n Quality:Mutable");
        printf("\n Color:Light-Green,Yellow");
        printf("\n Day:Wednesday");
        printf("\n Ruler:Mercury");
        printf("\n Greatest Overall Compability:Sagittarius,Aquarius");
        insertlp(a,key);
        printf("\n Strengths:Gentle,affectionate,curious,ability to learn quickly and exchange ideas");
        printf("\n Weaknesses:Nervous,inconsistent,indecisive");
        printf("\n Gemini Likes:Music books,magazines,chats with nearly anyone,short trips");
        printf("\n Gemini Dislikes:Being alone,being confined,repetitionand routine\n");
    }
    else if (((date>=22) &&(date<31) && (ch==6)) || ((date<=22 ) && (date>0) && (ch==7 )))
    {
        cancer();
        printf("\n\n\t\tYOU ARE A CANCER ");
        printf("\n Element:Water");
        printf("\n Quality:Cardinal");
        printf("\n Color:White");
        printf("\n Day:Monday,Thursday");
        printf("\n Ruler:Moon");
        printf("\n Greatest Overall Compatibility:Capricorn,Taurus");
        insertlp(a,key);
        printf("\n Strengths:Tenacious,highly imaginative,sympathetic,loyal,emotional");
        printf("\n Weaknesses:Moody,pessimistic,insecure,manipulative");
        printf("\n Cancer Likes:Art,home-based hobbies,relaxing near or person,helping loved once,a good mealwith friends\n");
    }
    else if (((date>=23)  &&(date<32)&& (ch==7)) || ((date<=22 ) && (date>0) && (ch==8 )))
    {
        leo();
        printf("\n\n\t\tYOU ARE A LEO ");
        printf("\n Element:Fire");
        printf("\n Quality:Fixed");
        printf("\n Color:Gold,Yellow,Orange");
        printf("\n Day:Sunday");
        printf("\n Ruler:Sun");
        printf("\n Greatest Overall Compability:Aquarius,Gemini");
        insertlp(a,key);
        printf("\n Strengths:Creative,passionate,generous,warm-hearted,cheerful,,humorous");
        printf("\n Weaknesses:Arrogant,stubborn,self-centered,lazy,inflexible");
        printf("\n Leo Likes:Theater,taking holidays,expensive things,bright colours,fun with friends,being admired");
        printf("\n Leo Dislikes:Being ignored,facing difficult reality\n");
    }
    else if (((date>=23)  &&(date<32)&& (ch==8)) || ((date<=22 ) && (date>0) && (ch==9 )))
    {
        virgo();
        printf("\n\n\t\tYOU ARE A VIRGO ");
        printf("\n Element:Earth");
        printf("\n Quality:Mutable");
        printf("\n Color:Grey,Pale-Yellow,Beige");
        printf("\n Day:Wednesday");
        printf("\n Ruler:Mercury");
        printf("\n Greatest Overall Compatibility:Pisces,Cancer");
        insertlp(a,key);
        printf("\n Strengths:loyal,analytical,kind,hardworking,practical");
        printf("\n Weaknesses:Shyness,worry,overly critical of self and others,all work and no play");
        printf("\n Virgo Likes:Animals,healthy food,books,nature,cleanliness");
        printf("\n Viro Dislikes:Rudeness,asking for help,taking center stage\n");
    }
    else if (((date>=23) &&(date<31) && (ch==9)) || ((date<=23 ) && (date>0) && (ch==10 )))
    {
        libra();
        printf("\n\n\t\tYOU ARE A LIBRA ");
        printf("\n Element:Air");
        printf("\n Quality:Cardinal");
        printf("\n Color:pink,green");
        printf("\n Day:Friday");
        printf("\n Ruler:Venus");
        printf("\n Greatest Overall Compatibility:Aries,Sagittarius");
        insertlp(a,key);
        printf("\n Strengths:Cooperative,diplomatic,gracious,fair-minded,social");
        printf("\n Weaknesses:Indecisive,avoids,confrontations,will carry a grudge,self-pity");
        printf("\n Libra Likes:Harmony,gentleness,sharing with others,the outdoors");
        printf("\n Libra Dislikes:Violence,injustice,loudmouths,conformity\n"); 
    }
    else if (((date>=24)  &&(date<32)&& (ch==10)) || ((date<=21 ) && (date>0) && (ch==11 )))
    {
        scorpio();
        printf("\n\n\t\tYOU ARE A SCORPIO ");
        printf("\n Element:Water");
        printf("\n Quality:Fixed");
        printf("\n Color:Scarlet,red,Rust");
        printf("\n Day:Tuesday");
        printf("\n Ruler:Pluto,Mars");
        printf("\n Greatest Overall Compatibility:Taurus,Cancer");
        insertlp(a,key);
        printf("\n Strengths:Resourceful,brave,passionate,stubborn,true friend");
        printf("\n Weaknesses:Distrusting,jealous,secretive,violent");
        printf("\n Scorpio Likes:Truth,facts,being right,longtime,friends,teasing,grand passion");
        printf("\n Scorpio Dislikes:Dishonesty,revealing secrets,passive people");   
    }
    else if (((date>=22)  &&(date<31)&& (ch==11)) || ((date<=21 ) && (date>0) && (ch==12 )))
    {
        sagittarius();
        printf("\n\n\t\tYOU ARE A SAGITTARIUS ");
        printf("\n Element:Fire");
        printf("\n Quality:Mutable");
        printf("\n Color:Blue");
        printf("\n Day:Thursday");
        printf("\n Ruler:Jupiter");
        printf("\n Greatest Overall Compatibility:Gemini,Aries");
        insertlp(a,key);
        printf("\n Strengths:Generous,idealistic,great sense of humor");
        printf("\n Weaknesses:Promises more than can deliver,very impatient,will say anything no matter how undiplomatic");
        printf("\n Sagittarius Likes:Freedom,travel,philosophy,being outdoors");
        printf("\n Sagittarius Dislikes:Clingy people,being constrained,off-the-wall theories,details"); 	   
    }
    else if (((date>=22)  &&(date<32)&& (ch==12)) || ((date<=21 ) && (date>0) && (ch==1 )))
    {
        capricorn();
        printf("\n\n\t\tYOU ARE A CAPRICORN ");
        printf("\n Element:Earth");
        printf("\n Quality:Cardinal");
        printf("\n Color:Brown,Black");
        printf("\n Day:Saturday");
        printf("\n Ruler:Saturn");
        printf("\n Greatest Overall Compability:Taurus,Cancer");
        insertlp(a,key);
        printf("\n Strengths:Respnsible,disciplined,self-control,good manners");
        printf("\n Weaknesses:Know-it-all,unforgiving,condescending,expecting the worst");
        printf("\n Capricon Likes:Family,tradition,music,understaded status,quality craftmanship");
        printf("\n Capricon Dislikes:Almost everything at some point");	   
    }
    else if (((date>=22) &&(date<32) && (ch==1)) || ((date<=18 ) && (date>0) && (ch==2 )))
    {
        aquarius();
        printf("\n\n\t\tYOU ARE A AQUARIUS ");
        printf("\n Element:Air ");
        printf("\n Quality:Fixed");
        printf("\n Color:Light-blue,Silver");
        printf("\n Day:Saturday");
        printf("\n Ruler:Saturn,Uranus");
        printf("\n Greatest Overall Compatibility:Leo,Sagittarius");
        insertlp(a,key);
        printf("\n Strengths:Progressive,original,independent,humanitarian");
        printf("\n Weaknesses:Runs from emotional expression,temperamental,uncompromising,aloof");
        printf("\n Aquarius Likes:Fun with freinds,helping others,fighting for causes,intellectual conversation,a good listener");
        printf("\n Aquarius Dislikes:Limitations,broken promises,being lonely,dull or boring situations,people who disagree with them");
    }
    else if (((date>=19) &&(date<30) && (ch==2)) || ((date<=20 ) && (date>0) && (ch==3 )))
    {
        pisces();
        printf("\n\n\t\tYOU ARE A PISCES ");
        printf("\n Element:Water");
        printf("\n Quality:Mutable");
        printf("\n Color:Lilac,Purple,Violet,Sea green");
        printf("\n Day:thursday");
        printf("\n Ruler:Neptune,Jupiter");
        printf("\n Greatest Overall Compability:Virgo,Taurus");
        insertlp(a,key);
        printf("\n Strengths:Compassionate,artistic,gentle,wise,musical");
        printf("\n Weaknesses:Fearful,overly trusting,sad,desire to escape reality");
        printf("\n Pisces Likes:Being alone,sleeping,music,romance,swimming");
        printf("\n Pisces Dislikes:Know-it-all,being criticized,the past coming back to haunt,cruelty of any kind");
    }
    else
    {
          printf("\n\t\tINVALID DATE AND MONTH\n\t\tPRESS ENTER TO TRY AGAIN");
          getchar();
          getchar();
          system("cls");
          goto s;
	  }
}


void prediction()
{
        int date,ch;
        s:	printf("enter your birth date\n");
            scanf("%d",&date);
            printf("enter month\n");
            scanf("%d",&ch);
        if (((date>=21)  &&(date<32)&& (ch==3)) || ((date<=20 ) && (date>0) && (ch==4 )))
        {
          aries();
          printf("\n\n\t\tYOU ARE A ARIES ");
          printf("\n A FORTUNATE outcome is indicated for projects initiated today.Your mood will be solemn.");
          printf("\n Approach every situation with caution.Validate your actions without asking too many questions.");
          printf("\n You feel sure of your choices and this allows you to move easily towards your goal\n");
        }
          else if (((date>=21) &&(date<31) && (ch==4)) || ((date<=21 ) && (date>0) && (ch==5 )))
          {
             taurus();
             printf("\n\n\t\tYOU ARE A TAURUS ");
             printf("\n You may be worried about the health of a mentor or respected elder.Offer to ease their burden.");
             printf("\n Normally you wouldnt do a sub servient role.However you are willing to make exception in this case.\n");
          }
          else if (((date>=22)  &&(date<32)&& (ch==5)) || ((date<=21 ) && (date>0) && (ch==6 )))
          {
             gemini();
             printf("\n\n\t\tYOU ARE A GEMINI ");
             printf("\n You will always find someone who cares about you and is willing to lend an ear.");
             printf("\n You show a great deal of interest in family matter.It is just that you probably want more time alone.");
             printf("\n This is a good day to be with others and work together.Strenghter your ties with an older member in family\n");
          }
          else if (((date>=22) &&(date<31) && (ch==6)) || ((date<=22 ) && (date>0) && (ch==7 )))
          {
             cancer();	
             printf("\n\n\t\tYOU ARE A CANCER ");
             printf("\n Pleasurable pursuits are distractin you from your financial obligatons.");
             printf("\n Take a few hours this evening to go through bills.Seeing what you owe will give you motivation.");
             printf("\n Its not that you are irresponsible.its just that you have difficulty switching gears.\n");
          }
          else if (((date>=23)  &&(date<32)&& (ch==7)) || ((date<=22 ) && (date>0) && (ch==8 )))
          {
             leo();	
             printf("\n\n\t\tYOU ARE A LEO ");
             printf("\n It is important to gather all the facts necessary to give you a realistic idea.");
             printf("\n It is difficult to relax and enjoy.");
             printf("\n Y0u have vague feeling that you are not being given freedom you need to do your job proprrly.\n");
          }
          else if (((date>=23)  &&(date<32)&& (ch==8)) || ((date<=22 ) && (date>0) && (ch==9 )))
          {
             virgo();
             printf("\n\n\t\tYOU ARE A VIRGO ");
             printf("\n Your long term plans may include studying and travelling.");
             printf("\n When you are away from work you can be quite outgoing.You may have to give a big sacrifice.");
             printf("\n Just think about the things the way you did before.It is really all up to you.\n");
          }
          else if (((date>=23) &&(date<31) && (ch==9)) || ((date<=23 ) && (date>0) && (ch==10 )))
          {
             libra();
             printf("\n\n\t\tYOU ARE A LIBRA ");
             printf("\n You need to reconsider your option and take someone else feling into consideration.");
             printf("\n Work could be challenge.You are placed in a comfortable situation.You msy face delays and hurdles.\n");
          }
          else if (((date>=24)  &&(date<32)&& (ch==10)) || ((date<=21 ) && (date>0) && (ch==11 )))
          {
             scorpio();
             printf("\n\n\t\tYOU ARE A SCORPIO ");
             printf("\n Establishing a new routine will be uncomfortable at first,but you will soon come to enjoy it.");
             printf("\n This is good time to gain emotional support.Take a seat back and let others do thinking.");
             printf("\n Financial investment in real estate is very much possile.\n");
          }
          else if (((date>=22)  &&(date<31)&& (ch==11)) || ((date<=21 ) && (date>0) && (ch==12 )))
          {
             sagittarius();
             printf("\n\n\t\tYOU ARE A SAGITTARIUS ");
             printf("\n Are you refusing assistance from the very person who can make things better?");
             printf("\n Stop trying to pretend everything is fine when you are really in trouble.");
             printf("\n While its true that people admire your natural optimism,they also know you are human and get depressed.\n");
          }
          else if (((date>=22)  &&(date<32)&& (ch==12)) || ((date<=21 ) && (date>0) && (ch==1 )))
          {
             capricorn();
             printf("\n\n\t\tYOU ARE A CAPRICORN ");
             printf("\n You may have to change your philosophy about life.The focus today is on love and children.");
             printf("\n Take adavantage of today to make some new choices based on this new vision of life.");
             printf("\n Take a deep breath and keep your cool.Dont be afraid to express love you feel it.\n");
          }
          else if (((date>=22) &&(date<32) && (ch==1)) || ((date<=18 ) && (date>0) && (ch==2 )))
          {
             aquarius();
             printf("\n\n\t\tYOU ARE A AQUARIUS ");
             printf("\n Things that used to be important dont carry the same weight anymore.");
             printf("\n Find way to relieve extreme sensitivity.Your management abilities are in high focus.");
             printf("\n Frustration and dis-illusionment can easily lead to great sadness or depression.\n");
          }
          else if (((date>=19) &&(date<30) && (ch==2)) || ((date<=20 ) && (date>0) && (ch==3 )))
          {
             pisces();
             printf("\n\n\t\tYOU ARE A PISCES ");
             printf("\n Fulfill all your obligations as promised.Dont rebel against your responsibilities.");
             printf("\n It may affect your natural life.You have a sense of what others want and can act on needsnas required.");
             printf("\n Emotionally you seem to be on a path that inextricably leads to solitude and suffering.\n");
          }
          else
          {
              printf("\n\t\tINVALID DATE AND MONTH\n\t\tPRESS ENTER TO TRY AGAIN");
              getchar();
              getchar();
              system("cls");
              goto s;
          }
}


int hash(int key)
{
     int i=0 ;
     i = key%12;
     printf("\n Lucky number :%d",i);
     return i;
}


void insertlp(int hashtable[],int key)
{
      int i=0;

      i=hash(key);
      while(hashtable[i]!=-1)
          {

               i = rehashl(i);

        }	
        hashtable[i]=key;    
}


int rehashl(int key)
{
       int i ;
       i = (key+1)%12;
       printf("\n Lucky number :%d",i);
       return i;
}
