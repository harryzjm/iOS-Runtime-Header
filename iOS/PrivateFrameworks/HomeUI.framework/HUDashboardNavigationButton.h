//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class CALayer, HFWallpaperSlice, HUNavigationButtonLayoutOptions, NSArray, NSLayoutConstraint, NSNumber, NSString, UIImage, UIImageView, UILabel, UIMenu, UIView;
@protocol HUDashboardNavigationButtonDelegate;

@interface HUDashboardNavigationButton : UIControl
{
    _Bool _hidesWhenCollapsed;
    id <HUDashboardNavigationButtonDelegate> _delegate;
    NSString *_identifier;
    unsigned long long _style;
    NSNumber *_badgeValue;
    UIMenu *_contextMenu;
    double _blurAlpha;
    HFWallpaperSlice *_blurredWallpaperSlice;
    HUNavigationButtonLayoutOptions *_layoutOptions;
    UIView *_backgroundContainerView;
    UIView *_backgroundBlurView;
    CALayer *_filterLayer;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIView *_badgeView;
    NSLayoutConstraint *_minWidthConstraint;
    NSArray *_constraints;
    struct UIOffset _imageOffset;
    struct UIEdgeInsets _touchInsets;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) NSLayoutConstraint *minWidthConstraint; // @synthesize minWidthConstraint=_minWidthConstraint;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) CALayer *filterLayer; // @synthesize filterLayer=_filterLayer;
@property(readonly, nonatomic) UIView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(readonly, nonatomic) UIView *backgroundContainerView; // @synthesize backgroundContainerView=_backgroundContainerView;
@property(nonatomic) _Bool hidesWhenCollapsed; // @synthesize hidesWhenCollapsed=_hidesWhenCollapsed;
@property(retain, nonatomic) HUNavigationButtonLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice; // @synthesize blurredWallpaperSlice=_blurredWallpaperSlice;
@property(nonatomic) double blurAlpha; // @synthesize blurAlpha=_blurAlpha;
@property(retain, nonatomic) UIMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property(copy, nonatomic) NSNumber *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(nonatomic) struct UIOffset imageOffset; // @synthesize imageOffset=_imageOffset;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <HUDashboardNavigationButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateWallpaperContentsRectAndScale;
- (void)_didTap:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)normalizedWallpaperRectDidChange;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)setTintColor:(id)arg1;
@property(copy, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *title;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)description;
- (id)initWithStyle:(unsigned long long)arg1;

@end
