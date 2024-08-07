#!/bin/bash

# Nom du fichier de sortie avec extension .42
OUTPUT_FILE="example_42_file.42"

# Crée un fichier avec 41 octets d'espace (0x00) suivi de la chaîne "42"
printf '%41s' '' | tr ' ' '\0' > "$OUTPUT_FILE"
echo -n "42" >> "$OUTPUT_FILE"

# Affiche la taille du fichier et les premiers octets pour vérifier
echo "Fichier créé : $OUTPUT_FILE"
ls -l "$OUTPUT_FILE"
hexdump -C "$OUTPUT_FILE"
