#include<stdio.h>
#include<string.h>




//输出结构数据变量
void z1()
{
	struct p
	{
		char name[20];
		int suishu;
		int sa;
	};
	p a[5];
	for(int i=0;i<3;i++)
	{
	scanf("%s",a[i].name);
	scanf("%d",&a[i].suishu);//&
	scanf("%d",&a[i].sa);//&
	}
	for( i=0;i<3;i++)
	{
	printf("%s",a[i].name);
	printf("%d",a[i].suishu);
	printf("%d",a[i].sa);
	}



}



//成绩输出
void z2()
{
	struct s
	{
		char no[20];
		char name[20];
		int a[3];
		double ave;
	};
	int max;
	double sum=0; 
	s b[2];
	for(int i=0;i<5;i++)
	{
	scanf("%s",b[i].no);
	scanf("%s",b[i].name);
		for(int j=0;j<3;j++)
		{
		scanf("%d",&b[i].a[j]);
		sum+=b[i].a[j];
		}
	b[i].ave=sum/3;
	printf("%lf",b[i].ave);
	putchar('\n');
	sum=0;
	}
	max=b[0].a[0];
	int k=0;
	for(i=0;i<5;i++)
	for(int j=0;j<3;j++)
	{
		if(b[i].a[j]>max)
		{
			max=b[i].a[j];
			k=i;
		}
	}printf("最高分学生的信息\n");
	printf("%s ",b[k].no);
printf("%s ",b[k].name);

for(int j=0;j<3;j++)
	{
	printf("%d ",b[k].a[j]);

	}
printf("%lf",b[k].ave);


}

//输出正确类型
struct v
	{
		int q[9];
		char w[20];
		int e;
	
	};
void z3_1(v*put)
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<9;j++)
		{
			printf("%d",(put+i)->q[j]);
			
		}
	putchar(' ');

	printf("%s",(put+i)->w);
	putchar(' ');
	printf("%d",(put+i)->e);
	putchar('\n');
	}
}

void z3()
{
	

	int i=0,j;
	v d[5];
	for(i;i<5;i++)
	{
		for(j=0;j<9;j++)
		{
		scanf("%d",&d[i].q[j]);getchar();
		}
		
		gets(d[i].w);
		scanf("%d",&d[i].e);getchar();
	}
	z3_1(d);
}

//数据保存到结构体中
void z4()
{
	struct a
	{
		char year[20];
		char month[20];
		char  day[20];
	};
	a s;
	printf("输入年月日：\n");
	gets(s.year);

	gets(s.month);

	gets(s.day);
	putchar('\n');
	printf("%s ",s.year);
	printf("%s ",s.month);
	printf("%s",s.day);
}

//计算股票收益
 void z5()
 {
	struct a
	{
		char q[20];
		double w;
		double f;
		double k;
	};
	int i;
	a g[2];
	for(i=0;i<2;i++)
	{
		gets(g[i].q);
		scanf("%lf",&g[i].w);
		
		scanf("%lf",&g[i].f);
		getchar();
		printf("%s ",g[i].q);
		printf("%lf",g[i].w*g[i].f);
		printf("\n\n");
	}

 }

void zz1()
{
	struct q
	{
		char no[20];
		double gr;
		double gr2;
		double ave;
	};
	struct birth
	{
		int year;
		int month;
		int day;
	};
	struct w
	{
		char name[20];
		birth a;
		double gr;
		double gr2;
		double ave;
	};
	struct k
	{
		char jie[20];
		char city[20];
		char country[20];
		char mail[20];
	};
	struct f
	{
		char name[20];
		k dre;
	};
	struct l
	{
		int name;
		char lk[20];
		int count;
		int num;
	};
	struct ok
	{
		char name[20];
		int p;
		birth lp;
	
	
	};

	q p;
	gets(p.no);
	scanf("%lf",&p.gr);
	scanf("%lf",&p.gr2);
	scanf("%lf",&p.ave);
	puts(p.no);
	printf("%.5lf ",p.gr);
	printf("%.5lf ",p.gr2);	
	printf("%.5lf",p.ave);
	putchar('\n');
	putchar('\n');


	w i;
	gets(i.name);
	scanf("%d",&i.a.year);
	scanf("%d",&i.a.month);
	scanf("%d",&i.a.day);
	scanf("%lf",&i.gr);
	scanf("%lf",&i.gr2);
	scanf("%lf",&i.ave);
	puts(i.name);
	printf("%d ",i.a.year);
	printf("%d ",i.a.month);
	printf("%d   ",i.a.day);
	printf("%.5lf ",i.gr);
	printf("%.5lf ",i.gr2);	
	printf("%.5lf",i.ave);
	putchar('\n');
	putchar('\n');
	
	
	f j;
	gets(j.name);
	gets(j.dre.jie);
	gets(j.dre.city);
	gets(j.dre.country);
	gets(j.dre.mail);
	puts(j.name);
	puts(j.dre.jie);
	puts(j.dre.city);
	puts(j.dre.country);
	puts(j.dre.mail);
	putchar('\n');
	putchar('\n');

	ok kop;
	gets(kop.name);
	scanf("%d",&kop.p);	
	scanf("%d",&kop.lp.year);
	scanf("%d",&kop.lp.month);
	scanf("%d",&kop.lp.day);	
	puts(kop.name);	
	printf("%d   ",kop.p);	
	printf("%d ",kop.lp.year);
	printf("%d ",kop.lp.month);
	printf("%d",kop.lp.day);
	putchar('\n');
	putchar('\n');	

	l ju;
	scanf("%d",&ju.name);
	getchar();
	gets(ju.lk);
	scanf("%d",&ju.count);	
	scanf("%d",&ju.num);
	printf("\n%d\n",ju.name);
	puts(ju.lk);
	printf("%d  ",ju.count);	
	printf("%d",ju.num);	
	



}


void zz2()
{
	struct a
	{
		int hour;
		int minute;
	
	};
	a k;
	scanf("%d",&k.hour);
	scanf("%d",&k.minute);
	if(k.minute<=58)
	{
		k.minute+=1;
	}
	if (	k.minute==59)
	{
		k.minute=0;
		k.hour+=1;		
	}
	if (	k.minute==60)
	{
		k.minute=1;
		k.hour+=1;		
	}
	putchar('\n');		
	if(k.hour<=10)
	{
	printf("0");
	}
	printf("%d  ",k.hour );
	if(k.minute<=10)
	{
	printf("0");
	}
	printf("%d",k.minute );	


}

void zz3()
{
	struct a
	{
		char name[20];
		char num[20];
		int l;
		int jk;
	
	
	};
	a h[2];

	int i;
	for(i=0;i<2;i++)
	{
		gets(h[i].name);
		gets(h[i].num);
		scanf("%d",&h[i].l);
		getchar();
		scanf("%d",&h[i].jk);		
			getchar();
	}
	for(i=0;i<2;i++)
	{
		puts(h[i].name);
		puts(h[i].num);
		printf("%d  ",h[i].l);
		printf("%d",h[i].jk);	
		putchar('\n');			
			
	}

}

//月份信息的输出
void zz4()
{
	struct MonthDays
	{
		char name[11];
		int days;
	};
	MonthDays conver[12];
	strcpy(conver[0].name,"January");//定义的时候才能初始化
	conver[0].days=31;
	strcpy(conver[1].name,"February");
	conver[1].days=28;
	strcpy(conver[2].name,"March");
	conver[2].days=31;
	strcpy(conver[3].name,"April");
	conver[3].days=30;
	strcpy(conver[4].name,"May");
	conver[4].days=31;
	strcpy(conver[5].name,"Jule");
	conver[5].days=30;
	strcpy(conver[6].name,"July");
	conver[6].days=31;
	strcpy(conver[7].name,"August");
	conver[7].days=31;
	strcpy(conver[8].name,"September");
	conver[8].days=30;
	strcpy(conver[9].name,"October");
	conver[9].days=31;
	strcpy(conver[10].name,"November");
	conver[10].days=30;
	strcpy(conver[11].name,"December");
	conver[11].days=31;
	int n;
	scanf("%d",&n);
	printf("%s has %d days",conver[n-1].name,conver[n-1].days);
}



//员工信息
void zz5()
{
	struct a
	{
		int q;
		char w[20];
		float e;
		float r;
	
	};
	a s[6];
	for(int i=0;i<6;i++)
	{
		scanf("%d",&s[i].q);
		getchar();
		gets(s[i].w);
		scanf("%f",&s[i].e);
		scanf("%f",&s[i].r);
			putchar('\n');
	}
	putchar('\n');
	putchar('\n');
	for( i=0;i<6;i++)
	{
	printf("%d ",s[i].q);		
	printf("%s ",s[i].w);	
	printf("%f ",(s[i].e)*(s[i].q));
	putchar('\n');
	}

}


//汽车信息
void zz6()
{

	struct a
	{
		int q;
		int w;
		int e;
	};
	a s[5];
	for(int i=0;i<5;i++)
	{
		scanf("%d",&s[i].q);
	
		scanf("%d",&s[i].w);
		scanf("%d",&s[i].e);
			putchar('\n');
	}
	putchar('\n');
	putchar('\n');
	for( i=0;i<5;i++)
	{
	printf("%d   ",s[i].q);		
	
	printf("%lf",double((s[i].e))/(s[i].w)*100);
	putchar('\n');
	}

}

//比较输出员工工资
void zz7()
{

	struct a
	{
		int q;
		float w;

	};
	a s[5],p;
	printf("请输入五个职工的职工号和工资：\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&s[i].q);
	
		
		scanf("%f",&s[i].w);
			putchar('\n');
	}
	
	for( i=0;i<4;i++)
		for(int j=0;j<4-i;j++)
	{
			if(s[j].w>s[j+1].w)
			{
				p.q=s[j].q;
				s[j].q=s[j+1].q;
				s[j+1].q=p.q;
			
				p.w=s[j].w;
				s[j].w=s[j+1].w;
				s[j+1].w=p.w;
						
			}
	}
	putchar('\n');
	putchar('\n');
		for( i=0;i<5;i++)
	{
	printf("%d   ",s[i].q);		
	
	printf("%f",s[i].w);
	putchar('\n');
	}
}

struct	Date
{
	int year;
	int month;
	int day;
};



int Days(struct Date date)
{

	int i,j,sum=0,m[11]={31,28,31,30,31,30,31,31,30,31,30};
	if (date.year>=1900)
	{
		for(i=1900;i<date.year;i++)
		{
			if((i%4==0&&i%100!=0)||(i%400==0))
				sum+=366;
			else
				sum+=365;
		
		}
		for(j=0;j<date.month-1;j++)
		{
			sum+=m[j];
		
		
		}
		if((date.year%4==0&&date.year%100!=0)||(date.year%400==0))
			sum+=1;

		sum+=date.day;
		return sum;
	}
	else
		return 0;


}
//日期距离1900年1月1日天数
void zz8()
{
	
	struct Date  s;
	int g;
	scanf("%d",&s.year);
	scanf("%d",&s.month);
	scanf("%d",&s.day);
	g=Days(s);
		if(g)
	printf("这个日期距离1900年1月1日有%d天",g);



}


int difdays(struct Date date1,struct Date date2)    //调用了前面的int Days(struct Date date)；
{

	int a,b;
	a=Days(date1);
	b=Days(date2);
	putchar('\n');
	if(a>b)
		return a-b;
	else if(a<b)
		return b-a;
	else
		return 0;

	

}

//计算两个日期相差天数
void zz9()
{
	int h;
	struct Date date1;
	struct Date date2;
	printf("请输入两个大于1900年1月1日的日期:\n");
	scanf("%d",&date1.year);
	scanf("%d",&date1.month);
	scanf("%d",&date1.day);
	
	scanf("%d",&date2.year);
	scanf("%d",&date2.month);
	scanf("%d",&date2.day);
	h=difdays(date1,date2);
	if(h!=0)
	printf("两个日期相差%d天",h+1);
	else 
		printf("两个日期相差%d天",h);


}




struct Date larger(struct Date d1,struct Date d2)
{
	Date f;
	f.year=0;	
		
	 if(d1.year>d2.year)
		 return d1;
	 if(d1.year<d2.year)
		 return d2;
		
	 if(d1.month>d2.month)
		 return d1;
	 if(d1.month<d2.month)
		 return d2;

	 if(d1.day>d2.day)
		 return d1;
	 if(d1.day<d2.day)
		 return d2;

	
	 return f;
		
}

//比较日期
void zz10()
{
	struct Date d1;
	struct Date d2,p;
	scanf("%d",&d1.year);
	scanf("%d",&d1.month);
	scanf("%d",&d1.day);
	
	scanf("%d",&d2.year);
	scanf("%d",&d2.month);
	scanf("%d",&d2.day);
	putchar('\n');
	putchar('\n');
	p=larger(d1,d2);
	if(p.year)
	printf("%d  %d  %d  ",p.year,p.month,p.day);	

}


void main()
{
	int i;
	printf("如果是进阶题则输入进阶题号加5的数字，具体输入要求看子函数：\n");
	do{
	scanf("%d",&i);
//	getchar();连续两个串加中间
	
	switch(i)
	{
	case 1: z1();printf("\n\n");break;
	case 2: z2();printf("\n\n");break;
	case 3: z3();printf("\n\n");break;
	case 4: z4();printf("\n\n");break;
	case 5: z5();printf("\n\n");break;
	case 6: zz1();printf("\n");break;
	case 7: zz2();printf("\n\n");break;
	case 8: zz3();printf("\n\n");break;
	case 9: zz4();printf("\n\n");break;
	case 10: zz5();printf("\n\n");break;
	case 11: zz6();printf("\n\n");break;
	case 12: zz7();printf("\n\n");break;
	case 13: zz8();printf("\n\n");break;
	case 14: zz9();printf("\n\n");break;
	case 15: zz10();printf("\n\n");break;

		}

	}while(i!=0);
}















