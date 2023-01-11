//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOXPCActivity, NSDate, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GEORequestCountPowerLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_eventName;
    NSDate *_startDate;
    NSMutableDictionary *_clientInfo;
    GEOXPCActivity *_activity;
}

+ (_Bool)shouldIgnoreRequestType:(int)arg1 fromClientWithId:(id)arg2;
+ (void)cancelOldActivities;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_cancelXpcActivity;
- (void)_scheduleXpcActivity;
- (void)_flushToPowerLog;
- (void)dealloc;
- (void)startNewSessionWithName:(id)arg1;
- (void)incrementCountForClient:(id)arg1 requestType:(int)arg2;
- (id)init;

@end
