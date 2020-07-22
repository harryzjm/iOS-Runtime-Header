//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSEventMonitorDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface CSPolicy : NSObject <CSEventMonitorDelegate>
{
    NSMutableArray *_monitors;
    NSMutableArray *_conditions;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)CSEventMonitorDidReceiveEvent:(id)arg1;
- (void)notifyCallback:(_Bool)arg1;
- (_Bool)isEnabled;
- (_Bool)_checkAllConditionsEnabled;
- (void)subscribeEventMonitor:(id)arg1;
- (void)addConditions:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

