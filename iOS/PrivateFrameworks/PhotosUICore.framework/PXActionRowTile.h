//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>
#import <PhotosUICore/PXUIWidgetFooterViewDelegate-Protocol.h>

@class NSString, PXUIWidgetFooterView, UIButton, UIColor;
@protocol PXActionRowTileDelegate;

@interface PXActionRowTile : UIView <PXUIViewBasicTile, PXReusableObject, PXUIWidgetFooterViewDelegate>
{
    NSString *_title;
    long long _idiom;
    id <PXActionRowTileDelegate> _delegate;
    UIColor *__normalBackgroundColor;
    UIColor *__highlightedBackgroundColor;
    UIButton *__button;
    PXUIWidgetFooterView *__footer;
}

@property(readonly, nonatomic) PXUIWidgetFooterView *_footer; // @synthesize _footer=__footer;
@property(readonly, nonatomic) UIButton *_button; // @synthesize _button=__button;
@property(readonly, nonatomic) UIColor *_highlightedBackgroundColor; // @synthesize _highlightedBackgroundColor=__highlightedBackgroundColor;
@property(readonly, nonatomic) UIColor *_normalBackgroundColor; // @synthesize _normalBackgroundColor=__normalBackgroundColor;
@property(nonatomic) __weak id <PXActionRowTileDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)widgetFooterView:(id)arg1 didSelectDisclosure:(id)arg2;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)handleButtonTap:(id)arg1 forEvent:(id)arg2;
- (void)prepareForReuse;
- (void)becomeReusable;
@property(readonly, nonatomic) UIView *view;
- (void)tintColorDidChange;
- (void)_updateButtonTitle;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)_setupDecoratedButton;
- (void)_setupButton;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

