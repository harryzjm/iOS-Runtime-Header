//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIInterfaceActionVisualBackgroundDisplaying-Protocol.h>
#import <UIKitCore/UIInterfaceActionVisualGroupBackgroundDisplaying-Protocol.h>

@class NSMutableArray, NSString;

@interface _UIBlendingHighlightView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>
{
    NSMutableArray *_blendingViews;
    double _cornerRadius;
}

+ (id)_blendingPressedView;
+ (id)_blendingSeparatorView;
+ (_Bool)isBorderView;
- (void).cxx_destruct;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)_enumerateAllBlendingViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBlendingBorderViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)setPressed:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)_effectiveNonDirectionalContentInsets;
- (id)initWithCompositingBurnColor:(id)arg1 plusDColor:(id)arg2;
- (id)initWithTopLevelFilters:(id)arg1 compositingColors:(id)arg2 compositingFilterModes:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
