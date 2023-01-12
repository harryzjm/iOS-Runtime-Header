//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@class NSArray, NSSet;

@interface PLInterLibraryTransferOptions : NSObject <NSSecureCoding>
{
    _Bool _updateExistingObjects;
    _Bool _allowSavedAssetTypeChanges;
    _Bool _ignoreMissingSourceFiles;
    unsigned short _allowDeleteOfSavedAssetTypes;
    NSSet *_excludedEntityNames;
    NSArray *_keysForDeDupe;
}

+ (_Bool)supportsSecureCoding;
+ (id)newTransferOptionsForSyndicationToSystemPhotoLibrary;
- (void).cxx_destruct;
@property unsigned short allowDeleteOfSavedAssetTypes; // @synthesize allowDeleteOfSavedAssetTypes=_allowDeleteOfSavedAssetTypes;
@property(copy) NSArray *keysForDeDupe; // @synthesize keysForDeDupe=_keysForDeDupe;
@property _Bool ignoreMissingSourceFiles; // @synthesize ignoreMissingSourceFiles=_ignoreMissingSourceFiles;
@property _Bool allowSavedAssetTypeChanges; // @synthesize allowSavedAssetTypeChanges=_allowSavedAssetTypeChanges;
@property _Bool updateExistingObjects; // @synthesize updateExistingObjects=_updateExistingObjects;
@property(copy) NSSet *excludedEntityNames; // @synthesize excludedEntityNames=_excludedEntityNames;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)_sortedEntityNamesAsString;

@end
