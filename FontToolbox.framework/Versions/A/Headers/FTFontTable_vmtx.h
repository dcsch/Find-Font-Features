/*
	File:			FTFontTable_vmtx.h
 
	Contains:		C++ class individual TrueType font 'vmtx' tables
 
	Version:		Mac OS X
 
	Written by:		The Apple Font Group
 
	Copyright:		© 2006-2015 by Apple Inc. All rights reserved.
 
	File Ownership:
 
		DRI:				John Jenkins
 
		Other Contact:		Julio Gonzales
 
		Technology:			Apple Font Tools
 
	N.B., to the extent possible, this code observes the following naming conventions
		for variables
	Method or function *input* variables all have names beginning with "i"
	Method or function *output* variables all have names beginning with "o"
	Local variables all have names beginning with "t"
	Structure or class members all have names beginning with "f" (public members) or
		"_f" (private members)
	Constants all have names beginning with "k"
*/

#ifndef __FTFONTTABLE_VMTX__
#define __FTFONTTABLE_VMTX__

#include <Carbon/Carbon.h>
#include "FTFontTable.h"
#include "FTFontTable_hmtx.h"

/* ----------------------------------------------------------------------------------------- */

/* ALIGNMENT PRAGMA */

#pragma pack(push,2)

/* ----------------------------------------------------------------------------------------- */

/* NAMESPACE */

namespace ftx {
	
	/* ----------------------------------------------------------------------------------------- */
	
	/* CONSTANTS */
	
	/* ----------------------------------------------------------------------------------------- */
	
	/* TYPES */
	
	typedef HMTXEntry VMTXEntry;
	typedef HMTXTable VMTXTable;
	
	/* ----------------------------------------------------------------------------------------- */
	
	/* PROTOTYPES */
	
	class FTFontTable_vmtx : public FTFontTable_hmtx {
		
	public:
		
        static FTDictionary CreateFromXML(FTFont_sfnt *iFont, const FTString& iXML );
        
		enum {
			kTag = FOUR_CHAR_CODE( 'vmtx' )
		};
		
		FTFontTable_vmtx( FTFont_sfnt *iFont, FourCharCode iTag, ByteCount iOffset, ByteCount iLength, uint32_t iChecksum );
		FTFontTable_vmtx( FTFont_sfnt *iFont, FourCharCode iTag, CFDataRef iData, uint32_t iChecksum = FTFontTable::kInvalidChecksum );
		FTFontTable_vmtx( const FTFontTable_vmtx& iOther );
		virtual ~FTFontTable_vmtx();
		
		FTFontTable_vmtx& operator=( const FTFontTable_vmtx& iOther );
		
		virtual FourCharCode	GetTag() const;
		
	protected:
		
		FTFontTable_vmtx();
		
	private:
		
	};
	
}

#pragma pack(pop)

#endif /* __FTFONTTABLE_VMTX__ */