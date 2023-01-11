//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricKit/NSSecureCoding-Protocol.h>

@interface MXForegroundExitData : NSObject <NSSecureCoding>
{
    unsigned long long _cumulativeNormalAppExitCount;
    unsigned long long _cumulativeMemoryResourceLimitExitCount;
    unsigned long long _cumulativeBadAccessExitCount;
    unsigned long long _cumulativeAbnormalExitCount;
    unsigned long long _cumulativeIllegalInstructionExitCount;
    unsigned long long _cumulativeAppWatchdogExitCount;
    unsigned long long _cumulativeCPUResourceLimitExitCount;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) unsigned long long cumulativeCPUResourceLimitExitCount; // @synthesize cumulativeCPUResourceLimitExitCount=_cumulativeCPUResourceLimitExitCount;
@property(readonly) unsigned long long cumulativeAppWatchdogExitCount; // @synthesize cumulativeAppWatchdogExitCount=_cumulativeAppWatchdogExitCount;
@property(readonly) unsigned long long cumulativeIllegalInstructionExitCount; // @synthesize cumulativeIllegalInstructionExitCount=_cumulativeIllegalInstructionExitCount;
@property(readonly) unsigned long long cumulativeAbnormalExitCount; // @synthesize cumulativeAbnormalExitCount=_cumulativeAbnormalExitCount;
@property(readonly) unsigned long long cumulativeBadAccessExitCount; // @synthesize cumulativeBadAccessExitCount=_cumulativeBadAccessExitCount;
@property(readonly) unsigned long long cumulativeMemoryResourceLimitExitCount; // @synthesize cumulativeMemoryResourceLimitExitCount=_cumulativeMemoryResourceLimitExitCount;
@property(readonly) unsigned long long cumulativeNormalAppExitCount; // @synthesize cumulativeNormalAppExitCount=_cumulativeNormalAppExitCount;
- (id)toDictionary;
- (id)initWithNormalAppExitCount:(unsigned long long)arg1 withMemoryResourceLimitExitCount:(unsigned long long)arg2 withCPUResourceLimitExitCount:(unsigned long long)arg3 withBadAccessExitCount:(unsigned long long)arg4 withAbnormalExitCount:(unsigned long long)arg5 withIllegalInstructionExitCount:(unsigned long long)arg6 withAppWatchDogExitCount:(unsigned long long)arg7;
- (id)initWithNormalAppExitCount:(id)arg1 memoryResourceLimitExitCount:(id)arg2 cpuResourceLimitExitCount:(id)arg3 badAccessExitCount:(id)arg4 abnormalExitCount:(id)arg5 illegalInstructionExitCount:(id)arg6 appWatchDogExitCount:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
