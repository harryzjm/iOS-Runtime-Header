//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MXResourceExceptionMetric
{
    unsigned long long _cumulativeMemoryResourceExceptionCount;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) unsigned long long cumulativeMemoryResourceExceptionCount; // @synthesize cumulativeMemoryResourceExceptionCount=_cumulativeMemoryResourceExceptionCount;
- (id)toDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCumulativeMemoryResourceExceptionCount:(unsigned long long)arg1;

@end
