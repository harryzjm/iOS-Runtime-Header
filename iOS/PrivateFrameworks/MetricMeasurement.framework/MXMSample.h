//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricMeasurement/NSCopying-Protocol.h>
#import <MetricMeasurement/NSSecureCoding-Protocol.h>

@class MXMSampleTag, NSData, NSMeasurement, NSNumber, NSSet, NSString, NSUnit;

@interface MXMSample : NSObject <NSSecureCoding, NSCopying>
{
    NSUnit *_unit;
    void *_underlyingValue;
    unsigned long long _underlyingValueLength;
    NSData *_date;
    unsigned long long _timestamp;
    NSSet *_attributes;
    unsigned long long _valueType;
    unsigned long long _length;
    MXMSampleTag *_tag;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) MXMSampleTag *tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) unsigned long long valueType; // @synthesize valueType=_valueType;
@property(readonly, copy, nonatomic) NSSet *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSData *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)convertToUnit:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTag:(id)arg1 attributes:(id)arg2 pixelBufferValue:(struct __CVBuffer *)arg3;
- (id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3 unit:(id)arg4 timestamp:(unsigned long long)arg5;
- (id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3 unit:(id)arg4;
- (id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3;
- (id)attributeWithName:(id)arg1;
- (const double *)numberValueDouble;
@property(readonly, nonatomic) unsigned long long unsignedValue;
@property(readonly, nonatomic) long long integerValue;
@property(readonly, nonatomic) double floatValue;
@property(readonly, copy, nonatomic) NSUnit *unit;
@property(readonly, copy, nonatomic) NSString *shortDesc;
@property(readonly, copy, nonatomic) NSNumber *asNumberValue;
@property(readonly, copy, nonatomic) NSMeasurement *asMeasurementValue;

@end
