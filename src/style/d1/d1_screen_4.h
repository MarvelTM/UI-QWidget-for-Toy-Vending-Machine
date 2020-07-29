#ifndef D1_SCREEN_4_H
#define D1_SCREEN_4_H

#include <QWidget>

namespace Ui {
class d1_Screen_4;
}

class d1_Screen_4 : public QWidget
{
	Q_OBJECT

public:
	explicit d1_Screen_4(QWidget *parent = nullptr);
	~d1_Screen_4();

private:
	Ui::d1_Screen_4 *ui;

signals:
	void pressedButtonClose();
	void pressedButtonBack();

	// QWidget interface
protected:
	void resizeEvent(QResizeEvent *event);
};

#endif // D1_SCREEN_4_H
