# README : introduction
Ce projet vous guide à travers les étapes nécessaires pour créer et manipuler une base de données sous Linux, ainsi que pour accéder aux données dans cette base.

#  I.Créer et Lancer une base de données graphiquement
1. Créer une base de données sous Linux

    Utiliser MySQL Workbench :
        -Ouvrez MySQL Workbench sur votre système Linux.
        -Connectez-vous à votre serveur MySQL local.
        -Créez une nouvelle base de données appelée jeu.
        -Créez une table dans cette base de données avec les champs suivants :
        -id : clé primaire, de type INT.
        -prénom : de type VARCHAR.
        -nom : de type VARCHAR.

 2.  Ajoutez deux personnes : Karim BENZEMA, et Antoine GRIEZMANN mais avant on crée un database "jeu",
qu'on va ensuite utiliser.

```  CREATE DATABASE jeu; USE jeu;```
-on crée la table "jeu"

```
   CREATE TABLE jeu (
    id INT AUTO_INCREMENT PRIMARY KEY,
    prenom VARCHAR(50),
    nom VARCHAR(50));
```

-on insere les données :
```
INSERT INTO jeu (prenom, nom) VALUES
('Karim', 'BENZEMA'),
('Antoine', 'GRIEZMANN');
```

#   II. Accès à la BDD

1. Installation de Qt sous linux :
Installer Qt via le lien sur le site officiel en choisissant la version de base.
```https://www.qt.io/download-qt-installer```

2. Installation du driver MySQL :
-Taper la commande suivante sous le terminal.
``` sudo apt-get update && sudo apt-get upgrade ```

-Taper la commande suivante sous le terminal. Ceci installera les outils et librairies nécessaires à faire
fonctionner QT sous linux.
```
sudo apt-get -y install build-essential openssl libssl-dev libssl1.0 libgl1-mesa-dev
libqt5x11extras5 '^libxcb.*-dev' libx11-xcb-dev libglu1-mesa-dev libxrender-dev libxi-dev
libxkbcommon-dev libxkbcommon-x11-dev ```




