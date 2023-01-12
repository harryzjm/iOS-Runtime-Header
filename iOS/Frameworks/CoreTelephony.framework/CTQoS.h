//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber;

@interface CTQoS : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_qci;
    NSNumber *_bitRateMax;
    NSNumber *_bitRateMin;
    NSArray *_filters;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) NSNumber *bitRateMin; // @synthesize bitRateMin=_bitRateMin;
@property(retain, nonatomic) NSNumber *bitRateMax; // @synthesize bitRateMax=_bitRateMax;
@property(retain, nonatomic) NSNumber *qci; // @synthesize qci=_qci;
@property(readonly, nonatomic) NSNumber *gbr;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
