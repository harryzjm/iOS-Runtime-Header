//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HMNumberRange : NSObject
{
    NSNumber *_minValue;
    NSNumber *_maxValue;
}

+ (id)numberRangeWithMinValue:(id)arg1 maxValue:(id)arg2;
+ (id)numberRangeWithMinValue:(id)arg1;
+ (id)numberRangeWithMaxValue:(id)arg1;
@property(readonly, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(readonly, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMinValue:(id)arg1 maxValue:(id)arg2;

@end
