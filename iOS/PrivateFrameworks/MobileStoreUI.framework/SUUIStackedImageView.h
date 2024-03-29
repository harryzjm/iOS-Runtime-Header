//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPUBorderConfiguration, MPUBorderDrawingCache, MPUStackView, NSString, UIView;

__attribute__((visibility("hidden")))
@interface SUUIStackedImageView
{
    MPUBorderConfiguration *_borderConfiguration;
    long long _stackDepth;
    MPUStackView *_stackView;
    MPUBorderDrawingCache *_borderDrawingCache;
}

+ (struct SUUIStackedImageConfiguration)_configurationForSize:(struct CGSize)arg1;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MPUBorderDrawingCache *borderDrawingCache; // @synthesize borderDrawingCache=_borderDrawingCache;
- (void)stackView:(id)arg1 didCreateItem:(id)arg2;
- (void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(long long)arg3;
- (long long)numberOfItemsInStackView:(id)arg1;
- (void)layoutSubviews;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGPoint vanishingPoint;
- (void)updateForChangedDistanceFromVanishingPoint;
@property(nonatomic) __weak UIView *perspectiveTargetView;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setImage:(id)arg1;
- (void)performCompressionAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

