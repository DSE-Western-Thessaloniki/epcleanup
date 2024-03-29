#ifndef CLEANER_H
#define CLEANER_H

#include <QDir>
#include <QObject>

class Cleaner : public QObject {
  Q_OBJECT
public:
  explicit Cleaner(QString path, QObject *parent = 0);

private:
  QDir path;

private:
  QString findFile(QDir, QString);

signals:
  void deleted(int);

public slots:
  void cleanFile(int, QString, uint);
};

#endif // CLEANER_H
