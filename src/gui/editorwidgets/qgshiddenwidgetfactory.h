/***************************************************************************
    qgshiddenwidgetfactory.h
     --------------------------------------
    Date                 : 5.1.2014
    Copyright            : (C) 2014 Matthias Kuhn
    Email                : matthias at opengis dot ch
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSHIDDENWIDGETFACTORY_H
#define QGSHIDDENWIDGETFACTORY_H

#include "qgseditorwidgetfactory.h"

/** \class QgsHiddenWidgetFactory
 * \note not available in Python bindings
 */

class GUI_EXPORT QgsHiddenWidgetFactory : public QgsEditorWidgetFactory
{
  public:
    QgsHiddenWidgetFactory( const QString& name );

    // QgsEditorWidgetFactory interface
  public:
    QgsEditorWidgetWrapper* create( QgsVectorLayer* vl, int fieldIdx, QWidget* editor, QWidget* parent ) const override;
    QgsEditorConfigWidget* configWidget( QgsVectorLayer* vl, int fieldIdx, QWidget* parent ) const override;
};

#endif // QGSHIDDENWIDGETFACTORY_H
