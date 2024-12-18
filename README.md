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

```
INSERT INTO `jeu`(`id`, `Nom`, `club`) VALUES (1,'Karim BENZEMA','Madrid'),(2,'Antoine GRIEZMANN','Barca');
```
#  II.Accès à la BDD
1. Afficher les données de la table sous Linux

      -Connectez-vous à votre base de données jeu via MySQL Workbench.
      -Exécutez la requête suivante pour afficher les données :


```
SELECT * FROM jeu;
```
