//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PUParallaxComputer : NSObject
{
    int _axis;
    long long _model;
    double _parallaxFactor;
}

@property(nonatomic) int axis; // @synthesize axis=_axis;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(nonatomic) long long model; // @synthesize model=_model;
- (struct CGPoint)contentParallaxOffsetForViewFrame:(struct CGRect)arg1 visibleRect:(struct CGRect)arg2;

@end
