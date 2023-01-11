//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SensorKit/NSSecureCoding-Protocol.h>
#import <SensorKit/SRSampleExporting-Protocol.h>

@class NSString;

@interface SRWebUsage : NSObject <SRSampleExporting, NSSecureCoding>
{
    double _totalUsageTime;
}

+ (_Bool)supportsSecureCoding;
+ (id)webUsageWithTotalUsageTime:(double)arg1;
@property double totalUsageTime; // @synthesize totalUsageTime=_totalUsageTime;
@property(readonly, copy) NSString *description;
- (id)sr_dictionaryRepresentation;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
