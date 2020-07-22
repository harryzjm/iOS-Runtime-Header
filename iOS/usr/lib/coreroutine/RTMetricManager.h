//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWDServerConnection, NSArray, RTInvocationDispatcher, RTManagedConfiguration, RTPlatform;
@protocol OS_dispatch_queue;

@interface RTMetricManager : NSObject
{
    _Bool _ready;
    RTInvocationDispatcher *_dispatcher;
    RTPlatform *_platform;
    NSArray *_configuredMetricClasses;
    AWDServerConnection *_awdServerConnection;
    RTManagedConfiguration *_managedConfigurationManager;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)metricForType:(unsigned long long)arg1;
+ (id)productionMetrics;
+ (id)addonMetricFromAddon:(id)arg1;
+ (int)modelTypeFromSupportingEventClass:(Class)arg1;
+ (id)addonStringFromType:(int)arg1;
+ (double)doubleWithSignificantDigits:(double)arg1 digits:(int)arg2;
+ (int)intWithSignificantDigits:(int)arg1 digits:(int)arg2;
+ (int)doubleToInt:(double)arg1 shifts:(int)arg2;
+ (int)roundTimeInterval:(double)arg1 byIntervalUnit:(unsigned long long)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RTManagedConfiguration *managedConfigurationManager; // @synthesize managedConfigurationManager=_managedConfigurationManager;
@property(retain, nonatomic) AWDServerConnection *awdServerConnection; // @synthesize awdServerConnection=_awdServerConnection;
@property(retain, nonatomic) NSArray *configuredMetricClasses; // @synthesize configuredMetricClasses=_configuredMetricClasses;
@property(nonatomic) _Bool ready; // @synthesize ready=_ready;
@property(retain, nonatomic) RTPlatform *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) RTInvocationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
- (void).cxx_destruct;
- (id)createMetricForType:(unsigned long long)arg1;
- (_Bool)_routineConfiguredForMetric:(id)arg1;
- (void)_submitMetric:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)submitMetric:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)submitMetric:(id)arg1;
- (void)_submitMetricWithIdentifier:(id)arg1 dictionary:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)submitMetricWithIdentifier:(id)arg1 dictionary:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_releaseMetricPlaceholderForMetric:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_registerQueriableMetric:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)registerQueriableMetric:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)shutdown;
- (void)_setupWithConfiguredClasses:(id)arg1;
- (_Bool)_isDiagnosticsSubmissionAllowed;
- (void)_fetchDiagnosticsEnabled:(CDUnknownBlockType)arg1;
- (void)fetchDiagnosticsEnabled:(CDUnknownBlockType)arg1;
- (id)initWithAWDServerConnection:(id)arg1 configuredClasses:(id)arg2 managedConfigurationManager:(id)arg3 platform:(id)arg4;
- (id)initWithPlatform:(id)arg1;
- (id)init;
- (id)convertMetricWithIdentifier:(id)arg1 dictionary:(id)arg2;

@end

