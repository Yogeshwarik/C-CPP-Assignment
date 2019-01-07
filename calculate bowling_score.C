#define maxscrs 100
#define maxs 300
#define mins 0
#define minls 100
void main ( )
{
	int s[maxs];
	int n,i,score;
	int raw_s=0;
	int league_s=0;
	int s_total=0;
	float raw_avg;
	float league_avg;
	int high=0;
	int low=maxs;
	clrscr();
	printf("How many scores will you be entering?");
	scanf("%d", &n);
	printf("You entered %d scores\n",n);
	if (n>maxs)
	{
		printf("cannot that many,%d is max\n",maxs);
		exit(-1);
	}
	for(i=1;i<=n;i++)
	{
		printf("Enter score #%i: ",i);
		scanf(" %d",&score);
		printf("You entered %i\n",score);
		if((score<mins) || (score>maxs))
			printf("Impossible score \n");
		else
		{
			s[raw_s]=score;
			s_total=s_total+score;
			raw_s++;
			if(score>high)
				high=score;
			if(score<low)
				low=score;
		}
	}
	if(raw_s>0)
	{
		raw_avg=s_total/raw_s;
		printf("raw average = %.2f\n",raw_avg);
		printf("high score was %d\n",high);
		printf("low score was %d\n",low);
	}
	else
		printf("No valid scores entered\n");
		s_total=0;
		league_s=0;
		printf("LIST OF LEAGUE SCORES USED IN AVERAGE\n");
		for(i=0;i<raw_s;i++)
		{
			if(s[i]>minls)
			{
				printf("\t%d\n",s[i]);
				league_s++;
				s_total+=s[i];
				if(league_s>0)
				{
					league_avg=s_total/league_s;
					printf("league average= %.2f\n",league_avg);
				}
				else
				{
				       league_avg=100;
				}
			}
		}
		getch();

}