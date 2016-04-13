#ifndef DOTA2API_GLOBAL_H
#define DOTA2API_GLOBAL_H

#include <QtCore/qglobal.h>
#include "exceptions/matchhistorynotavailableexception.h"

#if defined(DOTA2API_LIBRARY)
#  define DOTA2APISHARED_EXPORT Q_DECL_EXPORT
#else
#  define DOTA2APISHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DOTA2API_GLOBAL_H
