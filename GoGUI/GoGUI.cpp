#include "GoGUI.hpp"

GoGUI::GoGUI(QWidget *parent)
	: QMainWindow(parent), ui(new Ui::GoGUIClass)
{
	// Sets up our UI object
	ui->setupUi(this);

	// New GoInterface object
	GI = new GoInterface();
}

GoGUI::~GoGUI()
{	
	delete ui;
	delete GI;
}
