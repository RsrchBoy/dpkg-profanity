/*
 * windows.h
 *
 * Copyright (C) 2012 - 2015 James Booth <boothj5@gmail.com>
 *
 * This file is part of Profanity.
 *
 * Profanity is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Profanity is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Profanity.  If not, see <http://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders give permission to
 * link the code of portions of this program with the OpenSSL library under
 * certain conditions as described in each individual source file, and
 * distribute linked combinations including the two.
 *
 * You must obey the GNU General Public License in all respects for all of the
 * code used other than OpenSSL. If you modify file(s) with this exception, you
 * may extend this exception to your version of the file(s), but you are not
 * obligated to do so. If you do not wish to do so, delete this exception
 * statement from your version. If you delete this exception statement from all
 * source files in the program, then also delete it here.
 *
 */

#ifndef UI_WINDOWS_H
#define UI_WINDOWS_H

void wins_init(void);

ProfWin * wins_new_xmlconsole(void);
ProfWin * wins_new_chat(const char * const barejid);
ProfWin * wins_new_muc(const char * const roomjid);
ProfWin * wins_new_muc_config(const char * const roomjid, DataForm *form);
ProfWin * wins_new_private(const char * const fulljid);

ProfWin * wins_get_console(void);
ProfChatWin *wins_get_chat(const char * const barejid);
ProfMucWin * wins_get_muc(const char * const roomjid);
ProfMucConfWin * wins_get_muc_conf(const char * const roomjid);
ProfPrivateWin *wins_get_private(const char * const fulljid);
ProfXMLWin * wins_get_xmlconsole(void);

ProfWin * wins_get_current(void);
ProfChatWin * wins_get_current_chat(void);
ProfMucWin * wins_get_current_muc(void);
ProfPrivateWin * wins_get_current_private(void);
ProfMucConfWin * wins_get_current_muc_conf(void);

void wins_set_current_by_num(int i);

ProfWin * wins_get_by_num(int i);

ProfWin * wins_get_next(void);
ProfWin * wins_get_previous(void);
int wins_get_num(ProfWin *window);
int wins_get_current_num(void);
void wins_close_current(void);
void wins_close_by_num(int i);
void wins_clear_current(void);
gboolean wins_is_current(ProfWin *window);
int wins_get_total_unread(void);
void wins_resize_all(void);
GSList * wins_get_chat_recipients(void);
GSList * wins_get_prune_wins(void);
void wins_lost_connection(void);
gboolean wins_tidy(void);
GSList * wins_create_summary(void);
void wins_destroy(void);
GList * wins_get_nums(void);
gboolean wins_swap(int source_win, int target_win);
void wins_hide_subwin(ProfWin *window);
void wins_show_subwin(ProfWin *window);

#endif
