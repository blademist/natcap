/*
 * Author: Chen Minqiang <ptpt52@gmail.com>
 *  Date : Sun, 05 Jun 2016 16:24:37 +0800
 */
#ifndef _NATCAP_SERVER_H_
#define _NATCAP_SERVER_H_

int natcap_server_init(void);

void natcap_server_exit(void);

extern char *auth_http_redirect_url;

extern unsigned short natcap_redirect_port;

#endif /* _NATCAP_SERVER_H_ */
