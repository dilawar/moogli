/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.9
 */

#include "sipAPI_moogli.h"

#line 9 "/home1/dilawars/Work/GITHUB/BhallaLab/moogli/moogli/bin/sip/moogli.sip"
#include <osg/Vec2i>
using osg::Vec2i;
#line 13 "/home1/dilawars/Work/GITHUB/BhallaLab/moogli/moogli/bin/sip/sip_moogliVec2i.cpp"



extern "C" {static PyObject *meth_Vec2i_set(PyObject *, PyObject *);}
static PyObject *meth_Vec2i_set(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        Vec2i *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_Vec2i, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->set(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const Vec2i* a0;
        Vec2i *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_Vec2i, &sipCpp, sipType_Vec2i, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->set(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Vec2i, sipName_set, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_Vec2i_x(PyObject *, PyObject *);}
static PyObject *meth_Vec2i_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Vec2i *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Vec2i, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->x();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Vec2i, sipName_x, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_Vec2i_y(PyObject *, PyObject *);}
static PyObject *meth_Vec2i_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Vec2i *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Vec2i, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->y();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Vec2i, sipName_y, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_Vec2i_r(PyObject *, PyObject *);}
static PyObject *meth_Vec2i_r(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Vec2i *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Vec2i, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->r();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Vec2i, sipName_r, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_Vec2i_g(PyObject *, PyObject *);}
static PyObject *meth_Vec2i_g(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Vec2i *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Vec2i, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->g();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Vec2i, sipName_g, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_Vec2i___ge__(PyObject *,PyObject *);}
static PyObject *slot_Vec2i___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    Vec2i *sipCpp = reinterpret_cast<Vec2i *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Vec2i));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Vec2i* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_Vec2i, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = !sipCpp->Vec2i::operator<(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__moogli,ge_slot,sipType_Vec2i,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Vec2i___sub__(PyObject *,PyObject *);}
static PyObject *slot_Vec2i___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Vec2i* a0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9i", sipType_Vec2i, &a0, &a1))
        {
            Vec2i*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Vec2i((*a0 - a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Vec2i,NULL);
        }
    }

    {
        Vec2i* a0;
        const Vec2i* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_Vec2i, &a0, sipType_Vec2i, &a1))
        {
            Vec2i*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Vec2i((*a0 - *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Vec2i,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__moogli,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Vec2i___add__(PyObject *,PyObject *);}
static PyObject *slot_Vec2i___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Vec2i* a0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9i", sipType_Vec2i, &a0, &a1))
        {
            Vec2i*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Vec2i((*a0 + a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Vec2i,NULL);
        }
    }

    {
        Vec2i* a0;
        const Vec2i* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_Vec2i, &a0, sipType_Vec2i, &a1))
        {
            Vec2i*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Vec2i((*a0 + *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Vec2i,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__moogli,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Vec2i___div__(PyObject *,PyObject *);}
static PyObject *slot_Vec2i___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Vec2i* a0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9i", sipType_Vec2i, &a0, &a1))
        {
            Vec2i*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Vec2i((*a0 / a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Vec2i,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__moogli,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Vec2i___mul__(PyObject *,PyObject *);}
static PyObject *slot_Vec2i___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Vec2i* a0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9i", sipType_Vec2i, &a0, &a1))
        {
            Vec2i*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Vec2i((*a0 * a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Vec2i,NULL);
        }
    }

    {
        Vec2i* a0;
        const Vec2i* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_Vec2i, &a0, sipType_Vec2i, &a1))
        {
            Vec2i*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Vec2i((*a0 * *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Vec2i,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__moogli,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Vec2i___lt__(PyObject *,PyObject *);}
static PyObject *slot_Vec2i___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    Vec2i *sipCpp = reinterpret_cast<Vec2i *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Vec2i));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Vec2i* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_Vec2i, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Vec2i::operator<(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__moogli,lt_slot,sipType_Vec2i,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Vec2i___ne__(PyObject *,PyObject *);}
static PyObject *slot_Vec2i___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Vec2i *sipCpp = reinterpret_cast<Vec2i *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Vec2i));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Vec2i* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_Vec2i, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Vec2i::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__moogli,ne_slot,sipType_Vec2i,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Vec2i___eq__(PyObject *,PyObject *);}
static PyObject *slot_Vec2i___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Vec2i *sipCpp = reinterpret_cast<Vec2i *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Vec2i));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Vec2i* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_Vec2i, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Vec2i::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__moogli,eq_slot,sipType_Vec2i,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Vec2i(void *, const sipTypeDef *);}
static void *cast_Vec2i(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_Vec2i)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Vec2i(void *, int);}
static void release_Vec2i(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<Vec2i *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_Vec2i(void *, SIP_SSIZE_T, const void *);}
static void assign_Vec2i(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Vec2i *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Vec2i *>(sipSrc);
}


extern "C" {static void *array_Vec2i(SIP_SSIZE_T);}
static void *array_Vec2i(SIP_SSIZE_T sipNrElem)
{
    return new Vec2i[sipNrElem];
}


extern "C" {static void *copy_Vec2i(const void *, SIP_SSIZE_T);}
static void *copy_Vec2i(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Vec2i(reinterpret_cast<const Vec2i *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Vec2i(sipSimpleWrapper *);}
static void dealloc_Vec2i(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Vec2i(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_Vec2i(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Vec2i(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    Vec2i *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Vec2i();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "ii", &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Vec2i(a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const Vec2i* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_Vec2i, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Vec2i(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Vec2i[] = {
    {(void *)slot_Vec2i___ge__, ge_slot},
    {(void *)slot_Vec2i___sub__, sub_slot},
    {(void *)slot_Vec2i___add__, add_slot},
    {(void *)slot_Vec2i___div__, div_slot},
    {(void *)slot_Vec2i___mul__, mul_slot},
    {(void *)slot_Vec2i___lt__, lt_slot},
    {(void *)slot_Vec2i___ne__, ne_slot},
    {(void *)slot_Vec2i___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Vec2i[] = {
    {SIP_MLNAME_CAST(sipName_g), meth_Vec2i_g, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_r), meth_Vec2i_r, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_set), meth_Vec2i_set, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_x), meth_Vec2i_x, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_y), meth_Vec2i_y, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef__moogli_Vec2i = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Vec2i,
        {0}
    },
    {
        sipNameNr_Vec2i,
        {0, 0, 1},
        5, methods_Vec2i,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_Vec2i,
    init_type_Vec2i,
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
    dealloc_Vec2i,
    assign_Vec2i,
    array_Vec2i,
    copy_Vec2i,
    release_Vec2i,
    cast_Vec2i,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};
