/* -*- coding: windows-1252-unix; -*- */
/* 
 * Copyright (C)2019 Roger Clark. VK3KYY / G4KYF
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
/*
 * Translators: EA3IGM, EA5SW, EB3AM, EA3BIL
 *
 *
 * Rev: 4
 */
#ifndef USER_INTERFACE_LANGUAGES_CATALAN_H_
#define USER_INTERFACE_LANGUAGES_CATALAN_H_
/********************************************************************
 *
 * VERY IMPORTANT.
 * This file should not be saved with UTF-8 encoding
 * Use Notepad++ on Windows with ANSI encoding
 * or emacs on Linux with windows-1252-unix encoding
 *
 ********************************************************************/
const stringsTable_t catalanLanguage=
{
.LANGUAGE_NAME			= "Catal�",
.language				= "Idioma",
.menu					= "Men�",
.credits				= "Cr�dits",
.zone					= "Zona",
.rssi					= "Senyal",
.battery				= "Bater�a",
.contacts				= "Contactes",
.firmware_info			= "Info firmware",
.last_heard				= "Escoltats",
.options				= "Opcions",
.display_options		= "Opcions pantalla",
.sound_options				= "Sound options", // MaxLen: 16
.channel_details		= "Detalls Canal",
.new_contact			= "Nou contacte",
.new_channel			= "Nou canal", // MaxLen: 16, leave room for a space and four channel digits after
.contact_list			= "Contactes",
.hotspot_mode			= "Mode Hotspot",
.contact_details		= "Detall Ctte",
.built					= "Compilat",
.zones					= "Zones",
.keypad					= "Teclat",
.ptt					= "PTT",
.locked					= "blocat",
.press_blue_plus_star	= "Prem Blau + (*)",
.to_unlock				= "per desblocar",
.unlocked				= "Desblocat",
.power_off				= "Apagant...",
.error					= "ERROR",
.rx_only				= "Nom�s RX",
.out_of_band			= "FORA DE BANDA",
.timeout				= "TIMEOUT",
.tg_entry				= "Entreu TG",
.pc_entry				= "Entreu ID",
.user_dmr_id			= "ID DMR d'Usuari",
.contact				= "Contacte",
.accept_call			= "Acceptar trucada?",
.private_call			= "Trucada privada",
.squelch				= "Squelch",
.quick_menu				= "Men� R�pid",
.filter					= "Filtre",
.all_channels			= "Tots els Canals",
.gotoChannel			= "Anar al canal",
.scan					= "Scan",
.channelToVfo			= "Canal -> VFO",
.vfoToChannel			= "VFO -> Canal",
.vfoToNewChannel		= "VFO -> Nou Canal", // MaxLen: 16
.group					= "Grup",
.private				= "Privada",
.all					= "Tots",
.type					= "Tipus",
.timeSlot				= "TimeSlot",
.none					= "Cap",
.contact_saved			= "Contacte Desat",
.duplicate				= "Duplicat",
.tg						= "TG",
.pc						= "ID",
.ts						= "TS",
.mode					= "Mode",
.colour_code			= "Codi Color",
.n_a					= "N/D",
.bandwidth				= "Ample banda",
.stepFreq				= "Salt",
.tot					= "TOT",
.off					= "NO",
.zone_skip				= "Saltar zona",
.all_skip				= "Saltar tot",
.yes					= "S�",
.no						= "No",
.rx_group				= "Grup RX",
.on						= "On",
.timeout_beep			= "So timeout",
.factory_reset			= "Reinici fabr.",
.calibration			= "Calibratge",
.band_limits			= "Limit bandes",
.beep_volume			= "Volum so",
.dmr_mic_gain			= "Guany DMR",
.key_long				= "Key long",
.key_repeat				= "Key rpt",
.dmr_filter_timeout		= "Filtre temps",
.brightness				= "Brillantor",
.brightness_off			= "Brillan. min",
.contrast				= "Contrast",
.colour_invert			= "Color:Invertit",
.colour_normal			= "Color:Normal",
.backlight_timeout		= "Temps llum",
.scan_delay				= "Temps Scan",
.YES					= "S�",
.NO						= "No",
.DISMISS				= "PASSAR",
.scan_mode				= "Mode Scan",
.hold					= "Deten",
.pause					= "Pausa",
.empty_list				= "Llista buida",
.delete_contact_qm		= "Esborrar ctte?",
.contact_deleted		= "Ctte esborrat",
.contact_used			= "Ctte en �s",
.in_rx_group			= "en RX grup",
.select_tx				= "Selec. TX",
.edit_contact			= "Editar Ctte",
.delete_contact			= "Esborrar Ctte",
.group_call				= "Cridar a Grup",
.all_call				= "Cridar a Tots",
.tone_scan				= "Scan To",//// MaxLen: 16
.cc_scan				= "Scan CC",//// MaxLen: 16
.low_battery			= "BATERIA BAIXA !!",//// MaxLen: 16
.Auto					= "Auto", // MaxLen 16 (with .mode + ':') 
.manual					= "Manual",  // MaxLen 16 (with .mode + ':') 
.ptt_toggle				= "PTT Fixat", // MaxLen 16 (with ':' + .on or .off)
.private_call_handling			= "Handle PC", // MaxLen 16 (with ':' + .on ot .off)
.stop					= "Stop", // Maxlen 16 (with ':' + .scan_mode)
.one_line				= "1 line", // MaxLen 16 (with ':' + .contact)
.two_lines				= "2 lines", // MaxLen 16 (with ':' + .contact)
.priority_order				= "Order", // MaxLen 16 (with ':' + 'Cc/DB/TA')
.txtone					="TX Tone",	
};
/********************************************************************
 *
 * VERY IMPORTANT.
 * This file should not be saved with UTF-8 encoding
 * Use Notepad++ on Windows with ANSI encoding
 * or emacs on Linux with windows-1252-unix encoding
 *
 ********************************************************************/
#endif /* USER_INTERFACE_LANGUAGES_CATALAN_H_ */
