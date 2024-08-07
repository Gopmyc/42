#!/bin/bash

# Change le répertoire de travail pour être un niveau au-dessus du répertoire actuel
cd "$(dirname "$PWD")" || exit

# Vérifie si le répertoire actuel est un répertoire Git
if [ ! -d ".git" ]; then
  echo "Le répertoire actuel n'est pas un dépôt Git."
  exit 1
fi

# Affiche les 5 derniers identifiants de commit depuis le répertoire actuel
echo "Les 5 derniers commits dans le répertoire $(pwd) sont :"
git log -n 5 --pretty=format:"%H"
