Stuct and typedef                                                                                                                                 
struct :
struct Point {       stuct has 2 ints
int x, y;
};                       
in main wcant do    
struct Point p1 = { 1, 2 };   
or 
struct Point p1;                     if p1 is a pointer : struct Point p1;
p1.x = 1;                                                            p1->x = 1;
p1.y = 2;                                                              p1->y = 2;

typedef :
typedef long long ll;                        instead of writing longl ong we can write ll
ll var = 20;                                           and then we write var after ll

typedef struct students {    
char name[50];
char branch[50];                       
} stu;                           instead of caling struct students and name it student_1 with typedef we make is short with stu
