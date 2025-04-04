//
// Widget panel for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2021 by Bill Spitzak and others.
//
// This library is free software. Distribution and use rights are outlined in
// the file "COPYING" which should have been included with this file.  If this
// file is missing or damaged, see the license at:
//
//     https://www.fltk.org/COPYING.php
//
// Please see the following page on how to report bugs and issues:
//
//     https://www.fltk.org/bugs.php
//

// generated by Fast Light User Interface Designer (fluid) version 1.0500

#ifndef widget_panel_h
#define widget_panel_h
#include <FL/Fl.H>
#include "panels/widget_panel/Grid_Child_Tab.h"
#include "panels/widget_panel/Grid_Tab.h"
#include "widgets/Formula_Input.h"
class Fl_Flex;
#include <FL/Fl_Double_Window.H>
extern Fl_Double_Window *image_panel_window;
#include <FL/Fl_Group.H>
extern void propagate_load(Fl_Group*, void*);
extern Fl_Group *image_panel_imagegroup;
#include <FL/Fl_Box.H>
#include <FL/Fl_Shared_Image.H>
extern Fl_Box *image_panel_data;
extern fld::widget::Formula_Input *image_panel_imagew;
extern fld::widget::Formula_Input *image_panel_imageh;
#include <FL/Fl_Button.H>
#include <FL/Fl_Check_Button.H>
extern Fl_Group *image_panel_deimagegroup;
extern Fl_Box *image_panel_dedata;
extern fld::widget::Formula_Input *image_panel_deimagew;
extern fld::widget::Formula_Input *image_panel_deimageh;
extern Fl_Button *image_panel_close;
Fl_Double_Window* make_image_panel();
void run_image_panel();
void flex_margin_cb(Fl_Value_Input* i, void* v, void (*load_margin)(Fl_Flex*,Fl_Value_Input*), int (*update_margin)(Fl_Flex*,int));
#include <FL/Fl_Tabs.H>
extern Fl_Tabs *widget_tabs;
extern Fl_Group *wp_gui_tab;
#include <FL/Fl_Input.H>
extern void label_cb(Fl_Input*, void*);
extern Fl_Input *wp_gui_label;
#include <FL/Fl_Choice.H>
extern Fl_Menu_Item labeltypemenu[];
extern void labeltype_cb(Fl_Choice*, void*);
extern Fl_Input *widget_image_input;
extern Fl_Input *widget_deimage_input;
extern Fl_Group *wp_gui_alignment;
extern void align_cb(Fl_Button*, void*);
extern void align_text_image_cb(Fl_Choice*, void*);
extern void align_position_cb(Fl_Choice*, void*);
extern void position_group_cb(Fl_Group*, void*);
extern fld::widget::Formula_Input *widget_x_input;
extern fld::widget::Formula_Input *widget_y_input;
extern fld::widget::Formula_Input *widget_w_input;
extern fld::widget::Formula_Input *widget_h_input;
extern Fl_Group *wp_gui_flexp;
#include <FL/Fl_Value_Input.H>
extern Fl_Value_Input *widget_flex_size;
extern Fl_Check_Button *widget_flex_fixed;
extern Fl_Group *wp_gui_values;
extern Fl_Group *wp_gui_margins;
extern Fl_Group *wp_gui_sizerange;
#include <FL/Fl_Shortcut_Button.H>
extern Fl_Shortcut_Button *wp_gui_shortcut;
extern Fl_Group *wp_gui_xclass;
#include <FL/Fl_Light_Button.H>
extern Fl_Group *wp_gui_attributes;
extern Fl_Input *wp_gui_tooltip;
extern Fl_Group *wp_style_tab;
extern Fl_Group *wp_style_label;
extern Fl_Menu_Item fontmenu[];
extern Fl_Button *w_labelcolor;
#include <FL/Fl_Menu_Button.H>
extern Fl_Menu_Item colormenu[];
extern Fl_Group *wp_style_box;
extern Fl_Menu_Item boxmenu[];
extern Fl_Button *w_color;
extern Fl_Group *wp_style_downbox;
extern Fl_Button *w_selectcolor;
extern Fl_Group *wp_style_text;
extern Fl_Button *w_textcolor;
extern Fl_Group *wp_cpp_tab;
extern Fl_Group *wp_cpp_class;
extern Fl_Group *wp_cpp_name;
extern void name_public_cb(Fl_Choice*, void*);
extern Fl_Input *v_input[4];
#include <FL/Fl_Tile.H>
#include <FL/Fl_Text_Editor.H>
extern Fl_Text_Editor *wComment;
#include "widgets/Code_Editor.h"
extern fld::widget::Code_Editor *wCallback;
extern Fl_Group *wp_cpp_callback;
extern Fl_Menu_Item whenmenu[];
#include <FL/Fl_Input_Choice.H>
extern Fl_Box *w_when_box;
extern Grid_Tab *widget_tab_grid;
extern Grid_Child_Tab *widget_tab_grid_child;
extern Fl_Tabs *widget_tabs_repo;
extern void live_mode_cb(Fl_Button*, void*);
extern Fl_Button *wLiveMode;
extern void overlay_cb(Fl_Button*, void*);
extern Fl_Button *overlay_button;
#include <FL/Fl_Return_Button.H>
extern void ok_cb(Fl_Return_Button*, void*);
Fl_Double_Window* make_widget_panel();
extern Fl_Menu_Item menu_[];
extern Fl_Menu_Item menu_1[];
extern Fl_Menu_Item menu_Children[];
extern Fl_Menu_Item menu_2[];
extern Fl_Menu_Item menu_3[];
extern Fl_Menu_Item menu_4[];
#endif
