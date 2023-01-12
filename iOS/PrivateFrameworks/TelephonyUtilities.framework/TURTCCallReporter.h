//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TUCallCenter;
@protocol OS_dispatch_queue;

@interface TURTCCallReporter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_callUUIDToConversation;
    TUCallCenter *_callCenter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TUCallCenter *callCenter; // @synthesize callCenter=_callCenter;
@property(readonly, nonatomic) NSMutableDictionary *callUUIDToConversation; // @synthesize callUUIDToConversation=_callUUIDToConversation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)serviceName:(id)arg1 withConversation:(id)arg2;
- (id)clientName:(id)arg1;
- (id)reportingSessionForCall:(id)arg1 withConversation:(id)arg2;
- (id)rtcCallInfoDictionary:(id)arg1 withConversation:(id)arg2;
- (void)report:(id)arg1 withConversation:(id)arg2;
- (void)callStatusChangedNotification:(id)arg1;
- (id)initWithCallCenter:(id)arg1;

@end
