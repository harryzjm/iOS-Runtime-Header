//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BRCAliasItem, BRCDirectoryItem, BRCDocumentItem, NSString;
@protocol BRCFSRooted;

__attribute__((visibility("hidden")))
@interface BRCSymlinkItem
{
    NSString *_symlinkTarget;
}

@property(readonly, nonatomic) NSString *symlinkTarget; // @synthesize symlinkTarget=_symlinkTarget;
- (void).cxx_destruct;
- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (_Bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (void)readTargetFromRelativePathAndSyncUp:(id)arg1;
- (unsigned long long)diffAgainstLocalItem:(id)arg1;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (id)descriptionWithContext:(id)arg1;
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id *)arg4;
- (id)_initWithLocalItem:(id)arg1;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (_Bool)isSymLink;
- (id)asSymlink;

// Remaining properties
@property(readonly, nonatomic) BRCAliasItem *asBRAlias; // @dynamic asBRAlias;
@property(readonly, nonatomic) BRCDirectoryItem *asDirectory; // @dynamic asDirectory;
@property(readonly, nonatomic) BRCDocumentItem *asDocument; // @dynamic asDocument;
@property(readonly, nonatomic) BRCDirectoryItem<BRCFSRooted> *asFSRoot; // @dynamic asFSRoot;

@end

