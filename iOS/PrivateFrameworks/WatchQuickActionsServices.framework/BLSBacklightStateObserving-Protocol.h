//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WatchQuickActionsServices/NSObject-Protocol.h>

@class BLSBacklightChangeEvent, NSArray;
@protocol BLSBacklightStateObservable;

@protocol BLSBacklightStateObserving <NSObject>

@optional
- (void)backlight:(id <BLSBacklightStateObservable>)arg1 performingEvent:(BLSBacklightChangeEvent *)arg2;
- (void)backlight:(id <BLSBacklightStateObservable>)arg1 deactivatingWithEvent:(BLSBacklightChangeEvent *)arg2;
- (void)backlight:(id <BLSBacklightStateObservable>)arg1 activatingWithEvent:(BLSBacklightChangeEvent *)arg2;
- (void)backlight:(id <BLSBacklightStateObservable>)arg1 didChangeAlwaysOnEnabled:(_Bool)arg2;
- (void)backlight:(id <BLSBacklightStateObservable>)arg1 didCompleteUpdateToState:(long long)arg2 forEvent:(BLSBacklightChangeEvent *)arg3;
- (void)backlight:(id <BLSBacklightStateObservable>)arg1 didCompleteUpdateToState:(long long)arg2 forEvents:(NSArray *)arg3 abortedEvents:(NSArray *)arg4;
@end

