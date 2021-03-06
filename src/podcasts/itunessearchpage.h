/* This file is part of Clementine.
   Copyright 2012, David Sansome <me@davidsansome.com>
   
   Clementine is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   Clementine is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with Clementine.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ITUNESSEARCHPAGE_H
#define ITUNESSEARCHPAGE_H

#include "addpodcastpage.h"

class Ui_ITunesSearchPage;

class QNetworkAccessManager;
class QNetworkReply;

class ITunesSearchPage : public AddPodcastPage {
  Q_OBJECT

public:
  ITunesSearchPage(Application* app, QWidget* parent);
  ~ITunesSearchPage();

  void Show();

  static const char* kUrlBase;

private slots:
  void SearchClicked();
  void SearchFinished(QNetworkReply* reply);

private:
  Ui_ITunesSearchPage* ui_;

  QNetworkAccessManager* network_;
};

#endif // ITUNESSEARCHPAGE_H
