//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVPhotosensitiveTimeRange : NSObject
{
    CDStruct_e83c9415 _timeRange;
    double _risk;
}

+ (id)timeRangesFromMetadata:(id)arg1 initialDate:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property double risk; // @synthesize risk=_risk;
@property CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (id)description;
@property(readonly) NSArray *colors;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 risk:(double)arg2;
- (id)init;

@end

