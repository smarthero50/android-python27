/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:04 2012
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

#include "sipAPIQtCore.h"

#line 149 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qhash.sip"
#include <qmap.h>
#line 39 "sipQtCoreQHash18000100QByteArray.cpp"

#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 43 "sipQtCoreQHash18000100QByteArray.cpp"


extern "C" {static void assign_QHash_1800_0100QByteArray(void *, SIP_SSIZE_T, const void *);}
static void assign_QHash_1800_0100QByteArray(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QHash<int,QByteArray> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QHash<int,QByteArray> *>(sipSrc);
}


extern "C" {static void *array_QHash_1800_0100QByteArray(SIP_SSIZE_T);}
static void *array_QHash_1800_0100QByteArray(SIP_SSIZE_T sipNrElem)
{
    return new QHash<int,QByteArray>[sipNrElem];
}


extern "C" {static void *copy_QHash_1800_0100QByteArray(const void *, SIP_SSIZE_T);}
static void *copy_QHash_1800_0100QByteArray(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QHash<int,QByteArray>(reinterpret_cast<const QHash<int,QByteArray> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QHash_1800_0100QByteArray(void *, int);}
static void release_QHash_1800_0100QByteArray(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QHash<int,QByteArray> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QHash_1800_0100QByteArray(PyObject *, void **, int *, PyObject *);}
static int convertTo_QHash_1800_0100QByteArray(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QHash<int,QByteArray> **sipCppPtr = reinterpret_cast<QHash<int,QByteArray> **>(sipCppPtrV);

#line 200 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qhash.sip"
    PyObject *kobj, *tobj;
    SIP_SSIZE_T i = 0;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyDict_Check(sipPy))
            return 0;

        while (PyDict_Next(sipPy, &i, &kobj, &tobj))
            if (!sipCanConvertToType(tobj, sipType_QByteArray, SIP_NOT_NONE))
                return 0;

        return 1;
    }

    QHash<int, QByteArray> *qm = new QHash<int, QByteArray>;
 
    while (PyDict_Next(sipPy, &i, &kobj, &tobj))
    {
        int state, k = SIPLong_AsLong(kobj);
        QByteArray *t = reinterpret_cast<QByteArray *>(sipConvertToType(tobj, sipType_QByteArray, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QByteArray, state);

            delete qm;
            return 0;
        }

        qm->insert(k, *t);

        sipReleaseType(t, sipType_QByteArray, state);
    }
 
    *sipCppPtr = qm;
 
    return sipGetState(sipTransferObj);
#line 123 "sipQtCoreQHash18000100QByteArray.cpp"
}


extern "C" {static PyObject *convertFrom_QHash_1800_0100QByteArray(void *, PyObject *);}
static PyObject *convertFrom_QHash_1800_0100QByteArray(void *sipCppV,PyObject *sipTransferObj)
{
   QHash<int,QByteArray> *sipCpp = reinterpret_cast<QHash<int,QByteArray> *>(sipCppV);

#line 153 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qhash.sip"
    // Create the dictionary.
    PyObject *d = PyDict_New();

    if (!d)
        return NULL;

    // Set the dictionary elements.
    QHash<int, QByteArray>::const_iterator i = sipCpp->constBegin();

    while (i != sipCpp->constEnd())
    {
        QByteArray *t = new QByteArray(i.value());

        PyObject *kobj = SIPLong_FromLong(i.key());
        PyObject *tobj = sipConvertFromNewType(t, sipType_QByteArray, sipTransferObj);

        if (kobj == NULL || tobj == NULL || PyDict_SetItem(d, kobj, tobj) < 0)
        {
            Py_DECREF(d);

            if (kobj)
            {
                Py_DECREF(kobj);
            }

            if (tobj)
            {
                Py_DECREF(tobj);
            }
            else
            {
                delete t;
            }

            return NULL;
        }

        Py_DECREF(kobj);
        Py_DECREF(tobj);

        ++i;
    }

    return d;
#line 177 "sipQtCoreQHash18000100QByteArray.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QHash_1800_0100QByteArray = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_7091,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QHash_1800_0100QByteArray,
    array_QHash_1800_0100QByteArray,
    copy_QHash_1800_0100QByteArray,
    release_QHash_1800_0100QByteArray,
    convertTo_QHash_1800_0100QByteArray,
    convertFrom_QHash_1800_0100QByteArray
};
