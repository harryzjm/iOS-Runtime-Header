//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceMemos/NSObject-Protocol.h>

@protocol RCTimeController;

@protocol RCTimeObserver <NSObject>

@optional
- (void)timeController:(id <RCTimeController>)arg1 didChangeCurrentTime:(double)arg2 didChangeDuration:(double)arg3;
- (void)timeController:(id <RCTimeController>)arg1 didChangeCurrentTime:(double)arg2 didJumpTime:(_Bool)arg3;
- (void)timeController:(id <RCTimeController>)arg1 didChangeCurrentTime:(double)arg2;
- (void)timeController:(id <RCTimeController>)arg1 didChangeState:(long long)arg2;
- (void)timeController:(id <RCTimeController>)arg1 didChangeRate:(float)arg2;
@end
