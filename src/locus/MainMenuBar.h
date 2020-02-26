#ifndef _LOCUS_SRC_LOCUS_MAINMENUBAR_H_
#define _LOCUS_SRC_LOCUS_MAINMENUBAR_H_

#include <QMainWindow>
#include <QMenu>

#include "MainWindow.h"

QT_BEGIN_NAMESPACE
class QAction;
class QActionGroup;
class QLabel;
class QMenu;
QT_END_NAMESPACE

namespace locus {

class MainMenuBar : public QMenu {

  Q_OBJECT

 public:
  MainMenuBar(MainWindow*);

  QAction *cutAct;
  QAction *copyAct;
  QAction *pasteAct;

 private slots:
  void newFile();
  void open();
  void save();
  void print();
  void undo();
  void redo();
  void cut();
  void copy();
  void paste();
  void bold();
  void italic();
  void leftAlign();
  void rightAlign();
  void justify();
  void center();
  void setLineSpacing();
  void setParagraphSpacing();
  void about();
  void aboutQt();

 private:
  void createActions();
  void createMenus();
  void createStatusBar();

  QMenu *fileMenu;
  QMenu *editMenu;
  QMenu *formatMenu;
  QMenu *helpMenu;

  QActionGroup *alignmentGroup;
  QAction *newAct;
  QAction *openAct;
  QAction *saveAct;
  QAction *printAct;
  QAction *exitAct;
  QAction *undoAct;
  QAction *redoAct;
  QAction *boldAct;
  QAction *italicAct;
  QAction *leftAlignAct;
  QAction *rightAlignAct;
  QAction *justifyAct;
  QAction *centerAct;
  QAction *setLineSpacingAct;
  QAction *setParagraphSpacingAct;
  QAction *aboutAct;
  QAction *aboutQtAct;

 private:

  MainWindow* mw;
};

} /* locus namespace */

#endif  /* _LOCUS_SRC_LOCUS_MAINMENUBAR_H_ */
