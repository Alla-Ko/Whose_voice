
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QAudioFormat>
//#include <QMediaContent>
//#include <QMediaPlaylist>
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QDir>
#include <QUrl>
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool isright(int a);

private slots:
    void on_pushButton_camel_clicked();

    void on_pushButton_parrot_clicked();

    void on_pushButton_antelope_clicked();

    void on_pushButton_bee_clicked();

    void on_pushButton_whale_clicked();

    void on_pushButton_cat_clicked();

    void on_pushButton_cow_clicked();

    void on_pushButton_crow_clicked();

    void on_pushButton_duck_clicked();

    void on_pushButton_frog_clicked();

    void on_pushButton_giraffe_clicked();

    void on_pushButton_guinea_pig_clicked();

    void on_pushButton_hedgehog_clicked();

    void on_pushButton_hippo_clicked();

    void on_pushButton_horse_clicked();

    void on_pushButton_lion_clicked();

    void on_pushButton_panda_clicked();

    void on_pushButton_penguin_clicked();

    void on_pushButton_rattlesnake_clicked();

    void on_pushButton_rhinoceros_clicked();

    void on_pushButton_swan_clicked();

    void on_pushButton_tiger_clicked();

    void on_pushButton_wolf_clicked();

    void on_pushButton_zebra_clicked();

    void on_pushButton_game_clicked();

    void on_pushButton_game_end_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer* player;
    QAudioOutput *audioOutput;
    QList<QUrl> sounds {
        QUrl("qrc:/new/prefix1/Files/camel.mp3"),
        QUrl("qrc:/new/prefix1/Files/african-grey-parrot.mp3"),
        QUrl("qrc:/new/prefix1/Files/antelope.mp3"),
        QUrl("qrc:/new/prefix1/Files/bee.mp3"),
        QUrl("qrc:/new/prefix1/Files/bowhead-whale.mp3"),
        QUrl("qrc:/new/prefix1/Files/cat.mp3"),
        QUrl("qrc:/new/prefix1/Files/cow.mp3"),
        QUrl("qrc:/new/prefix1/Files/crow.mp3"),
        QUrl("qrc:/new/prefix1/Files/duck.mp3"),
        QUrl("qrc:/new/prefix1/Files/frog.mp3"),
        QUrl("qrc:/new/prefix1/Files/giraffe.mp3"),
        QUrl("qrc:/new/prefix1/Files/guinea-pig.mp3"),
        QUrl("qrc:/new/prefix1/Files/hedgehog.mp3"),
        QUrl("qrc:/new/prefix1/Files/hippopotamus.mp3"),
        QUrl("qrc:/new/prefix1/Files/horse.mp3"),
        QUrl("qrc:/new/prefix1/Files/lion.mp3"),
        QUrl("qrc:/new/prefix1/Files/panda.mp3"),
        QUrl("qrc:/new/prefix1/Files/penguin.mp3"),
        QUrl("qrc:/new/prefix1/Files/rattlesnake.mp3"),
        QUrl("qrc:/new/prefix1/Files/rhinoceros.mp3"),
        QUrl("qrc:/new/prefix1/Files/swan.mp3"),
        QUrl("qrc:/new/prefix1/Files/tiger.mp3"),
        QUrl("qrc:/new/prefix1/Files/wolf.mp3"),
        QUrl("qrc:/new/prefix1/Files/zebra.mp3")
    };
    int num=0;
    bool game=false;
};

#endif // MAINWINDOW_H
