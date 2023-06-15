//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class _MKMarkerAnnotationBaseImageContent;

__attribute__((visibility("hidden")))
@interface _MKMarkerAnnotationBaseImageView : UIImageView
{
    double _tailLength;
    _MKMarkerAnnotationBaseImageContent *_baseImageContent;
}

+ (id)_gradientImageName:(long long)arg1;
+ (struct CGPath *)_pathForBaseImageType:(long long)arg1 radius:(double)arg2 tailLength:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic, getter=_baseImageContent, setter=_setBaseImageContent:) _MKMarkerAnnotationBaseImageContent *baseImageContent; // @synthesize baseImageContent=_baseImageContent;
- (_Bool)_isFillColorClear;
- (void)_renderGradientForRectaloon;
- (id)_renderBaseImage:(struct CGContext *)arg1 inRect:(struct CGRect)arg2 scale:(double)arg3;
- (void)_strokePath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 scale:(double)arg3;
- (void)_fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 inRect:(struct CGRect)arg3 scale:(double)arg4;
- (void)_renderContentUsingGraphicsPath:(struct CGPath *)arg1;
- (void)_renderBaseContent;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithOvalInSize:(struct CGSize)arg1;
- (id)initWithBalloonRadius:(double)arg1 tailLength:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

