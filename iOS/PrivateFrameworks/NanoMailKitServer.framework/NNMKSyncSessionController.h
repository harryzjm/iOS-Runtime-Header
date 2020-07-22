//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface NNMKSyncSessionController : NSObject
{
    NSMutableSet *_messageIdsToIgnoreStatusUpdates;
    NSMutableDictionary *_notificationPayloadAcks;
}

@property(retain, nonatomic) NSMutableDictionary *notificationPayloadAcks; // @synthesize notificationPayloadAcks=_notificationPayloadAcks;
@property(retain, nonatomic) NSMutableSet *messageIdsToIgnoreStatusUpdates; // @synthesize messageIdsToIgnoreStatusUpdates=_messageIdsToIgnoreStatusUpdates;
- (void).cxx_destruct;
- (id)init;

@end
