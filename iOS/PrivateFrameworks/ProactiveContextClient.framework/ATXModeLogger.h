//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATXModeDuetHelper, NSDateFormatter, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXModeLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDateFormatter *_formatter;
    NSUserDefaults *_defaults;
    ATXModeDuetHelper *_duetHelper;
    _Bool _shareDiagnosticDataWrapper;
}

- (void).cxx_destruct;
@property _Bool shareDiagnosticDataWrapper; // @synthesize shareDiagnosticDataWrapper=_shareDiagnosticDataWrapper;
- (void)_updateLastSubmissionDate:(id)arg1;
- (id)_lastSubmissionDate;
- (id)_userDefaults;
- (id)_userID;
- (void)logEventsFromModeStream;
- (id)stringForDate:(id)arg1;
- (id)initWithDuetHelper:(id)arg1;

@end
