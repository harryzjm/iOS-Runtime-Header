//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTestCore/XCTTelemetryLogging-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_group;

@interface XCTDaemonTelemetryLogger : NSObject <XCTTelemetryLogging>
{
    _Bool _isUITest;
    CDUnknownBlockType _eventDataSink;
    NSString *_sessionUUID;
    NSString *_osVersion;
    NSString *_hardwareModel;
    NSString *_frameworkVariant;
    NSString *_frameworkVersion;
    NSMutableDictionary *_localEvents;
    NSObject<OS_dispatch_group> *_submissionGroup;
}

- (void).cxx_destruct;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)logCompletionOfTestIdentifier:(id)arg1;
- (void)logAnalyticsForCompletionOfTestIdentifier:(id)arg1;
- (void)logUsageOfFunction:(id)arg1;
- (void)logUsageOfClass:(id)arg1 method:(id)arg2;
- (void)logEventWithName:(id)arg1;
- (id)initWithSessionUUID:(id)arg1 OSVersion:(id)arg2 hardwareModel:(id)arg3 frameworkVariant:(id)arg4 frameworkVersion:(id)arg5 isUITest:(_Bool)arg6 eventDataSink:(CDUnknownBlockType)arg7;
- (id)initWithEventDataSink:(CDUnknownBlockType)arg1;
- (id)initWithRunnerDaemonSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

