//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface NSProcessInfo : NSObject
{
    NSDictionary *environment;
    NSArray *arguments;
    NSString *hostName;
    NSString *name;
    long long automaticTerminationOptOutCounter;
}

+ (id)processInfo;
- (void)_reactivateActivity:(id)arg1;
- (void)_enableAutomaticTerminationOnly:(id)arg1;
- (void)_disableAutomaticTerminationOnly:(id)arg1;
@property _Bool automaticTerminationSupportEnabled;
- (void)enableAutomaticTermination:(id)arg1;
- (void)disableAutomaticTermination:(id)arg1;
- (long long)_suddenTerminationDisablingCount;
- (void)_exitWhenSuddenTerminationEnabledWithStatus:(int)arg1;
- (void)_exitIfSuddenTerminationEnabledWithStatus:(int)arg1;
- (void)enableSuddenTermination;
- (void)disableSuddenTermination;
@property(readonly) double systemUptime;
- (_Bool)isTranslated;
@property(readonly) unsigned long long physicalMemory;
@property(readonly) unsigned long long activeProcessorCount;
@property(readonly) unsigned long long processorCount;
- (_Bool)isOperatingSystemAtLeastVersion:(CDStruct_2ec95fd7)arg1;
@property(readonly) CDStruct_2ec95fd7 operatingSystemVersion;
@property(readonly, copy) NSString *operatingSystemVersionString;
- (id)operatingSystemName;
- (unsigned long long)operatingSystem;
- (id)userHomeDirectory;
@property(readonly, copy) NSString *userName;
@property(readonly, copy) NSString *globallyUniqueString;
@property(readonly) int processIdentifier;
@property(copy) NSString *processName;
@property(readonly, copy) NSString *hostName;
- (void)setArguments:(id)arg1;
@property(readonly, copy) NSArray *arguments;
- (void)_registerForHardwareStateNotifications;
@property(readonly, copy) NSDictionary *environment;
- (void)dealloc;
- (void)performExpiringActivityWithReason:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)endActivity:(id)arg1;
- (id)beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (void)endSystemBehaviorSuspension:(id)arg1;
- (id)beginSuspensionOfSystemBehaviors:(unsigned long long)arg1 reason:(id)arg2;
- (_Bool)isLowPowerModeEnabled;
- (long long)thermalState;

// Remaining properties
@property(readonly, copy) NSString *fullUserName;

@end

