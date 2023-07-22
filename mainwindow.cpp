
#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new QMediaPlayer();
    audioOutput = new QAudioOutput();
    player->setAudioOutput(audioOutput);
    audioOutput->setVolume(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_camel_clicked()
{

    player->setSource(QUrl("qrc:/new/prefix1/Files/camel.mp3"));
    player->play();
    if (game)
    {
        if(isright(0))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }

}


void MainWindow::on_pushButton_parrot_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/african-grey-parrot.mp3"));
    player->play();
    if (game)
    {
        if(isright(1))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }

}



void MainWindow::on_pushButton_antelope_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/antelope.mp3"));
    player->play();
    if (game)
    {
        if(isright(2))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_bee_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/bee.mp3"));
    player->play();
    if (game)
    {
        if(isright(3))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_whale_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/bowhead-whale.mp3"));
    player->play();
    if (game)
    {
        if(isright(4))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_cat_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/cat.mp3"));
    player->play();
    if (game)
    {
        if(isright(5))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_cow_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/cow.mp3"));
    player->play();
    if (game)
    {
        if(isright(6))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_crow_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/crow.mp3"));
    player->play();
    if (game)
    {
        if(isright(7))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_duck_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/duck.mp3"));
    player->play();
    if (game)
    {
        if(isright(8))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_frog_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/frog.mp3"));
    player->play();
    if (game)
    {
        if(isright(9))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_giraffe_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/giraffe.mp3"));
    player->play();
    if (game)
    {
        if(isright(10))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_guinea_pig_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/guinea-pig.mp3"));
    player->play();
    if (game)
    {
        if(isright(11))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }

    }
}


void MainWindow::on_pushButton_hedgehog_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/hedgehog.mp3"));
    player->play();
    if (game)
    {
        if(isright(12))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_hippo_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/hippopotamus.mp3"));
    player->play();
    if (game)
    {
        if(isright(13))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_horse_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/horse.mp3"));
    player->play();
    if (game)
    {
        if(isright(14))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_lion_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/lion.mp3"));
    player->play();
    if (game)
    {
        if(isright(15))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_panda_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/panda.mp3"));
    player->play();
    if (game)
    {
        if(isright(16))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_penguin_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/penguin.mp3"));
    player->play();
    if (game)
    {
        if(isright(17))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_rattlesnake_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/rattlesnake.mp3"));
    player->play();
    if (game)
    {
        if(isright(18))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_rhinoceros_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/rhinoceros.mp3"));
    player->play();
    if (game)
    {
        if(isright(19))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_swan_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/swan.mp3"));
    player->play();
    if (game)
    {
        if(isright(20))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_tiger_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/tiger.mp3"));
    player->play();
    if (game)
    {
        if(isright(21))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_wolf_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/wolf.mp3"));
    player->play();
    if (game)
    {
        if(isright(22))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_zebra_clicked()
{
    player->setSource(QUrl("qrc:/new/prefix1/Files/zebra.mp3"));
    player->play();
    if (game)
    {
        if(isright(23))
        {
            QMessageBox::information(this, tr("Result"), tr("You guessed it! Congratulations!"));
            game=false;
        }
        else
        {
            QMessageBox::critical(this, tr("Result"), tr("Error! Try again!"));
            player->setSource(sounds[num]);
            player->play();
        }
    }
}


void MainWindow::on_pushButton_game_clicked()
{
    num=rand()%24;
    game=true;
    player->setSource(sounds[num]);
    player->play();
}

bool MainWindow::isright(int a)
{
    if (a==num)return true;

    return false;
}

void MainWindow::on_pushButton_game_end_clicked()
{
    game=false;
}

