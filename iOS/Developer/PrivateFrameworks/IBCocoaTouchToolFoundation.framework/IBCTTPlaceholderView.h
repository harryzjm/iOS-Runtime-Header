//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class IBPlaceholderDrawingAttributes, NSArray, UIImageView, UILabel;

@interface IBCTTPlaceholderView : UIView
{
    UIView *_contentSizeView;
    NSArray *_contentSizeConstraints;
    UIView *_centeringView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_explanatoryTextLabel;
    UIImageView *_backgroundImageView;
    NSArray *_constraints;
    UIImageView *_topShadowView;
    _Bool _attributesAreUpToDate;
    _Bool _shouldDrawWithSubduedAppearance;
    IBPlaceholderDrawingAttributes *_attributes;
}

@property(nonatomic) _Bool shouldDrawWithSubduedAppearance; // @synthesize shouldDrawWithSubduedAppearance=_shouldDrawWithSubduedAppearance;
@property(retain, nonatomic) IBPlaceholderDrawingAttributes *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_synchronizeViewsWithAttributes;
- (void)_configureShadows;
- (id)_topShadowImage;
- (void)_configureBackground;
- (void)_makeLabelIfNeeded:(id *)arg1 text:(id)arg2 fontSize:(double)arg3 useBoldFont:(_Bool)arg4 populatingUsedLabelsArray:(id)arg5;
- (void)_installCenteringViewIfNeeded;
- (void)_configureContentSizeView;
- (id)_makeLabelWithFontSize:(double)arg1 useBoldFont:(_Bool)arg2 textAlignment:(long long)arg3;

@end

