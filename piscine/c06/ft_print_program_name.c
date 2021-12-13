/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:28:09 by mmariani          #+#    #+#             */
/*   Updated: 2021/12/11 23:58:09 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int	i;

	(void) argc;
	i = 0;
	while (argv[1] != '\0')
	{
		i++;	
		write(1, argv[1], i);
	}
}
TERM_SESSION_ID=w0t0p1:2FFF594A-E7EA-4908-8E8B-40CF2F0724D5SSH_AUTH_SOCK=/private/tmp/com.apple.launchd.tzDzat4xJd/ListenersLC_TERMINAL_VERSION=3.4.13Apple_PubSub_Socket_Render=/private/tmp/com.apple.launchd.94PrgoTlCe/RenderCOLORFGBG=7;0ITERM_PROFILE=DefaultXPC_FLAGS=0x0LANG=en_US.UTF-8PWD=/Users/mmariani/Desktop/piscine/c06SHELL=/bin/zshSECURITYSESSIONID=186a8TERM_PROGRAM_VERSION=3.4.13TERM_PROGRAM=iTerm.appPATH=/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin:/usr/local/munkiLC_TERMINAL=iTerm2COLORTERM=truecolorCOMMAND_MODE=unix2003TERM=xterm-256colorHOME=/Users/mmarianiTMPDIR=/var/folders/zz/zyxvpxvq6csfxvn_n0001lpr000cxp/T/USER=mmarianiXPC_SERVICE_NAME=0LOGNAME=mmariani__CF_USER_TEXT_ENCODING=0x0:0:0ITERM_SESSION_ID=w0t0p1:2FFF594A-E7EA-4908-8E8B-40CF2F0724D5SHLVL=1OLDPWD=/Users/mmariani_=/Users/mmariani/Desktop/piscine/c06/./a.outptr_munge=main_stack=executable_file=0x1000008,0xpeppeTERM_SESSION_ID=w0t0p1:2FFF594A-E7EA-4908-8E8B-40CF2F0724D5SSH_AUTH_SOCK=/private/tmp/com.apple.launchd.tzDzat4xJd/ListenersLC_TERMINAL_VERSION=3.4.13Apple_PubSub_Socket_Render=/private/tmp/com.apple.launchd.94PrgoTlCe/RenderCOLORFGBG=7;0ITERM_PROFILE=DefaultXPC_FLAGS=0x0LANG=en_US.UTF-8PWD=/Users/mmariani/Desktop/piscine/c06SHELL=/bin/zshSECURITYSESSIONID=186a8TERM_PROGRAM_VERSION=3.4.13TERM_PROGRAM=iTerm.appPATH=/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin:/usr/local/munkiLC_TERMINAL=iTerm2COLORTERM=truecolorCOMMAND_MODE=unix2003TERM=xterm-256colorHOME=/Users/mmarianiTMPDIR=/var/folders/zz/zyxvpxvq6csfxvn_n0001lpr000cxp/T/USER=mmarianiXPC_SERVICE_NAME=0LOGNAME=mmariani__CF_USER_TEXT_ENCODING=0x0:0:
