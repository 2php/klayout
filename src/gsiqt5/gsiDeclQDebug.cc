
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQDebug.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDebug>
#include <QIODevice>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDebug

//  Constructor QDebug::QDebug(QIODevice *device)


static void _init_ctor_QDebug_1447 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return_new<QDebug> ();
}

static void _call_ctor_QDebug_1447 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = args.read<QIODevice * > (heap);
  ret.write<QDebug *> (new QDebug (arg1));
}


//  Constructor QDebug::QDebug(QString *string)


static void _init_ctor_QDebug_1334 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("string");
  decl->add_arg<QString * > (argspec_0);
  decl->set_return_new<QDebug> ();
}

static void _call_ctor_QDebug_1334 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QString *arg1 = args.read<QString * > (heap);
  ret.write<QDebug *> (new QDebug (arg1));
}


//  Constructor QDebug::QDebug(QtMsgType t)


static void _init_ctor_QDebug_1346 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const qt_gsi::Converter<QtMsgType>::target_type & > (argspec_0);
  decl->set_return_new<QDebug> ();
}

static void _call_ctor_QDebug_1346 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QtMsgType>::target_type & arg1 = args.read<const qt_gsi::Converter<QtMsgType>::target_type & > (heap);
  ret.write<QDebug *> (new QDebug (qt_gsi::QtToCppAdaptor<QtMsgType>(arg1).cref()));
}


//  Constructor QDebug::QDebug(const QDebug &o)


static void _init_ctor_QDebug_1881 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QDebug & > (argspec_0);
  decl->set_return_new<QDebug> ();
}

static void _call_ctor_QDebug_1881 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDebug &arg1 = args.read<const QDebug & > (heap);
  ret.write<QDebug *> (new QDebug (arg1));
}


// bool QDebug::autoInsertSpaces()


static void _init_f_autoInsertSpaces_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_autoInsertSpaces_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QDebug *)cls)->autoInsertSpaces ());
}


// QDebug &QDebug::maybeQuote(char c)


static void _init_f_maybeQuote_850 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c", true, "'\"'");
  decl->add_arg<char > (argspec_0);
  decl->set_return<QDebug & > ();
}

static void _call_f_maybeQuote_850 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  char arg1 = args ? args.read<char > (heap) : (char)('"');
  ret.write<QDebug & > ((QDebug &)((QDebug *)cls)->maybeQuote (arg1));
}


// QDebug &QDebug::maybeSpace()


static void _init_f_maybeSpace_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDebug & > ();
}

static void _call_f_maybeSpace_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDebug & > ((QDebug &)((QDebug *)cls)->maybeSpace ());
}


// QDebug &QDebug::noquote()


static void _init_f_noquote_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDebug & > ();
}

static void _call_f_noquote_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDebug & > ((QDebug &)((QDebug *)cls)->noquote ());
}


// QDebug &QDebug::nospace()


static void _init_f_nospace_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDebug & > ();
}

static void _call_f_nospace_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDebug & > ((QDebug &)((QDebug *)cls)->nospace ());
}


// QDebug &QDebug::operator<<(const QString &t)


static void _init_f_operator_lt__lt__2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QDebug & > ();
}

static void _call_f_operator_lt__lt__2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QDebug & > ((QDebug &)((QDebug *)cls)->operator<< (arg1));
}


// QDebug &QDebug::operator=(const QDebug &other)


static void _init_f_operator_eq__1881 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDebug & > (argspec_0);
  decl->set_return<QDebug & > ();
}

static void _call_f_operator_eq__1881 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDebug &arg1 = args.read<const QDebug & > (heap);
  ret.write<QDebug & > ((QDebug &)((QDebug *)cls)->operator= (arg1));
}


// QDebug &QDebug::quote()


static void _init_f_quote_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDebug & > ();
}

static void _call_f_quote_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDebug & > ((QDebug &)((QDebug *)cls)->quote ());
}


// QDebug &QDebug::resetFormat()


static void _init_f_resetFormat_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDebug & > ();
}

static void _call_f_resetFormat_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDebug & > ((QDebug &)((QDebug *)cls)->resetFormat ());
}


// void QDebug::setAutoInsertSpaces(bool b)


static void _init_f_setAutoInsertSpaces_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("b");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAutoInsertSpaces_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDebug *)cls)->setAutoInsertSpaces (arg1);
}


// QDebug &QDebug::space()


static void _init_f_space_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDebug & > ();
}

static void _call_f_space_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDebug & > ((QDebug &)((QDebug *)cls)->space ());
}


// void QDebug::swap(QDebug &other)


static void _init_f_swap_1186 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QDebug & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1186 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QDebug &arg1 = args.read<QDebug & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDebug *)cls)->swap (arg1);
}



namespace gsi
{

static gsi::Methods methods_QDebug () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDebug::QDebug(QIODevice *device)\nThis method creates an object of class QDebug.", &_init_ctor_QDebug_1447, &_call_ctor_QDebug_1447);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDebug::QDebug(QString *string)\nThis method creates an object of class QDebug.", &_init_ctor_QDebug_1334, &_call_ctor_QDebug_1334);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDebug::QDebug(QtMsgType t)\nThis method creates an object of class QDebug.", &_init_ctor_QDebug_1346, &_call_ctor_QDebug_1346);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDebug::QDebug(const QDebug &o)\nThis method creates an object of class QDebug.", &_init_ctor_QDebug_1881, &_call_ctor_QDebug_1881);
  methods += new qt_gsi::GenericMethod (":autoInsertSpaces", "@brief Method bool QDebug::autoInsertSpaces()\n", true, &_init_f_autoInsertSpaces_c0, &_call_f_autoInsertSpaces_c0);
  methods += new qt_gsi::GenericMethod ("maybeQuote", "@brief Method QDebug &QDebug::maybeQuote(char c)\n", false, &_init_f_maybeQuote_850, &_call_f_maybeQuote_850);
  methods += new qt_gsi::GenericMethod ("maybeSpace", "@brief Method QDebug &QDebug::maybeSpace()\n", false, &_init_f_maybeSpace_0, &_call_f_maybeSpace_0);
  methods += new qt_gsi::GenericMethod ("noquote", "@brief Method QDebug &QDebug::noquote()\n", false, &_init_f_noquote_0, &_call_f_noquote_0);
  methods += new qt_gsi::GenericMethod ("nospace", "@brief Method QDebug &QDebug::nospace()\n", false, &_init_f_nospace_0, &_call_f_nospace_0);
  methods += new qt_gsi::GenericMethod ("<<", "@brief Method QDebug &QDebug::operator<<(const QString &t)\n", false, &_init_f_operator_lt__lt__2025, &_call_f_operator_lt__lt__2025);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDebug &QDebug::operator=(const QDebug &other)\n", false, &_init_f_operator_eq__1881, &_call_f_operator_eq__1881);
  methods += new qt_gsi::GenericMethod ("quote", "@brief Method QDebug &QDebug::quote()\n", false, &_init_f_quote_0, &_call_f_quote_0);
  methods += new qt_gsi::GenericMethod ("resetFormat", "@brief Method QDebug &QDebug::resetFormat()\n", false, &_init_f_resetFormat_0, &_call_f_resetFormat_0);
  methods += new qt_gsi::GenericMethod ("setAutoInsertSpaces|autoInsertSpaces=", "@brief Method void QDebug::setAutoInsertSpaces(bool b)\n", false, &_init_f_setAutoInsertSpaces_864, &_call_f_setAutoInsertSpaces_864);
  methods += new qt_gsi::GenericMethod ("space", "@brief Method QDebug &QDebug::space()\n", false, &_init_f_space_0, &_call_f_space_0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QDebug::swap(QDebug &other)\n", false, &_init_f_swap_1186, &_call_f_swap_1186);
  return methods;
}

gsi::Class<QDebug> decl_QDebug ("QDebug",
  methods_QDebug (),
  "@qt\n@brief Binding of QDebug");


GSIQT_PUBLIC gsi::Class<QDebug> &qtdecl_QDebug () { return decl_QDebug; }

}
