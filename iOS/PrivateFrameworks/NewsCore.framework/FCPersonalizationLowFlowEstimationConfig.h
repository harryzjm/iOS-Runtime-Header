//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@interface FCPersonalizationLowFlowEstimationConfig : NSObject <NSCopying, NSSecureCoding>
{
    double _exponent;
    double _padding;
    double _prior;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double prior; // @synthesize prior=_prior;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) double exponent; // @synthesize exponent=_exponent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExponent:(double)arg1 padding:(double)arg2 prior:(double)arg3;
- (id)initWithConfigDictionary:(id)arg1;
- (id)init;

@end
