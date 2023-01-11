//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/NSCopying-Protocol.h>
#import <ClassKit/NSSecureCoding-Protocol.h>

@interface CLSAggregatedValue <NSSecureCoding, NSCopying>
{
    int _aggregateType;
    double _value;
    long long _totalSampleCount;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int aggregateType; // @synthesize aggregateType=_aggregateType;
@property(nonatomic) long long totalSampleCount; // @synthesize totalSampleCount=_totalSampleCount;
@property(nonatomic) double value; // @synthesize value=_value;
- (id)dictionaryRepresentation;
- (id)description;
- (void)scalarMultiply:(double)arg1;
- (void)add:(id)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double normalized;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
