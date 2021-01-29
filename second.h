//
// Created by TIM on 2021/1/28 0028.
//

#ifndef UNTITLED_SECOND_H
#define UNTITLED_SECOND_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <string>
#include <cstring>
#include <stack>



QT_BEGIN_NAMESPACE
namespace Ui { class second; }
QT_END_NAMESPACE

class second : public QWidget {
Q_OBJECT

public:
    QString h="";
    explicit second(QWidget *parent = nullptr);

    ~second() override;

private:
    Ui::second *ui;
    QLabel *text_content, *answer, *question;
    QPushButton *cal,*one,*two,*three,*four,*five,*six,*seven,*eight,*nine,*zero,*clear,*plus,*minus,*cheng,*chu;


private slots:
    void CAL();
    void One()
    {
        h+='1';
        question->setText(h);
    };
    void Two()
    {
        h+='2';
        question->setText(h);
    };
    void Three()
    {
        h+='3';
        question->setText(h);
    };
    void Four()
    {
        h+='4';
        question->setText(h);
    };
    void Five()
    {
        h+='5';
        question->setText(h);
    };
    void Six()
    {
        h+='6';
        question->setText(h);
    };
    void Seven()
    {
        h+='7';
        question->setText(h);
    };
    void Eight()
    {
        h+='8';
        question->setText(h);
    };
    void Nine()
    {
        h+='9';
        question->setText(h);
    };
    void Zero()
    {
        h+='0';
        question->setText(h);
    };
    void Plus()
    {
        h+='+';
        question->setText(h);
    };
    void Minus()
    {
        h+='-';
        question->setText(h);
    };
    void Cheng()
    {
        h+='*';
        question->setText(h);
    };
    void Chu()
    {
        h+='/';
        question->setText(h);
    };
    void Clear()
    {
        h="";
        question->setText(h);
    };

};

#endif //UNTITLED_SECOND_H
