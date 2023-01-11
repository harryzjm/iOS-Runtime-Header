//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSNumber, NSString;

@interface HFNumberRange : NSObject <NAIdentifiable>
{
    unsigned long long _type;
    NSNumber *_maxValue;
    NSNumber *_midValue;
    NSNumber *_minValue;
}

+ (id)na_identity;
+ (id)rangeWithFloatRange:(CDStruct_c3b9c2ee)arg1;
+ (id)valueWithValue:(id)arg1;
+ (id)rangeWithMaxValue:(id)arg1 minValue:(id)arg2;
@property(copy, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
@property(copy, nonatomic) NSNumber *midValue; // @synthesize midValue=_midValue;
@property(copy, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)intersectRange:(id)arg1;
- (id)unionRange:(id)arg1;
- (id)mapValue:(id)arg1 fromRange:(id)arg2;
- (id)percentageValueForValue:(id)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee floatRangeValue;
@property(readonly, copy, nonatomic) NSNumber *spanValue;
- (id)initWithType:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

