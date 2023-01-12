//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPAnalytics, NSString;
@protocol OS_os_log;

@interface PHATaskHealthRecorder : NSObject
{
    NSObject<OS_os_log> *_loggingConnection;
    CPAnalytics *_analytics;
    NSString *_taskName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *taskName; // @synthesize taskName=_taskName;
- (void)recordTaskCompletionWithTaskCompletionState:(unsigned long long)arg1 taskDuration:(id)arg2 taskProgress:(id)arg3 lastRunDate:(id)arg4;
- (id)initWithTaskName:(id)arg1 loggingConnection:(id)arg2 analytics:(id)arg3;

@end
