//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRContainerHelper-Protocol.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCDaemonContainerHelper : NSObject <BRContainerHelper>
{
    NSSet *_disabledBundleIDs;
    NSSet *_knownBundleIDs;
}

- (void).cxx_destruct;
- (id)itemIDForURL:(id)arg1 error:(id *)arg2;
- (unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id *)arg3;
- (unsigned short)br_capabilityToMoveFromLookup:(id)arg1 toNewParent:(id)arg2 session:(id)arg3 error:(id *)arg4;
- (_Bool)cloudSyncTCCDisabledForContainerMeta:(id)arg1;
- (id)fetchContainerForURL:(id)arg1;
- (id)fetchAllContainersByIDWithError:(id *)arg1;
- (_Bool)canFetchAllContainersByID;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
