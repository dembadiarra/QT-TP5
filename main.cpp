#include <QApplication>
#include <QtSql/QSqlDatabase>
#include <QtDebug>
#include <QtSql/QSqlQuery>
#include <QMainWindow>

#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlError>
#include <QTableView>
#include <QDebug>
#include <QWidget>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow w;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("jeu");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setUserName("dembadiarra");
    db.setPassword("Passciel#2");
    if(db.open())
    {
        qDebug() << "Vous êtes maintenant connecté à " << db.hostName() ;
        QSqlQuery query;
        query.exec("SELECT * FROM `jeu` ");
        while ( query.next() ) {
            QString Nom = query.value(1).toString();
            QString club = query.value(2).toString();
            qDebug() << Nom << club;
        }
        qDebug() << "Requete ok ! :)" ;

    }
    else
    {
        qDebug() << "La connexion a échouée, désolé mais vou pouvez réessayer" ;
    }
    w.show();
    return a.exec();
}
// Création de l'interface graphique
QWidget window;
QVBoxLayout *layout = new QVBoxLayout(&window);

QTableView *tableView = new QTableView();
tableView->setModel(model); // Associer le modèle au tableau
tableView->resizeColumnsToContents(); // Ajuster les colonnes à leur contenu
layout->addWidget(tableView);

window.setLayout(layout);
window.setWindowTitle("Affichage des joueurs");
window.resize(600, 400);
window.show();
return a.exec();
}
