//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIKeyCommandDiscoverabilityHUDVisualStyle-Protocol.h>

@class NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDVisualStyle : NSObject <UIKeyCommandDiscoverabilityHUDVisualStyle>
{
}

+ (id)visualStyleForTraitCollection:(id)arg1;
- (double)columnDividerHeightForHUDHeight:(double)arg1;
- (double)maxHUDHeightForHeight:(double)arg1;
- (double)maxHUDWidthForWidth:(double)arg1;

// Remaining properties
@property(readonly, nonatomic) double HUDPageControlBottomMargin; // @dynamic HUDPageControlBottomMargin;
@property(readonly, nonatomic) struct UIEdgeInsets HUDViewInsets; // @dynamic HUDViewInsets;
@property(readonly, nonatomic) double columnDividerWidth; // @dynamic columnDividerWidth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIColor *dividerColor; // @dynamic dividerColor;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIColor *inputColor; // @dynamic inputColor;
@property(readonly, nonatomic) double minimumFontScaleBeforeTruncation; // @dynamic minimumFontScaleBeforeTruncation;
@property(readonly, nonatomic) double summaryDescriptionToModifiersSpacing; // @dynamic summaryDescriptionToModifiersSpacing;
@property(readonly, nonatomic) UIFont *summaryFont; // @dynamic summaryFont;
@property(readonly, nonatomic) double summaryLineHeight; // @dynamic summaryLineHeight;
@property(readonly, nonatomic) double summaryLineSpacing; // @dynamic summaryLineSpacing;
@property(readonly, nonatomic) double summaryModifiersSpacing; // @dynamic summaryModifiersSpacing;
@property(readonly, nonatomic) double summaryXPadding; // @dynamic summaryXPadding;
@property(readonly, nonatomic) double summaryYPadding; // @dynamic summaryYPadding;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIColor *titleColor; // @dynamic titleColor;

@end

