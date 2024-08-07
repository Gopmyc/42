export FT_USER=nours
groups $FT_USER | awk -F: '{gsub(" ",","); print $2}'
