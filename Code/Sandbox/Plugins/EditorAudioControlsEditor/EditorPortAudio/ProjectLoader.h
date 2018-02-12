// Copyright 2001-2018 Crytek GmbH / Crytek Group. All rights reserved.

#pragma once

#include "ImplItem.h"

#include <CrySystem/XML/IXml.h>
#include <SystemTypes.h>

namespace ACE
{
namespace PortAudio
{
class CProjectLoader final
{
public:

	CProjectLoader(string const& sAssetsPath, CImplItem& rootItem);

private:

	CImplItem* CreateItem(string const& name, string const& path, EImpltemType const type, CImplItem& rootItem);
	void       LoadFolder(string const& folderPath, CImplItem& parent);

	string const m_assetsPath;
};
} // namespace PortAudio
} // namespace ACE
