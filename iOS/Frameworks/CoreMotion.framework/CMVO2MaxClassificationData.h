//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CMVO2MaxClassificationData : NSObject <NSSecureCoding, NSCopying>
{
    long long _biologicalSex;
    long long _ageLowerBound;
    long long _ageUpperBound;
    long long _classificationType;
    double _vo2MaxLowerBound;
    double _vo2MaxUpperBound;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double vo2MaxUpperBound; // @synthesize vo2MaxUpperBound=_vo2MaxUpperBound;
@property(readonly, nonatomic) double vo2MaxLowerBound; // @synthesize vo2MaxLowerBound=_vo2MaxLowerBound;
@property(readonly, nonatomic) long long classificationType; // @synthesize classificationType=_classificationType;
@property(readonly, nonatomic) long long ageUpperBound; // @synthesize ageUpperBound=_ageUpperBound;
@property(readonly, nonatomic) long long ageLowerBound; // @synthesize ageLowerBound=_ageLowerBound;
@property(readonly, nonatomic) long long biologicalSex; // @synthesize biologicalSex=_biologicalSex;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithBiologicalSex:(long long)arg1 ageLowerBound:(long long)arg2 ageUpperBound:(long long)arg3 classificationType:(long long)arg4 vo2MaxLowerBound:(double)arg5 vo2MaxUpperBound:(double)arg6;

@end
