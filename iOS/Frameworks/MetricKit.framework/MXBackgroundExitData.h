//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricKit/NSSecureCoding-Protocol.h>

@interface MXBackgroundExitData : NSObject <NSSecureCoding>
{
    unsigned long long _cumulativeNormalAppExitCount;
    unsigned long long _cumulativeMemoryResourceLimitExitCount;
    unsigned long long _cumulativeCPUResourceLimitExitCount;
    unsigned long long _cumulativeMemoryPressureExitCount;
    unsigned long long _cumulativeBadAccessExitCount;
    unsigned long long _cumulativeAbnormalExitCount;
    unsigned long long _cumulativeIllegalInstructionExitCount;
    unsigned long long _cumulativeAppWatchdogExitCount;
    unsigned long long _cumulativeSuspendedWithLockedFileExitCount;
    unsigned long long _cumulativeBackgroundTaskAssertionTimeoutExitCount;
    unsigned long long _cumulativeBackgroundFetchCompletionTimeoutExitCount;
    unsigned long long _cumulativeBackgroundURLSessionCompletionTimeoutExitCount;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) unsigned long long cumulativeBackgroundURLSessionCompletionTimeoutExitCount; // @synthesize cumulativeBackgroundURLSessionCompletionTimeoutExitCount=_cumulativeBackgroundURLSessionCompletionTimeoutExitCount;
@property(readonly) unsigned long long cumulativeBackgroundFetchCompletionTimeoutExitCount; // @synthesize cumulativeBackgroundFetchCompletionTimeoutExitCount=_cumulativeBackgroundFetchCompletionTimeoutExitCount;
@property(readonly) unsigned long long cumulativeBackgroundTaskAssertionTimeoutExitCount; // @synthesize cumulativeBackgroundTaskAssertionTimeoutExitCount=_cumulativeBackgroundTaskAssertionTimeoutExitCount;
@property(readonly) unsigned long long cumulativeSuspendedWithLockedFileExitCount; // @synthesize cumulativeSuspendedWithLockedFileExitCount=_cumulativeSuspendedWithLockedFileExitCount;
@property(readonly) unsigned long long cumulativeAppWatchdogExitCount; // @synthesize cumulativeAppWatchdogExitCount=_cumulativeAppWatchdogExitCount;
@property(readonly) unsigned long long cumulativeIllegalInstructionExitCount; // @synthesize cumulativeIllegalInstructionExitCount=_cumulativeIllegalInstructionExitCount;
@property(readonly) unsigned long long cumulativeAbnormalExitCount; // @synthesize cumulativeAbnormalExitCount=_cumulativeAbnormalExitCount;
@property(readonly) unsigned long long cumulativeBadAccessExitCount; // @synthesize cumulativeBadAccessExitCount=_cumulativeBadAccessExitCount;
@property(readonly) unsigned long long cumulativeMemoryPressureExitCount; // @synthesize cumulativeMemoryPressureExitCount=_cumulativeMemoryPressureExitCount;
@property(readonly) unsigned long long cumulativeCPUResourceLimitExitCount; // @synthesize cumulativeCPUResourceLimitExitCount=_cumulativeCPUResourceLimitExitCount;
@property(readonly) unsigned long long cumulativeMemoryResourceLimitExitCount; // @synthesize cumulativeMemoryResourceLimitExitCount=_cumulativeMemoryResourceLimitExitCount;
@property(readonly) unsigned long long cumulativeNormalAppExitCount; // @synthesize cumulativeNormalAppExitCount=_cumulativeNormalAppExitCount;
- (id)toDictionary;
- (id)initWithNormalAppExitCount:(unsigned long long)arg1 memoryResourceLimitExitCount:(unsigned long long)arg2 cpuResourceLimitExitCount:(unsigned long long)arg3 memoryPressureExitCount:(unsigned long long)arg4 badAccessExitCount:(unsigned long long)arg5 abnormalExitCount:(unsigned long long)arg6 illegalInstructionExitCount:(unsigned long long)arg7 appWatchDogExitCount:(unsigned long long)arg8 cumulativeSuspendedWithLockedFileExitCount:(unsigned long long)arg9 cumulativeBackgroundTaskAssertionTimeoutExitCount:(unsigned long long)arg10 cumulativeBackgroundURLSessionCompletionTimeoutExitCount:(unsigned long long)arg11 cumulativeBackgroundFetchCompletionTimeoutExitCount:(unsigned long long)arg12;
- (id)initWithNormalAppExitCount:(id)arg1 memoryResourceLimitExitCount:(id)arg2 cpuResourceLimitExitCount:(id)arg3 memoryPressureExitCount:(id)arg4 badAccessExitCount:(id)arg5 abnormalExitCount:(id)arg6 illegalInstructionExitCount:(id)arg7 appWatchDogExitCount:(id)arg8 cumulativeSuspendedWithLockedFileExitCount:(id)arg9 cumulativeBackgroundTaskAssertionTimeoutExitCount:(id)arg10;
- (id)initWithNormalAppExitCount:(id)arg1 memoryResourceLimitExitCount:(id)arg2 cpuResourceLimitExitCount:(id)arg3 badAccessExitCount:(id)arg4 abnormalExitCount:(id)arg5 illegalInstructionExitCount:(id)arg6 appWatchDogExitCount:(id)arg7 cumulativeSuspendedWithLockedFileExitCount:(id)arg8 cumulativeBackgroundTaskAssertionTimeoutExitCount:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
