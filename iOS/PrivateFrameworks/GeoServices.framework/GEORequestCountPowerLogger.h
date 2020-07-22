//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEORequestCountPowerLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_eventName;
    NSDate *_startDate;
    NSMutableDictionary *_clientInfo;
}

+ (_Bool)shouldIgnoreRequestType:(unsigned char)arg1 fromClientWithId:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_cancelXpcActivity;
- (void)_scheduleXpcActivity;
- (void)_flushToPowerLog;
- (void)startNewSessionWithName:(id)arg1;
- (void)incrementCountForClient:(id)arg1 requestType:(unsigned char)arg2;
- (void)dealloc;
- (id)init;

@end

