//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

@interface PGProgressCallChecker : NSObject
{
    double _timestampOfLastCallToProgress;
    double _timestampOfLastRecordedCallToProgress;
    unsigned long long _numberOfCallsToProgressSinceLastRecordedCall;
    NSObject<OS_os_log> *_loggingConnection;
    _Bool _wasStopped;
    NSString *_taskName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *taskName; // @synthesize taskName=_taskName;
- (void)checkCallsWithProgress:(double)arg1 stop:(_Bool)arg2;
- (id)initWithTaskName:(id)arg1;
- (id)initWithTaskName:(id)arg1 loggingConnection:(id)arg2;

@end
