KENERL_OBJS =     \
    ulib.o        \


GUI_OBJS =        \
    umsg.o        \
    ucontrol.o    \
    ustatic.o     \
    uimagelist.o  \
    ubitmap.o     \
    ubutton.o     \
    udialog.o     \
    udialogx.o    \
    uedit.o       \
    ugldialog.o   \
    uupdownctrl.o \
    utreeview.o   \
    ulistview.o   \
    ulistbox.o    \
    ucombobox.o   \
    ucomboboxex.o \
    uanimation.o  \
    uprogressbar.o\
    ustatusbar.o  \
    ucustomctrl.o \
    utrackbar.o   \
    umessageonlywindow.o \
    utabctrl.o    \
    ubasewindow.o \
    utoolbar.o    \
    usplashwnd.o  \


SYSTEM_OBJS =     \
    uconsole.o    \
    udebug.o      \
    ufileman.o    \
    udllman.o     \
    uobject.o     \
    ugdi.o        \
    uevent.o      \
    ucritical.o   \
    usemaphore.o  \
    umutex.o      \
    utoolhelp.o   \
    ufilemapping.o\
    umailslot.o   \
    upipe.o       \
    uthunk32.o    \
    uimagehlp.o   \
    usync.o       \


GRAPHIC_OBJS =    \
    uglut.o       \
    udibapi.o     \
    urecttracker.o\
    uvisualstyle.o\


CONFIG_OBJS  =    \
    uini.o        \
    uconf.o       \
    ucom.o        \

CRYPTO_OBJS =     \
    md5.o         \

    
OBJS = $(KENERL_OBJS)  $(GUI_OBJS) $(SYSTEM_OBJS) $(GRAPHIC_OBJS) $(CONFIG_OBJS) $(CRYPTO_OBJS) \
       ulink.o       \
       usys.o        \
       umenu.o       \
       uplugin.o     \
       uscrollbar.o  \
       urt.o         \
       utime.o       \
       utimer.o      \
       ucommondialog.o \
       uheader.o     \
       ukeybd.o      \
       uprocess.o    \
       uprocessman.o \
       uthread.o     \
       untservice.o  \
       udraglistbox.o\
       uclipboard.o  \
       uregkey.o     \
       urichedit.o   \
       ufiledb.o     \
       uipaddress.o  \
       urebar.o      \
       udatetimepick.o \
       uiphlp.o      \
       uwindowx.o    \
       ufont.o       \
       upanel.o     \
       uhotkey.o     \
       udbman.o      \
       ufile.o       \
       usocket.o     \
       ulayout.o     \
       utooltip.o    \
       uicon.o       \
       ulog.o        \
       uwinapp.o     \
       uregion.o     \
       ucmdline.o    \
       uprinter.o    \
       ucursor.o     \
       udc.o         \
       ushell.o      \
       umci.o        \