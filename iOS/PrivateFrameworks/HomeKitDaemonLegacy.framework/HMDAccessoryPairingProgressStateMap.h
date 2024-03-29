//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessoryPairingProgressStateMap : NSObject
{
    struct os_unfair_lock_s _accessoryPairingProgressStateMapLock;
    NSMutableDictionary *_progressStateMap;
    NSString *_lastProgressState;
    NSString *_longestProgressState;
    NSDate *_lastProgressStateEventTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastProgressStateEventTime; // @synthesize lastProgressStateEventTime=_lastProgressStateEventTime;
@property(retain, nonatomic) NSString *longestProgressState; // @synthesize longestProgressState=_longestProgressState;
@property(retain, nonatomic) NSString *lastProgressState; // @synthesize lastProgressState=_lastProgressState;
@property(retain, nonatomic) NSMutableDictionary *progressStateMap; // @synthesize progressStateMap=_progressStateMap;
- (double)getTimeDurationForLongestProgressState;
- (void)updateWithProgressState:(id)arg1 date:(id)arg2;
- (id)initWithDate:(id)arg1;

@end

