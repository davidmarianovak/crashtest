#ifndef GOGUI_H
#define GOGUI_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableWidget>

#include "ui_GoGUI.h"
#include "GoInterface.hpp"

class GoGUI : public QMainWindow
{
	Q_OBJECT

public:	
	GoGUI(QWidget *parent = 0);
	~GoGUI();

private:
	// UI Object
	Ui::GoGUIClass *ui;

	// GoInterface Object
	GoInterface *GI;	


};

#endif // GOGUI_H