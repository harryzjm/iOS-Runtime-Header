//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MPSectionedIdentifierListItemEntry
{
    _Bool _hasClones;
    _Bool _dataSourceCloned;
    _Bool _dataSourceMoved;
    _Bool _userRemoved;
    _Bool _userMoved;
    _Bool _userCloned;
    NSString *_itemIdentifier;
    MPSectionedIdentifierListItemEntry *_rootEntry;
    NSMutableArray *_clonedEntries;
}

+ (_Bool)supportsSecureCoding;
+ (id)itemEntryWithSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2;
+ (id)itemEntryWithSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 generationPrefix:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isUserCloned) _Bool userCloned; // @synthesize userCloned=_userCloned;
@property(readonly, nonatomic, getter=isUserMoved) _Bool userMoved; // @synthesize userMoved=_userMoved;
@property(readonly, nonatomic, getter=isUserRemoved) _Bool userRemoved; // @synthesize userRemoved=_userRemoved;
@property(readonly, nonatomic, getter=isDataSourceMoved) _Bool dataSourceMoved; // @synthesize dataSourceMoved=_dataSourceMoved;
@property(readonly, nonatomic, getter=isDataSourceCloned) _Bool dataSourceCloned; // @synthesize dataSourceCloned=_dataSourceCloned;
@property(retain, nonatomic) NSMutableArray *clonedEntries; // @synthesize clonedEntries=_clonedEntries;
@property(readonly, nonatomic) _Bool hasClones; // @synthesize hasClones=_hasClones;
@property(nonatomic) __weak MPSectionedIdentifierListItemEntry *rootEntry; // @synthesize rootEntry=_rootEntry;
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (long long)_generationNumber;
- (void)prepareForDealloc;
- (id)newClonedEntry;
@property(readonly, nonatomic) MPSectionedIdentifierListItemEntry *latestDataSourceClone;
@property(readonly, nonatomic) MPSectionedIdentifierListItemEntry *latestUserClone;
@property(readonly, nonatomic) CDStruct_d4f770cf state;
@property(readonly, nonatomic, getter=isRemoved) _Bool removed;
- (void)setUserCloned;
- (void)setUserMoved;
- (void)setUserRemoved;
- (void)setDataSourceMoved;
- (void)setDataSourceCloned;
- (_Bool)isDataSourceRemoved;
- (void)setDataSourceRemoved;
- (id)stringRepresentation;
@property(readonly, nonatomic) long long entryType;
@property(readonly, copy) NSString *description;
- (id)_stateDumpObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long branchDepth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *sectionIdentifier;
@property(readonly) Class superclass;

@end

