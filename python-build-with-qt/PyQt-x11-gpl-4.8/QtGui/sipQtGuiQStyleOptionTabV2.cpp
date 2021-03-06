/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:16 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 769 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 39 "sipQtGuiQStyleOptionTabV2.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qsize.sip"
#include <qsize.h>
#line 43 "sipQtGuiQStyleOptionTabV2.cpp"
#line 693 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 46 "sipQtGuiQStyleOptionTabV2.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 49 "sipQtGuiQStyleOptionTabV2.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionTabV2(void *, const sipTypeDef *);}
static void *cast_QStyleOptionTabV2(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionTabV2)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionTab)->ctd_cast((QStyleOptionTab *)(QStyleOptionTabV2 *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionTabV2(void *, int);}
static void release_QStyleOptionTabV2(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionTabV2 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionTabV2(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionTabV2(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionTabV2 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionTabV2 *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionTabV2(SIP_SSIZE_T);}
static void *array_QStyleOptionTabV2(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionTabV2[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionTabV2(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionTabV2(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionTabV2(reinterpret_cast<const QStyleOptionTabV2 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionTabV2(sipSimpleWrapper *);}
static void dealloc_QStyleOptionTabV2(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionTabV2(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QStyleOptionTabV2(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QStyleOptionTabV2(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionTabV2 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabV2();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionTabV2 * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionTabV2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabV2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionTab * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionTab, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabV2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionTabV2[] = {{556, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionTabV2[] = {
    {sipName_Version, QStyleOptionTabV2::Version, 569},
};


extern "C" {static PyObject *varget_QStyleOptionTabV2_iconSize(void *, PyObject *);}
static PyObject *varget_QStyleOptionTabV2_iconSize(void *sipSelf, PyObject *)
{
    QSize *sipVal;
    QStyleOptionTabV2 *sipCpp = reinterpret_cast<QStyleOptionTabV2 *>(sipSelf);

    sipVal = &sipCpp->iconSize;

    return sipConvertFromType(sipVal,sipType_QSize, NULL);
}


extern "C" {static int varset_QStyleOptionTabV2_iconSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabV2_iconSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize *sipVal;
    QStyleOptionTabV2 *sipCpp = reinterpret_cast<QStyleOptionTabV2 *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->iconSize = *sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionTabV2[] = {
    {sipName_iconSize, varget_QStyleOptionTabV2_iconSize, varset_QStyleOptionTabV2_iconSize, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionTabV2 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionTabV2,
        {0}
    },
    {
        sipNameNr_QStyleOptionTabV2,
        {0, 0, 1},
        0, 0,
        1, enummembers_QStyleOptionTabV2,
        1, variables_QStyleOptionTabV2,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QStyleOptionTabV2,
    0,
    init_QStyleOptionTabV2,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QStyleOptionTabV2,
    assign_QStyleOptionTabV2,
    array_QStyleOptionTabV2,
    copy_QStyleOptionTabV2,
    release_QStyleOptionTabV2,
    cast_QStyleOptionTabV2,
    0,
    0,
    0
},
    0,
    0,
    0
};
