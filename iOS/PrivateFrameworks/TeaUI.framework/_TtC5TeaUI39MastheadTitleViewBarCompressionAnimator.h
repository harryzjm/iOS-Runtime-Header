//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC5TeaUI39MastheadTitleViewBarCompressionAnimator : NSObject
{
    MISSING_TYPE *topOffset;
    MISSING_TYPE *shouldAnimate;
    MISSING_TYPE *navigationBar;
}

- (void).cxx_destruct;
- (id)init;
- (void)reloadWithTraitCollection:(id)arg1;
- (double)minimumBarHeightForTraitCollection:(id)arg1;
- (double)maximumBarHeightForTraitCollection:(id)arg1;
- (_Bool)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(_Bool)arg2;
- (void)scrollViewIsAtTop:(_Bool)arg1;
- (void)updateWithPercentage:(double)arg1;
- (void)prepareForUpdates;
@property(nonatomic, readonly) _Bool shouldCloseGapOnScroll;
@property(nonatomic, readonly) _Bool shouldCompressAtTop;
@property(nonatomic) double topOffset; // @synthesize topOffset;

@end
