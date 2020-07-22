//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/NSSecureCoding-Protocol.h>

@interface PHAMonitoringProcessInfo : NSObject <NSSecureCoding>
{
    double _cpuUsagePercentage;
    unsigned long long _memoryResidentBytes;
    double _powerScore;
}

+ (_Bool)supportsSecureCoding;
@property double powerScore; // @synthesize powerScore=_powerScore;
@property unsigned long long memoryResidentBytes; // @synthesize memoryResidentBytes=_memoryResidentBytes;
@property double cpuUsagePercentage; // @synthesize cpuUsagePercentage=_cpuUsagePercentage;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
