//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVScheduledParameterRamp : NSObject
{
    CDStruct_e83c9415 _timeRange;
}

+ (id)_defaultAdditionalFigRepresentationObjects;
+ (id)defaultValue;
+ (id)scheduledParameterRampWithPropertyList:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)scheduledParameterRampInterpolatedToTime:(CDStruct_1b6d18a9)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, getter=_additionalFigRepresentationObjects) NSArray *additionalFigRepresentationObjects;
@property(readonly) id endValue;
@property(readonly) id startValue;
@property(readonly) CDStruct_e83c9415 timeRange;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1;
- (id)propertyList;
- (id)initWithPropertyList:(id)arg1;

@end

