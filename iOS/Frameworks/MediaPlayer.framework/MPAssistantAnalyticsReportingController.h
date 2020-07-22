//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface MPAssistantAnalyticsReportingController : NSObject
{
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSString *_lastSiriReferenceIdentifierWithLikelyToKeepUp;
    NSHashTable *_players;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_attemptLikelyToKeepUpReportingEventWithPlayer:(id)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)logAssistantEvent:(id)arg1 withTimestamp:(id)arg2;
- (void)logAssistantEvent:(id)arg1;
- (void)unregisterPlayer:(id)arg1;
- (void)registerPlayer:(id)arg1;
- (id)_init;

@end

