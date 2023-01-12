//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSDictionary, NSMutableDictionary;

@interface PAAccessLoggerState : NSObject
{
    NSMutableDictionary *_ongoingAccessIntervals;
    NSMutableDictionary *_slotByAccessForOngoingAccessInterval;
    _Bool _loggingEnabled;
    long long _topAccessIntervalSlot;
    NSCache *_negativeAccessCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *slotByAccessForOngoingAccessInterval; // @synthesize slotByAccessForOngoingAccessInterval=_slotByAccessForOngoingAccessInterval;
@property(readonly, nonatomic) NSCache *negativeAccessCache; // @synthesize negativeAccessCache=_negativeAccessCache;
@property(readonly, nonatomic) NSDictionary *ongoingAccessIntervals; // @synthesize ongoingAccessIntervals=_ongoingAccessIntervals;
@property(nonatomic) long long topAccessIntervalSlot; // @synthesize topAccessIntervalSlot=_topAccessIntervalSlot;
@property(nonatomic) _Bool loggingEnabled; // @synthesize loggingEnabled=_loggingEnabled;
- (id)takeOngoingAccessIntervalStateForAccess:(id)arg1;
- (id)takeOngoingAccessIntervalStateForSlot:(id)arg1;
- (void)setOngoingAccessIntervalState:(id)arg1 forSlot:(id)arg2;
- (id)init;

@end
