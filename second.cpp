//
// Created by TIM on 2021/1/28 0028.
//

// You may need to build the project (run Qt uic code generator) to get "ui_second.h" resolved

#include "second.h"
#include "ui_second.h"
#include <cmath>
#include <QGridLayout>
#include <queue>
#include <stack>

struct node
{
    double data;
    node *next;
public:
    node();
};

node::node() {}

class stack
{
private:
    node* top;
public:
    stack() { top = NULL; }
    ~stack();
    void push(double e);
    double pop();
    double getTop();
    bool isEmpty() { if (top == NULL) return true; else return false; }
};

double stack::getTop()
{
    if (top != NULL)
        return top->data;
}

stack::~stack()
{
    node* p;
    while (top)
    {
        p = top->next;
        delete top;
        top = p;
    }
}

void stack::push(double e)
{
    node* p = new node;
    if (!p)
    {
        //cout << "内存分配失败" << endl;
        return;
    }
    p->data = e;
    p->next = top;
    top = p;
}

double stack::pop()
{
    if (top == NULL)
    {
        //cout << "溢出" << endl;
    }
    double temp = top->data;
    node* p = top;
    top = top->next;
    delete p;
    return temp;
}

struct Node
{
    double data;
    Node *next;
};
class sqqueue
{
private:
    Node *front;
    Node *rear;
public:
    sqqueue();
    ~sqqueue();
    void enqueue(double e);
    double dequeue();
    bool isEmpty();
    double getFront();
};

double sqqueue::getFront()
{
    return front->next->data;
}

sqqueue::sqqueue()
{
    front = new Node;
    front->next = NULL;
    rear = front;
}

sqqueue::~sqqueue()
{
    Node *p=NULL;
    while (front != NULL)
    {
        p = front;
        front = front->next;
        delete p;
    }
}

void sqqueue::enqueue(double e)
{
    Node *s = new Node;
    s->data = e;
    s->next = rear->next;
    rear->next = s;
    rear = s;
    if (front->next == NULL)
        front->next = s;
}

double sqqueue::dequeue()
{
    double e;
    Node *p = NULL;
    if (rear == front)
    {
        //cout << "下溢" << endl;
    }
    p = front->next;
    e = p->data;
    front->next = p->next;
    if (p->next == NULL)
        rear = front;
    delete p;
    return e;
}

sqqueue output;
stack s;
stack a;

void change(std::string str)
{
    double num;
    double temp;
    for (int i = 0; i < str.length();)
    {
        if (str[i] >= '0'&&str[i] <= '9')
        {
            temp = str[i++] - '0';
            while (i < str.length() && str[i] >= '0'&&str[i] <= '9')
            {
                temp = temp * 10 + (str[i] - '0');
                i++;
            }
            output.enqueue(temp);
        }
        else
        {
            if (((str[i] == '+' || str[i] == '-')&&(s.getTop() == -3|| s.getTop() == -4))|| ((str[i] == '+' || str[i] == '-') && (s.getTop() == -1 || s.getTop() == -2))|| ((str[i] == '*' || str[i] == '/') && (s.getTop() == -3 || s.getTop() == -4)))
            {
                while (!s.isEmpty())
                {
                    output.enqueue(s.pop());
                }
            }
            switch (str[i])
            {
            case '+':s.push(-1); break;
            case '-':s.push(-2); break;
            case '*':s.push(-3); break;
            case '/':s.push(-4); break;
            default:break;
            }
            i++;
        }
    }
    while (!s.isEmpty())
    {
        output.enqueue(s.pop());
    }
}

void second::CAL()
{
    QString valueStr;
    QString tempStr=question->text();
    std::string str=tempStr.toStdString();
    change(str);
    double temp;
    double r, l;
    while (!output.isEmpty())
    {
        if (output.getFront() >= 0)
        {
            a.push(output.dequeue());
        }
        else
        {
            double x = output.dequeue();
            if (x == -1)
            {
                r = a.pop();
                l = a.pop();
                temp = l + r;
                a.push(temp);
            }
            else if (x == -2)
            {
                r = a.pop();
                l = a.pop();
                temp = l - r;
                a.push(temp);
            }
            else if (x == -3)
            {
                r = a.pop();
                l = a.pop();
                temp = l * r;
                a.push(temp);
            }
            else if (x == -4)
            {
                r = a.pop();
                l = a.pop();
                temp = l / r;
                a.push(temp);
            }
        }
    }
    double ans=a.pop();
    answer->setText(valueStr.setNum(ans));
}

bool sqqueue::isEmpty()
{
    if (rear == front) return true;
    else return false;
}

second::second(QWidget *parent) :
        QWidget(parent), ui(new Ui::second) {
    ui->setupUi(this);
    h="";
    text_content = new QLabel(this);
    text_content->setText(tr("请输入式子："));
    question = new QLabel(this);
    answer = new QLabel(this);
    cal = new QPushButton(this);
    cal->setText(tr("="));
    one = new QPushButton(this);
    one->setText(tr("1"));
    two = new QPushButton(this);
    two->setText(tr("2"));
    three = new QPushButton(this);
    three->setText(tr("3"));
    four = new QPushButton(this);
    four->setText(tr("4"));
    five = new QPushButton(this);
    five->setText(tr("5"));
    six = new QPushButton(this);
    six->setText(tr("6"));
    seven = new QPushButton(this);
    seven->setText(tr("7"));
    eight = new QPushButton(this);
    eight->setText(tr("8"));
    nine = new QPushButton(this);
    nine->setText(tr("9"));
    zero = new QPushButton(this);
    zero->setText(tr("0"));
    plus = new QPushButton(this);
    plus->setText(tr("+"));
    minus = new QPushButton(this);
    minus->setText(tr("-"));
    cheng = new QPushButton(this);
    cheng->setText(tr("*"));
    chu = new QPushButton(this);
    chu->setText(tr("/"));
    clear = new QPushButton(this);
    clear->setText(tr("C"));

    QGridLayout* mainLayout = new QGridLayout(this);
    mainLayout->addWidget(text_content, 0, 0);
    mainLayout->addWidget(question, 0, 1);
    mainLayout->addWidget(answer, 0, 2);

    mainLayout->addWidget(one, 1, 0);
    mainLayout->addWidget(two, 1, 1);
    mainLayout->addWidget(three, 1, 2);
    mainLayout->addWidget(four, 1, 3);

    mainLayout->addWidget(five, 2, 0);
    mainLayout->addWidget(six, 2, 1);
    mainLayout->addWidget(seven, 2, 2);
    mainLayout->addWidget(eight, 2, 3);

    mainLayout->addWidget(nine, 3, 0);
    mainLayout->addWidget(zero, 3, 1);
    mainLayout->addWidget(plus, 3, 2);
    mainLayout->addWidget(minus, 3, 3);

    mainLayout->addWidget(cheng, 4, 0);
    mainLayout->addWidget(chu, 4, 1);
    mainLayout->addWidget(cal, 4, 2);
    mainLayout->addWidget(clear, 4, 3);


    connect(cal,SIGNAL(clicked()),this,SLOT(CAL()));
    connect(one,SIGNAL(clicked()),this,SLOT(One()));
    connect(two,SIGNAL(clicked()),this,SLOT(Two()));
    connect(three,SIGNAL(clicked()),this,SLOT(Three()));
    connect(four,SIGNAL(clicked()),this,SLOT(Four()));
    connect(five,SIGNAL(clicked()),this,SLOT(Five()));
    connect(six,SIGNAL(clicked()),this,SLOT(Six()));
    connect(seven,SIGNAL(clicked()),this,SLOT(Seven()));
    connect(eight,SIGNAL(clicked()),this,SLOT(Eight()));
    connect(nine,SIGNAL(clicked()),this,SLOT(Nine()));
    connect(zero,SIGNAL(clicked()),this,SLOT(Zero()));
    connect(chu,SIGNAL(clicked()),this,SLOT(Chu()));
    connect(cheng,SIGNAL(clicked()),this,SLOT(Cheng()));
    connect(plus,SIGNAL(clicked()),this,SLOT(Plus()));
    connect(minus,SIGNAL(clicked()),this,SLOT(Minus()));
    connect(clear,SIGNAL(clicked()),this,SLOT(Clear()));
}

second::~second() {
    delete ui;
}

