#include "clickablelabel.h"

ClickableLabel::ClickableLabel(QWidget* parent, Qt::WindowFlags f)
    : QLabel(parent)
{

}

ClickableLabel::~ClickableLabel() {}

bool ClickableLabel::event(QEvent *e)
{
    if (e->type() == QEvent::Enter)
     {
         this->setStyleSheet("QLabel { color: white; text-decoration: underline; }");
     }

     if (e->type()==QEvent::Leave)
     {
        this->setStyleSheet("QLabel { color: white; text-decoration: none;}");
     }

     return QWidget::event(e);
}

void ClickableLabel::mousePressEvent(QMouseEvent* event) {
    emit clicked();
}
