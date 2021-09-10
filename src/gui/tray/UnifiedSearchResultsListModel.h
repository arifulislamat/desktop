/*
 * Copyright (C) by Klaas Freitag <freitag@owncloud.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#ifndef UNIFIEDSEARCHRESULTSLISTMODEL_H
#define UNIFIEDSEARCHRESULTSLISTMODEL_H

#include <QtCore>

class QJsonDocument;

namespace OCC {

Q_DECLARE_LOGGING_CATEGORY(lcActivity)

class AccountState;
class ConflictDialog;

/**
 * @brief The UnifiedSearchResultsListModel
 * @ingroup gui
 *
 * Simple list model to provide the list view with data for the Unified Search results.
 */

class UnifiedSearchResultsListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit UnifiedSearchResultsListModel(AccountState *accountState, QObject *parent = nullptr);

    QVariant data(const QModelIndex &index, int role) const override;
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

public slots:
    void slotSearch(const QString &searchTerm);

//private slots:
    //void slotResultsReceived(const QJsonDocument &json, int statusCode);
};
}

#endif // UNIFIEDSEARCHRESULTSLISTMODEL_H
