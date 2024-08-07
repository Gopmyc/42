#!/bin/bash

# Change le répertoire de travail pour être un niveau au-dessus du répertoire du script
cd "$(dirname "$PWD")" || exit

# Vérifie si le répertoire actuel est un répertoire Git
if [ ! -d ".git" ]; then
  echo "Le répertoire actuel n'est pas un dépôt Git."
  exit 1
fi

# Affiche les fichiers ignorés par Git
echo "Les fichiers ignorés par Git dans le répertoire $(pwd) sont :"
git ls-files --ignored --exclude-standard --others
