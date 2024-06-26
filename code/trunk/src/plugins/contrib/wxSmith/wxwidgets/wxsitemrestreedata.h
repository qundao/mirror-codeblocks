/*
* This file is part of wxSmith plugin for Code::Blocks Studio
* Copyright (C) 2006-2007  Bartlomiej Swiecki
*
* wxSmith is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 3 of the License, or
* (at your option) any later version.
*
* wxSmith is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with wxSmith. If not, see <http://www.gnu.org/licenses/>.
*
* $Revision: 13453 $
* $Id: wxsitemrestreedata.h 13453 2024-02-17 03:11:41Z ollydbg $
* $HeadURL: svn://svn.code.sf.net/p/codeblocks/code/trunk/src/plugins/contrib/wxSmith/wxwidgets/wxsitemrestreedata.h $
*/

#ifndef WXSITEMRESTREEDATA_H
#define WXSITEMRESTREEDATA_H

#include "../wxsresourcetreeitemdata.h"

class wxsItem;

/** \brief Class responsible for operations on wxWidgets items inside resource tree */
class wxsItemResTreeData: public wxsResourceTreeItemData
{
    public:

        /** \brief Ctor */
        wxsItemResTreeData(wxsItem* Item);

        /** \brief Dctor */
        virtual ~wxsItemResTreeData();

    private:

        virtual void OnSelect();
        virtual void OnRightClick();
        virtual bool OnPopup(cb_unused long Id);

        wxsItem* m_Item;
};


#endif
