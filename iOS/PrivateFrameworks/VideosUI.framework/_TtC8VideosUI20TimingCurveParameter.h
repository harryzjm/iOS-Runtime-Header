//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, UICubicTimingParameters, UISpringTimingParameters;

@interface _TtC8VideosUI20TimingCurveParameter : _TtCs12_SwiftObject
{
    MISSING_TYPE *timingCurveType;
    MISSING_TYPE *cubicTimingParameters;
    MISSING_TYPE *springTimingParameters;
}

- (id)copyWithZone:(void *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic, retain) UISpringTimingParameters *springTimingParameters; // @synthesize springTimingParameters;
@property(nonatomic, retain) UICubicTimingParameters *cubicTimingParameters; // @synthesize cubicTimingParameters;
@property(nonatomic) long long timingCurveType; // @synthesize timingCurveType;

@end

