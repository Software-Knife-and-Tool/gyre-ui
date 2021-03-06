/********
 **
 **  SPDX-License-Identifier: BSD-3-Clause
 **
 **  Copyright (c) 2017-2021 James M. Putnam <putnamjm.design@gmail.com>
 **
 **/

/********
 **
 **  ConsoleFrame.cpp: ConsoleFrame implementation
 **
 **/
#include <QString>
#include <QtWidgets>

#include "ConsoleFrame.h"

namespace gyreui {

void ConsoleFrame::setContextStatus(QString str) { mw->setContextStatus(str); }

void ConsoleFrame::showEvent(QShowEvent* event) {
  QWidget::showEvent(event);
  mw->setContextStatus(name);
}

ConsoleFrame::ConsoleFrame(QString name, MainWindow* mw) : mw(mw), name(name) {
  ttyWidget = new TtyWidget(this);

  QSizePolicy tty_policy = ttyWidget->sizePolicy();
  tty_policy.setVerticalStretch(1);
  ttyWidget->setSizePolicy(tty_policy);

  layout = new QVBoxLayout;
  layout->setContentsMargins(5, 5, 5, 5);
  layout->addWidget(ttyWidget);

  setLayout(layout);
}

} /* namespace gyreui */
