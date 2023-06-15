//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSessionFPFS, BRCItemGlobalID, BRCNotificationPipe, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCDataOrDocsScopeGatherer : NSObject
{
    BRCNotificationPipe *_pipe;
    CDUnknownBlockType _gatherReply;
    NSMutableArray *_gatheringAppLibraries;
    unsigned long long _gatheringRankMin;
    unsigned long long _gatheringRankMax;
    unsigned long long _lastSentRank;
    NSString *_gatheringNamePrefix;
    BRCAccountSessionFPFS *_session;
    _Bool _includesDeadItems;
    _Bool _invalidated;
    BRCItemGlobalID *_gatheredChildrenItemGlobalID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BRCItemGlobalID *gatheredChildrenItemGlobalID; // @synthesize gatheredChildrenItemGlobalID=_gatheredChildrenItemGlobalID;
- (void)dealloc;
- (void)invalidate;
- (void)done;
- (CDUnknownBlockType)_popGatherReply;
- (void)gatherWithBatchSize:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithNotificationPipe:(id)arg1 appLibraries:(id)arg2 startingRank:(unsigned long long)arg3 maxRank:(unsigned long long)arg4 withDeadItems:(_Bool)arg5 gatherReply:(CDUnknownBlockType)arg6;

@end

