# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wzaim <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/01 12:10:14 by wzaim             #+#    #+#              #
#    Updated: 2017/08/02 09:20:58 by wzaim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find . -type f  -name "*.sh" -exec basename "{}" \; | cut -d "." -f 1