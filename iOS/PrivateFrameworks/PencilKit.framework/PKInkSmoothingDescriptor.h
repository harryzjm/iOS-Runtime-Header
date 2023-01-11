//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PKInkSmoothingDescriptor : NSObject
{
    double _stylusSmoothing;
    double _touchSmoothing;
    double _velocitySmoothing;
}

+ (id)defaultSmoothingDescriptor;
+ (id)smoothingDescriptorWithStylus:(double)arg1 touch:(double)arg2 velocity:(double)arg3;
@property(readonly, nonatomic) double velocitySmoothing; // @synthesize velocitySmoothing=_velocitySmoothing;
@property(readonly, nonatomic) double touchSmoothing; // @synthesize touchSmoothing=_touchSmoothing;
@property(readonly, nonatomic) double stylusSmoothing; // @synthesize stylusSmoothing=_stylusSmoothing;
- (id)initWithStylusSmoothing:(double)arg1 touchSmoothing:(double)arg2 velocitySmoothing:(double)arg3;

@end
