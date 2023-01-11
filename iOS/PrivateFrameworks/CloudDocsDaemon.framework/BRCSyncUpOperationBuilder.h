//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCSyncUpOperation, BRCUserDefaults, NSMutableSet;

__attribute__((visibility("hidden")))
@interface BRCSyncUpOperationBuilder : NSObject
{
    NSMutableSet *_fullyChainedParentIDWhitelist;
    NSMutableSet *_halfChainedParentIDWhitelist;
    BRCAccountSession *_session;
    BRCSyncUpOperation *_op;
    BRCUserDefaults *_defaults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BRCUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) BRCSyncUpOperation *op; // @synthesize op=_op;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
- (float)addItem:(id)arg1;
- (float)addEditOfSymlink:(id)arg1;
- (float)addDeletionOfFinderBookmark:(id)arg1;
- (float)addEditOfFinderBookmark:(id)arg1;
- (float)addEditOfDocument:(id)arg1;
- (float)addDeletionOfDocument:(id)arg1;
- (float)addDeletionOfDirectory:(id)arg1;
- (float)addEditOfDirectory:(id)arg1;
- (void)handleEditOfSharedItem:(id)arg1;
- (void)handleDeletionOfSharedItem:(id)arg1;
- (float)fakeSyncForItem:(id)arg1 serverItem:(id)arg2 inZone:(id)arg3;
- (void)prepareAppLibraryRootSyncUpForItem:(id)arg1;
- (float)addDeletionOfSharedTopLevelItem:(id)arg1;
- (float)addEditOfSharedTopLevelItem:(id)arg1;
- (float)addDeletionOfRecordID:(id)arg1 ckInfo:(id)arg2;
- (float)addDeletionOfItem:(id)arg1;
- (_Bool)checkIfSyncAllowedInSharedZoneForItem:(id)arg1;
- (unsigned char)shouldPCSChainStatusForItem:(id)arg1;
- (id)init;

@end
