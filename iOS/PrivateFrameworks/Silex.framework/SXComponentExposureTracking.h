//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SXComponentView;

@interface SXComponentExposureTracking : NSObject
{
    SXComponentView *_componentView;
    CDUnknownBlockType _exposureBlock;
    double _visibilityFactor;
    double _minimumVisibleY;
    double _maximumVisibleY;
}

+ (id)exposureTrackingWithComponent:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(nonatomic) double maximumVisibleY; // @synthesize maximumVisibleY=_maximumVisibleY;
@property(nonatomic) double minimumVisibleY; // @synthesize minimumVisibleY=_minimumVisibleY;
@property(readonly, nonatomic) double visibilityFactor; // @synthesize visibilityFactor=_visibilityFactor;
@property(readonly, copy, nonatomic) CDUnknownBlockType exposureBlock; // @synthesize exposureBlock=_exposureBlock;
@property(readonly, nonatomic) __weak SXComponentView *componentView; // @synthesize componentView=_componentView;
- (void).cxx_destruct;
- (void)calculateVisibilityFactor;
- (id)initWithComponent:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
