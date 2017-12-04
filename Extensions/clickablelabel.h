#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H

#include <QLabel>
#include <QWidget>
#include <QEvent>
#include <Qt>

class ClickableLabel : public QLabel {
    Q_OBJECT

public:
    explicit ClickableLabel(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    ~ClickableLabel();

    bool event(QEvent *e);

signals:
    void clicked();
    void hover();

protected:
    void mousePressEvent(QMouseEvent* event);


};

#endif // CLICKABLELABEL_H
