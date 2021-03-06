/* com.github.jmoerman.go-for-it-0_internal.h generated by valac 0.34.7, the Vala compiler, do not modify */


#ifndef __COM_GITHUB_JMOERMAN_GO_FOR_IT_0_INTERNAL_H__
#define __COM_GITHUB_JMOERMAN_GO_FOR_IT_0_INTERNAL_H__

#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>

G_BEGIN_DECLS


#define GOFI_TYPE_FEATURE_STATUS (gofi_feature_status_get_type ())

#define GOFI_TYPE_UTILS (gofi_utils_get_type ())
#define GOFI_UTILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GOFI_TYPE_UTILS, GOFIUtils))
#define GOFI_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GOFI_TYPE_UTILS, GOFIUtilsClass))
#define GOFI_IS_UTILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GOFI_TYPE_UTILS))
#define GOFI_IS_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GOFI_TYPE_UTILS))
#define GOFI_UTILS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GOFI_TYPE_UTILS, GOFIUtilsClass))

typedef struct _GOFIUtils GOFIUtils;
typedef struct _GOFIUtilsClass GOFIUtilsClass;
typedef struct _GOFIUtilsPrivate GOFIUtilsPrivate;

#define TYPE_SETTINGS_MANAGER (settings_manager_get_type ())
#define SETTINGS_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SETTINGS_MANAGER, SettingsManager))
#define SETTINGS_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SETTINGS_MANAGER, SettingsManagerClass))
#define IS_SETTINGS_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SETTINGS_MANAGER))
#define IS_SETTINGS_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SETTINGS_MANAGER))
#define SETTINGS_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SETTINGS_MANAGER, SettingsManagerClass))

typedef struct _SettingsManager SettingsManager;
typedef struct _SettingsManagerClass SettingsManagerClass;
typedef struct _SettingsManagerPrivate SettingsManagerPrivate;

#define TYPE_TODO_TASK (todo_task_get_type ())
#define TODO_TASK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TODO_TASK, TodoTask))
#define TODO_TASK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TODO_TASK, TodoTaskClass))
#define IS_TODO_TASK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TODO_TASK))
#define IS_TODO_TASK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TODO_TASK))
#define TODO_TASK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TODO_TASK, TodoTaskClass))

typedef struct _TodoTask TodoTask;
typedef struct _TodoTaskClass TodoTaskClass;
typedef struct _TodoTaskPrivate TodoTaskPrivate;

#define TYPE_SEQUENTIAL_LIST (sequential_list_get_type ())
#define SEQUENTIAL_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SEQUENTIAL_LIST, SequentialList))
#define SEQUENTIAL_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SEQUENTIAL_LIST, SequentialListClass))
#define IS_SEQUENTIAL_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SEQUENTIAL_LIST))
#define IS_SEQUENTIAL_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SEQUENTIAL_LIST))
#define SEQUENTIAL_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SEQUENTIAL_LIST, SequentialListClass))

typedef struct _SequentialList SequentialList;
typedef struct _SequentialListClass SequentialListClass;
typedef struct _SequentialListPrivate SequentialListPrivate;

#define TYPE_DRAG_LIST_MODEL (drag_list_model_get_type ())
#define DRAG_LIST_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DRAG_LIST_MODEL, DragListModel))
#define IS_DRAG_LIST_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DRAG_LIST_MODEL))
#define DRAG_LIST_MODEL_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), TYPE_DRAG_LIST_MODEL, DragListModelIface))

typedef struct _DragListModel DragListModel;
typedef struct _DragListModelIface DragListModelIface;

#define TYPE_TASK_STORE (task_store_get_type ())
#define TASK_STORE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TASK_STORE, TaskStore))
#define TASK_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TASK_STORE, TaskStoreClass))
#define IS_TASK_STORE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TASK_STORE))
#define IS_TASK_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TASK_STORE))
#define TASK_STORE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TASK_STORE, TaskStoreClass))

typedef struct _TaskStore TaskStore;
typedef struct _TaskStoreClass TaskStoreClass;
typedef struct _TaskStorePrivate TaskStorePrivate;

#define TYPE_FILE_WATCHER (file_watcher_get_type ())
#define FILE_WATCHER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_FILE_WATCHER, FileWatcher))
#define FILE_WATCHER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_FILE_WATCHER, FileWatcherClass))
#define IS_FILE_WATCHER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_FILE_WATCHER))
#define IS_FILE_WATCHER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_FILE_WATCHER))
#define FILE_WATCHER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_FILE_WATCHER, FileWatcherClass))

typedef struct _FileWatcher FileWatcher;
typedef struct _FileWatcherClass FileWatcherClass;
typedef struct _FileWatcherPrivate FileWatcherPrivate;

#define TYPE_TASK_MANAGER (task_manager_get_type ())
#define TASK_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TASK_MANAGER, TaskManager))
#define TASK_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TASK_MANAGER, TaskManagerClass))
#define IS_TASK_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TASK_MANAGER))
#define IS_TASK_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TASK_MANAGER))
#define TASK_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TASK_MANAGER, TaskManagerClass))

typedef struct _TaskManager TaskManager;
typedef struct _TaskManagerClass TaskManagerClass;
typedef struct _TaskManagerPrivate TaskManagerPrivate;

#define TYPE_TASK_TIMER (task_timer_get_type ())
#define TASK_TIMER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TASK_TIMER, TaskTimer))
#define TASK_TIMER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TASK_TIMER, TaskTimerClass))
#define IS_TASK_TIMER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TASK_TIMER))
#define IS_TASK_TIMER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TASK_TIMER))
#define TASK_TIMER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TASK_TIMER, TaskTimerClass))

typedef struct _TaskTimer TaskTimer;
typedef struct _TaskTimerClass TaskTimerClass;
typedef struct _TaskTimerPrivate TaskTimerPrivate;

#define TYPE_FILTER (filter_get_type ())
#define FILTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_FILTER, Filter))
#define FILTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_FILTER, FilterClass))
#define IS_FILTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_FILTER))
#define IS_FILTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_FILTER))
#define FILTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_FILTER, FilterClass))

typedef struct _Filter Filter;
typedef struct _FilterClass FilterClass;
typedef struct _FilterPrivate FilterPrivate;

#define TYPE_DRAG_LIST_ROW (drag_list_row_get_type ())
#define DRAG_LIST_ROW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DRAG_LIST_ROW, DragListRow))
#define DRAG_LIST_ROW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DRAG_LIST_ROW, DragListRowClass))
#define IS_DRAG_LIST_ROW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DRAG_LIST_ROW))
#define IS_DRAG_LIST_ROW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DRAG_LIST_ROW))
#define DRAG_LIST_ROW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DRAG_LIST_ROW, DragListRowClass))

typedef struct _DragListRow DragListRow;
typedef struct _DragListRowClass DragListRowClass;
typedef struct _DragListRowPrivate DragListRowPrivate;

#define TYPE_TASK_ROW (task_row_get_type ())
#define TASK_ROW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TASK_ROW, TaskRow))
#define TASK_ROW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TASK_ROW, TaskRowClass))
#define IS_TASK_ROW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TASK_ROW))
#define IS_TASK_ROW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TASK_ROW))
#define TASK_ROW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TASK_ROW, TaskRowClass))

typedef struct _TaskRow TaskRow;
typedef struct _TaskRowClass TaskRowClass;
typedef struct _TaskRowPrivate TaskRowPrivate;

#define TYPE_TASK_LIST (task_list_get_type ())
#define TASK_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TASK_LIST, TaskList))
#define TASK_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TASK_LIST, TaskListClass))
#define IS_TASK_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TASK_LIST))
#define IS_TASK_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TASK_LIST))
#define TASK_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TASK_LIST, TaskListClass))

typedef struct _TaskList TaskList;
typedef struct _TaskListClass TaskListClass;
typedef struct _TaskListPrivate TaskListPrivate;

#define TYPE_DRAG_LIST (drag_list_get_type ())
#define DRAG_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DRAG_LIST, DragList))
#define DRAG_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DRAG_LIST, DragListClass))
#define IS_DRAG_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DRAG_LIST))
#define IS_DRAG_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DRAG_LIST))
#define DRAG_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DRAG_LIST, DragListClass))

typedef struct _DragList DragList;
typedef struct _DragListClass DragListClass;
typedef struct _DragListPrivate DragListPrivate;

#define TYPE_INT_RANGE (int_range_get_type ())
typedef struct _IntRange IntRange;

#define TYPE_TIMER_VIEW (timer_view_get_type ())
#define TIMER_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TIMER_VIEW, TimerView))
#define TIMER_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TIMER_VIEW, TimerViewClass))
#define IS_TIMER_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TIMER_VIEW))
#define IS_TIMER_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TIMER_VIEW))
#define TIMER_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TIMER_VIEW, TimerViewClass))

typedef struct _TimerView TimerView;
typedef struct _TimerViewClass TimerViewClass;
typedef struct _TimerViewPrivate TimerViewPrivate;

#define TYPE_SETTINGS_DIALOG (settings_dialog_get_type ())
#define SETTINGS_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SETTINGS_DIALOG, SettingsDialog))
#define SETTINGS_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SETTINGS_DIALOG, SettingsDialogClass))
#define IS_SETTINGS_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SETTINGS_DIALOG))
#define IS_SETTINGS_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SETTINGS_DIALOG))
#define SETTINGS_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SETTINGS_DIALOG, SettingsDialogClass))

typedef struct _SettingsDialog SettingsDialog;
typedef struct _SettingsDialogClass SettingsDialogClass;
typedef struct _SettingsDialogPrivate SettingsDialogPrivate;

#define TYPE_ABOUT_DIALOG (about_dialog_get_type ())
#define ABOUT_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_ABOUT_DIALOG, AboutDialog))
#define ABOUT_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_ABOUT_DIALOG, AboutDialogClass))
#define IS_ABOUT_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_ABOUT_DIALOG))
#define IS_ABOUT_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_ABOUT_DIALOG))
#define ABOUT_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_ABOUT_DIALOG, AboutDialogClass))

typedef struct _AboutDialog AboutDialog;
typedef struct _AboutDialogClass AboutDialogClass;
typedef struct _AboutDialogPrivate AboutDialogPrivate;

#define TYPE_CONTRIBUTE_DIALOG (contribute_dialog_get_type ())
#define CONTRIBUTE_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CONTRIBUTE_DIALOG, ContributeDialog))
#define CONTRIBUTE_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CONTRIBUTE_DIALOG, ContributeDialogClass))
#define IS_CONTRIBUTE_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CONTRIBUTE_DIALOG))
#define IS_CONTRIBUTE_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CONTRIBUTE_DIALOG))
#define CONTRIBUTE_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CONTRIBUTE_DIALOG, ContributeDialogClass))

typedef struct _ContributeDialog ContributeDialog;
typedef struct _ContributeDialogClass ContributeDialogClass;
typedef struct _ContributeDialogPrivate ContributeDialogPrivate;

#define TYPE_MAIN_WINDOW (main_window_get_type ())
#define MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MAIN_WINDOW, MainWindow))
#define MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MAIN_WINDOW, MainWindowClass))
#define IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MAIN_WINDOW))
#define IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MAIN_WINDOW))
#define MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MAIN_WINDOW, MainWindowClass))

typedef struct _MainWindow MainWindow;
typedef struct _MainWindowClass MainWindowClass;
typedef struct _MainWindowPrivate MainWindowPrivate;

#define TYPE_MAIN (main_get_type ())
#define MAIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MAIN, Main))
#define MAIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MAIN, MainClass))
#define IS_MAIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MAIN))
#define IS_MAIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MAIN))
#define MAIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MAIN, MainClass))

typedef struct _Main Main;
typedef struct _MainClass MainClass;
typedef struct _MainPrivate MainPrivate;

typedef enum  {
	GOFI_FEATURE_STATUS_UNKNOWN,
	GOFI_FEATURE_STATUS_ALWAYS,
	GOFI_FEATURE_STATUS_COMMON,
	GOFI_FEATURE_STATUS_UNCOMMON,
	GOFI_FEATURE_STATUS_NEVER
} GOFIFeatureStatus;

struct _GOFIUtils {
	GTypeInstance parent_instance;
	volatile int ref_count;
	GOFIUtilsPrivate * priv;
};

struct _GOFIUtilsClass {
	GTypeClass parent_class;
	void (*finalize) (GOFIUtils *self);
};

struct _SettingsManager {
	GTypeInstance parent_instance;
	volatile int ref_count;
	SettingsManagerPrivate * priv;
	gboolean first_start;
};

struct _SettingsManagerClass {
	GTypeClass parent_class;
	void (*finalize) (SettingsManager *self);
};

struct _TodoTask {
	GObject parent_instance;
	TodoTaskPrivate * priv;
};

struct _TodoTaskClass {
	GObjectClass parent_class;
};

struct _SequentialList {
	GTypeInstance parent_instance;
	volatile int ref_count;
	SequentialListPrivate * priv;
};

struct _SequentialListClass {
	GTypeClass parent_class;
	void (*finalize) (SequentialList *self);
};

struct _DragListModelIface {
	GTypeInterface parent_iface;
	void (*move_item) (DragListModel* self, guint old_position, guint new_position);
	GObject* (*get_item) (DragListModel* self, guint position);
	GType (*get_item_type) (DragListModel* self);
	guint (*get_n_items) (DragListModel* self);
};

struct _TaskStore {
	GObject parent_instance;
	TaskStorePrivate * priv;
};

struct _TaskStoreClass {
	GObjectClass parent_class;
};

struct _FileWatcher {
	GTypeInstance parent_instance;
	volatile int ref_count;
	FileWatcherPrivate * priv;
};

struct _FileWatcherClass {
	GTypeClass parent_class;
	void (*finalize) (FileWatcher *self);
};

struct _TaskManager {
	GTypeInstance parent_instance;
	volatile int ref_count;
	TaskManagerPrivate * priv;
	TaskStore* todo_store;
	TaskStore* done_store;
};

struct _TaskManagerClass {
	GTypeClass parent_class;
	void (*finalize) (TaskManager *self);
};

struct _TaskTimer {
	GTypeInstance parent_instance;
	volatile int ref_count;
	TaskTimerPrivate * priv;
	GDateTime* start_time;
};

struct _TaskTimerClass {
	GTypeClass parent_class;
	void (*finalize) (TaskTimer *self);
};

struct _Filter {
	GTypeInstance parent_instance;
	volatile int ref_count;
	FilterPrivate * priv;
};

struct _FilterClass {
	GTypeClass parent_class;
	void (*finalize) (Filter *self);
};

struct _DragListRow {
	GtkListBoxRow parent_instance;
	DragListRowPrivate * priv;
};

struct _DragListRowClass {
	GtkListBoxRowClass parent_class;
};

struct _TaskRow {
	DragListRow parent_instance;
	TaskRowPrivate * priv;
};

struct _TaskRowClass {
	DragListRowClass parent_class;
};

struct _TaskList {
	GtkGrid parent_instance;
	TaskListPrivate * priv;
};

struct _TaskListClass {
	GtkGridClass parent_class;
};

struct _DragList {
	GtkBin parent_instance;
	DragListPrivate * priv;
	DragListModel* model;
	DragListRow* drag_row;
};

struct _DragListClass {
	GtkBinClass parent_class;
	void (*activate_cursor_row) (DragList* self);
	void (*row_activated) (DragList* self, DragListRow* row);
	void (*move_cursor) (DragList* self, GtkMovementStep step, gint count);
	void (*row_selected) (DragList* self, DragListRow* row);
	void (*row_received_with_model) (DragList* self, DragListRow* row, gint index);
};

typedef GtkWidget* (*DragListCreateWidgetFunc) (GObject* item, void* user_data);
typedef gboolean (*DragListFilterFunc) (DragListRow* row, void* user_data);
struct _IntRange {
	gint min;
	gint max;
};

struct _TimerView {
	GtkGrid parent_instance;
	TimerViewPrivate * priv;
	GtkButton* done_btn;
};

struct _TimerViewClass {
	GtkGridClass parent_class;
};

struct _SettingsDialog {
	GtkDialog parent_instance;
	SettingsDialogPrivate * priv;
};

struct _SettingsDialogClass {
	GtkDialogClass parent_class;
};

struct _AboutDialog {
	GtkAboutDialog parent_instance;
	AboutDialogPrivate * priv;
};

struct _AboutDialogClass {
	GtkAboutDialogClass parent_class;
};

struct _ContributeDialog {
	GtkMessageDialog parent_instance;
	ContributeDialogPrivate * priv;
};

struct _ContributeDialogClass {
	GtkMessageDialogClass parent_class;
};

struct _MainWindow {
	GtkApplicationWindow parent_instance;
	MainWindowPrivate * priv;
};

struct _MainWindowClass {
	GtkApplicationWindowClass parent_class;
};

struct _Main {
	GtkApplication parent_instance;
	MainPrivate * priv;
};

struct _MainClass {
	GtkApplicationClass parent_class;
};


#define GOFI_APP_NAME "Go For It!"
#define GOFI_EXEC_NAME "com.github.jmoerman.go-for-it"
#define GOFI_APP_SYSTEM_NAME "com.github.jmoerman.go-for-it"
#define GOFI_APP_ID "com.github.jmoerman.go-for-it"
#define GOFI_APP_VERSION "1.6.10"
#define GOFI_ICON_NAME "com.github.jmoerman.go-for-it"
#define GOFI_FILE_CONF "go-for-it.conf"
#define GOFI_PROJECT_WEBSITE "http://manuel-kehl.de/projects/go-for-it/"
#define GOFI_PROJECT_REPO "https://github.com/JMoerman/Go-For-It"
#define GOFI_PROJECT_DONATIONS "https://jmoerman.github.io/donate/"
#define GOFI_INSTALL_PREFIX "/usr"
#define GOFI_GETTEXT_PACKAGE "com.github.jmoerman.go-for-it"
GType gofi_feature_status_get_type (void) G_GNUC_CONST;
gboolean gofi_feature_status_use_feature (GOFIFeatureStatus self, gboolean _default);
gboolean gofi_feature_status_config_useful (GOFIFeatureStatus self);
gpointer gofi_utils_ref (gpointer instance);
void gofi_utils_unref (gpointer instance);
GParamSpec* gofi_param_spec_utils (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void gofi_value_set_utils (GValue* value, gpointer v_object);
void gofi_value_take_utils (GValue* value, gpointer v_object);
gpointer gofi_value_get_utils (const GValue* value);
GType gofi_utils_get_type (void) G_GNUC_CONST;
GtkImage* gofi_utils_load_image_fallback (GtkIconSize size, const gchar* icon_name, ...);
GOFIUtils* gofi_utils_new (void);
GOFIUtils* gofi_utils_construct (GType object_type);
gchar* gofi_utils_get_config_dir (void);
gchar* gofi_utils_get_config_file (void);
gchar* gofi_utils_get_old_config_file (void);
GOFIFeatureStatus gofi_utils_get_desktop_hb_status (void);
gpointer settings_manager_ref (gpointer instance);
void settings_manager_unref (gpointer instance);
GParamSpec* param_spec_settings_manager (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_settings_manager (GValue* value, gpointer v_object);
void value_take_settings_manager (GValue* value, gpointer v_object);
gpointer value_get_settings_manager (const GValue* value);
GType settings_manager_get_type (void) G_GNUC_CONST;
SettingsManager* settings_manager_new_load_from_key_file (void);
SettingsManager* settings_manager_construct_load_from_key_file (GType object_type);
SettingsManager* settings_manager_new (void);
SettingsManager* settings_manager_construct (GType object_type);
gchar* settings_manager_get_todo_txt_location (SettingsManager* self);
void settings_manager_set_todo_txt_location (SettingsManager* self, const gchar* value);
gint settings_manager_get_task_duration (SettingsManager* self);
void settings_manager_set_task_duration (SettingsManager* self, gint value);
gint settings_manager_get_break_duration (SettingsManager* self);
void settings_manager_set_break_duration (SettingsManager* self, gint value);
gint settings_manager_get_reminder_time (SettingsManager* self);
void settings_manager_set_reminder_time (SettingsManager* self, gint value);
gboolean settings_manager_get_reminder_active (SettingsManager* self);
gint settings_manager_get_win_x (SettingsManager* self);
void settings_manager_set_win_x (SettingsManager* self, gint value);
gint settings_manager_get_win_y (SettingsManager* self);
void settings_manager_set_win_y (SettingsManager* self, gint value);
gint settings_manager_get_win_width (SettingsManager* self);
void settings_manager_set_win_width (SettingsManager* self, gint value);
gint settings_manager_get_win_height (SettingsManager* self);
void settings_manager_set_win_height (SettingsManager* self, gint value);
gboolean settings_manager_get_use_header_bar (SettingsManager* self);
void settings_manager_set_use_header_bar (SettingsManager* self, gboolean value);
gboolean settings_manager_get_use_dark_theme (SettingsManager* self);
void settings_manager_set_use_dark_theme (SettingsManager* self, gboolean value);
gboolean gofi_txt_utils_is_date (const gchar* token);
gboolean gofi_txt_utils_is_priority (const gchar* token);
gboolean gofi_txt_utils_is_project_tag (const gchar* token);
gboolean gofi_txt_utils_is_context_tag (const gchar* token);
gboolean gofi_txt_utils_consume_status (gchar** txt_line);
gchar* gofi_txt_utils_consume_priority (gchar** pseudo_description);
GDateTime* gofi_txt_utils_string_to_date (const gchar* date_txt);
gchar* gofi_txt_utils_date_to_string (GDateTime* date);
GType todo_task_get_type (void) G_GNUC_CONST;
TodoTask* todo_task_new (const gchar* line, gboolean done);
TodoTask* todo_task_construct (GType object_type, const gchar* line, gboolean done);
const gchar* todo_task_get_description (TodoTask* self);
void todo_task_set_description (TodoTask* self, const gchar* value);
gboolean todo_task_get_done (TodoTask* self);
void todo_task_set_done (TodoTask* self, gboolean value);
gboolean todo_task_get_valid (TodoTask* self);
GDateTime* todo_task_get_creation_date (TodoTask* self);
void todo_task_set_creation_date (TodoTask* self, GDateTime* value);
GDateTime* todo_task_get_completion_date (TodoTask* self);
void todo_task_set_completion_date (TodoTask* self, GDateTime* value);
const gchar* todo_task_get_priority (TodoTask* self);
void todo_task_set_priority (TodoTask* self, const gchar* value);
gpointer sequential_list_ref (gpointer instance);
void sequential_list_unref (gpointer instance);
GParamSpec* param_spec_sequential_list (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_sequential_list (GValue* value, gpointer v_object);
void value_take_sequential_list (GValue* value, gpointer v_object);
gpointer value_get_sequential_list (const GValue* value);
GType sequential_list_get_type (void) G_GNUC_CONST;
SequentialList* sequential_list_new (GType item_type);
SequentialList* sequential_list_construct (GType object_type, GType item_type);
void sequential_list_append_item (SequentialList* self, GObject* item);
guint sequential_list_remove_item (SequentialList* self, GObject* item);
void sequential_list_move_item (SequentialList* self, guint old_position, guint new_position);
GObject* sequential_list_get_item (SequentialList* self, guint position);
GType sequential_list_get_item_type (SequentialList* self);
void sequential_list_clear (SequentialList* self);
guint sequential_list_get_length (SequentialList* self);
GType drag_list_model_get_type (void) G_GNUC_CONST;
GType task_store_get_type (void) G_GNUC_CONST;
TaskStore* task_store_new (gboolean done_by_default);
TaskStore* task_store_construct (GType object_type, gboolean done_by_default);
void task_store_add_task (TaskStore* self, TodoTask* task);
void task_store_clear (TaskStore* self);
void task_store_remove_task (TaskStore* self, TodoTask* task);
gboolean task_store_get_done_by_default (TaskStore* self);
gpointer file_watcher_ref (gpointer instance);
void file_watcher_unref (gpointer instance);
GParamSpec* param_spec_file_watcher (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_file_watcher (GValue* value, gpointer v_object);
void value_take_file_watcher (GValue* value, gpointer v_object);
gpointer value_get_file_watcher (const GValue* value);
GType file_watcher_get_type (void) G_GNUC_CONST;
FileWatcher* file_watcher_new (GFile* file);
FileWatcher* file_watcher_construct (GType object_type, GFile* file);
gboolean file_watcher_get_watching (FileWatcher* self);
void file_watcher_set_watching (FileWatcher* self, gboolean value);
gboolean file_watcher_get_being_updated (FileWatcher* self);
GFile* file_watcher_get_file (FileWatcher* self);
void file_watcher_set_file (FileWatcher* self, GFile* value);
gpointer task_manager_ref (gpointer instance);
void task_manager_unref (gpointer instance);
GParamSpec* param_spec_task_manager (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_task_manager (GValue* value, gpointer v_object);
void value_take_task_manager (GValue* value, gpointer v_object);
gpointer value_get_task_manager (const GValue* value);
GType task_manager_get_type (void) G_GNUC_CONST;
TaskManager* task_manager_new (SettingsManager* settings);
TaskManager* task_manager_construct (GType object_type, SettingsManager* settings);
void task_manager_set_active_task (TaskManager* self, TodoTask* task);
void task_manager_add_new_task (TaskManager* self, const gchar* task);
void task_manager_mark_task_done (TaskManager* self, TodoTask* task);
void task_manager_clear_done_store (TaskManager* self);
void task_manager_refresh (TaskManager* self);
gpointer task_timer_ref (gpointer instance);
void task_timer_unref (gpointer instance);
GParamSpec* param_spec_task_timer (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_task_timer (GValue* value, gpointer v_object);
void value_take_task_timer (GValue* value, gpointer v_object);
gpointer value_get_task_timer (const GValue* value);
GType task_timer_get_type (void) G_GNUC_CONST;
TaskTimer* task_timer_new (SettingsManager* settings);
TaskTimer* task_timer_construct (GType object_type, SettingsManager* settings);
void task_timer_start (TaskTimer* self);
void task_timer_stop (TaskTimer* self);
void task_timer_reset (TaskTimer* self);
void task_timer_update (TaskTimer* self);
void task_timer_update_active_task (TaskTimer* self);
void task_timer_set_active_task_done (TaskTimer* self);
GDateTime* task_timer_get_runtime (TaskTimer* self);
void task_timer_toggle_break (TaskTimer* self);
void task_timer_end_iteration (TaskTimer* self);
gboolean task_timer_get_running (TaskTimer* self);
gboolean task_timer_get_break_active (TaskTimer* self);
GDateTime* task_timer_get_remaining_duration (TaskTimer* self);
void task_timer_set_remaining_duration (TaskTimer* self, GDateTime* value);
TodoTask* task_timer_get_active_task (TaskTimer* self);
void task_timer_set_active_task (TaskTimer* self, TodoTask* value);
void drag_list_model_move_item (DragListModel* self, guint old_position, guint new_position);
GObject* drag_list_model_get_item (DragListModel* self, guint position);
GType drag_list_model_get_item_type (DragListModel* self);
guint drag_list_model_get_n_items (DragListModel* self);
gpointer filter_ref (gpointer instance);
void filter_unref (gpointer instance);
GParamSpec* param_spec_filter (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_filter (GValue* value, gpointer v_object);
void value_take_filter (GValue* value, gpointer v_object);
gpointer value_get_filter (const GValue* value);
GType filter_get_type (void) G_GNUC_CONST;
Filter* filter_new (void);
Filter* filter_construct (GType object_type);
void filter_parse (Filter* self, const gchar* filter_string);
GType drag_list_row_get_type (void) G_GNUC_CONST;
gboolean filter_filter (Filter* self, DragListRow* _row);
GType task_row_get_type (void) G_GNUC_CONST;
TaskRow* task_row_new (TodoTask* task);
TaskRow* task_row_construct (GType object_type, TodoTask* task);
void task_row_edit (TaskRow* self);
void task_row_stop_editing (TaskRow* self);
TodoTask* task_row_get_task (TaskRow* self);
GType task_list_get_type (void) G_GNUC_CONST;
TaskList* task_list_new (TaskStore* model, gboolean add_new);
TaskList* task_list_construct (GType object_type, TaskStore* model, gboolean add_new);
TodoTask* task_list_get_selected_task (TaskList* self);
void task_list_toggle_filter_bar (TaskList* self);
GType drag_list_get_type (void) G_GNUC_CONST;
DragList* drag_list_new (void);
DragList* drag_list_construct (GType object_type);
void drag_list_bind_model (DragList* self, DragListModel* model, DragListCreateWidgetFunc create_widget_func, void* create_widget_func_target, GDestroyNotify create_widget_func_target_destroy_notify);
DragListRow* drag_list_get_selected_row (DragList* self);
void drag_list_select_row (DragList* self, DragListRow* row);
void drag_list_add_row (DragList* self, GtkWidget* widget);
void drag_list_insert_row (DragList* self, GtkWidget* widget, gint position);
void drag_list_remove_row (DragList* self, DragListRow* row);
GList* drag_list_get_rows (DragList* self);
void drag_list_move_row (DragList* self, DragListRow* row, gint index);
DragListRow* drag_list_get_row_at_index (DragList* self, gint index);
void drag_list_set_filter_func (DragList* self, DragListFilterFunc filter_func, void* filter_func_target);
void drag_list_invalidate_filter (DragList* self);
GtkAdjustment* drag_list_get_vadjustment (DragList* self);
void drag_list_set_vadjustment (DragList* self, GtkAdjustment* value);
GType int_range_get_type (void) G_GNUC_CONST;
IntRange* int_range_dup (const IntRange* self);
void int_range_free (IntRange* self);
gboolean int_range_contains (IntRange *self, gint val);
gint int_range_clamp (IntRange *self, gint val);
DragListRow* drag_list_row_new (void);
DragListRow* drag_list_row_construct (GType object_type);
void drag_list_row_set_start_widget (DragListRow* self, GtkWidget* widget);
GtkWidget* drag_list_row_get_start_widget (DragListRow* self);
void drag_list_row_set_center_widget (DragListRow* self, GtkWidget* widget);
GtkWidget* drag_list_row_get_center_widget (DragListRow* self);
DragList* drag_list_row_get_drag_list_box (DragListRow* self);
GType timer_view_get_type (void) G_GNUC_CONST;
TimerView* timer_view_new (TaskTimer* timer);
TimerView* timer_view_construct (GType object_type, TaskTimer* timer);
void timer_view_set_time (TimerView* self, GDateTime* time);
void timer_view_set_running (TimerView* self, gboolean running);
GDateTime* timer_view_get_timer_values (TimerView* self);
void timer_view_show_no_task (TimerView* self);
GType settings_dialog_get_type (void) G_GNUC_CONST;
SettingsDialog* settings_dialog_new (GtkWindow* parent, SettingsManager* settings);
SettingsDialog* settings_dialog_construct (GType object_type, GtkWindow* parent, SettingsManager* settings);
GType about_dialog_get_type (void) G_GNUC_CONST;
AboutDialog* about_dialog_new (GtkWindow* parent);
AboutDialog* about_dialog_construct (GType object_type, GtkWindow* parent);
GType contribute_dialog_get_type (void) G_GNUC_CONST;
ContributeDialog* contribute_dialog_new (GtkWindow* parent);
ContributeDialog* contribute_dialog_construct (GType object_type, GtkWindow* parent);
GType main_window_get_type (void) G_GNUC_CONST;
MainWindow* main_window_new (GtkApplication* app_context, TaskManager* task_manager, TaskTimer* task_timer, SettingsManager* settings);
MainWindow* main_window_construct (GType object_type, GtkApplication* app_context, TaskManager* task_manager, TaskTimer* task_timer, SettingsManager* settings);
void main_window_add_headerbar (MainWindow* self);
void main_window_on_selection_changed (MainWindow* self, TodoTask* selected_task);
GType main_get_type (void) G_GNUC_CONST;
Main* main_new (void);
Main* main_construct (GType object_type);
void main_new_window (Main* self);
void main_show_about (Main* self, GtkWindow* parent);

extern const gchar* GOFI_TEST_DIRS[5];
extern const GtkTargetEntry dlb_entries[1];

G_END_DECLS

#endif
