//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BRCSharedServerZone, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharedClientZone
{
    NSMutableDictionary *_shareAcceptationByItemID;
}

- (void).cxx_destruct;
- (void)removeAllShareAcceptationSidefaults;
- (id)shareAcceptOperationForItemID:(id)arg1;
- (void)addAcceptOperation:(id)arg1 forItemID:(id)arg2;
- (id)shareAcceptationSidefaultEnumerator;
- (id)rootItemID;
- (void)setServerZone:(id)arg1;
@property(readonly, nonatomic) BRCSharedServerZone *sharedZone;
- (id)asSharedClientZone;
@property(readonly, nonatomic) _Bool isSharedZone;
@property(readonly, nonatomic) NSString *ownerName;

// Remaining properties
@property(readonly, nonatomic) _Bool isPrivateZone; // @dynamic isPrivateZone;

@end

