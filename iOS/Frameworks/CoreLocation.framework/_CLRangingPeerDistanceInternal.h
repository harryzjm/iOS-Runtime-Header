//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, _CLRangingPeer;

@interface _CLRangingPeerDistanceInternal : NSObject
{
    _CLRangingPeer *_peer;
    NSDate *_date;
    NSNumber *_distanceMeters;
    NSNumber *_accuracyMeters;
    _Bool _initiator;
    _Bool _shouldUnlock;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(_Bool)arg5 shouldUnlock:(_Bool)arg6;

@end

