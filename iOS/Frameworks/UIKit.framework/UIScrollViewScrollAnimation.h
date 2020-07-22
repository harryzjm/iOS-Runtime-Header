//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CABasicAnimation;

__attribute__((visibility("hidden")))
@interface UIScrollViewScrollAnimation
{
    struct CGPoint _originalOffset;
    struct CGPoint _targetOffset;
    double _accuracy;
    _Bool _adjustsForContentOffsetDelta;
    CABasicAnimation *_customAnimation;
}

- (void).cxx_destruct;
- (void)dealloc;
- (float)progressForFraction:(float)arg1;
- (void)setProgress:(float)arg1;
- (void)adjustForContentOffsetDelta:(struct CGPoint)arg1;

@end
