//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC12NewsArticles35BrandBarToolbarCompressionAnimation : _TtCs12_SwiftObject
{
    MISSING_TYPE *shouldCompressAtTop;
    MISSING_TYPE *topOffset;
    MISSING_TYPE *shouldCloseGapOnScroll;
    MISSING_TYPE *brandBar;
}

- (void)reloadWithTraitCollection:(id)arg1;
- (double)minimumBarHeightForTraitCollection:(id)arg1;
- (double)maximumBarHeightForTraitCollection:(id)arg1;
- (_Bool)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(_Bool)arg2;
- (void)scrollViewIsAtTop:(_Bool)arg1 offset:(double)arg2;
- (void)updateWithPercentage:(double)arg1;
- (void)prepareForUpdates;
@property(nonatomic, readonly) _Bool shouldCloseGapOnScroll; // @synthesize shouldCloseGapOnScroll;
@property(nonatomic, readonly) double topOffset; // @synthesize topOffset;
@property(nonatomic, readonly) _Bool shouldCompressAtTop; // @synthesize shouldCompressAtTop;

@end

