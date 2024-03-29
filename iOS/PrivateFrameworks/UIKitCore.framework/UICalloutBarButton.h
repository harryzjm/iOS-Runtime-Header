//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class NSDate, UITextReplacement, _UICalloutBarVisualStyle, _UISlotView;

__attribute__((visibility("hidden")))
@interface UICalloutBarButton : UIButton
{
    SEL m_action;
    int m_position;
    int m_type;
    UITextReplacement *m_textReplacement;
    double m_contentWidth;
    double m_contentScale;
    double m_additionalContentHeight;
    double m_dividerOffset;
    double m_imageVerticalAdjust;
    long long m_page;
    _Bool m_isText;
    _Bool m_single;
    _Bool m_padLeft;
    _Bool m_padRight;
    _Bool m_dontDismiss;
    NSDate *m_appearanceDate;
    _UISlotView *m_securePasteButtonSlotView;
    _Bool forceFlash;
    _UICalloutBarVisualStyle *m_visualStyle;
}

+ (id)symbolConfigurationForScale:(double)arg1;
+ (id)buttonWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 type:(int)arg4 inView:(id)arg5 visualStyle:(id)arg6;
+ (id)buttonWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4 visualStyle:(id)arg5;
+ (id)buttonWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4 visualStyle:(id)arg5;
+ (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 action:(SEL)arg4 type:(int)arg5 inView:(id)arg6 visualStyle:(id)arg7;
+ (Class)_visualProviderClass;
- (void).cxx_destruct;
@property(nonatomic) _Bool dontDismiss; // @synthesize dontDismiss=m_dontDismiss;
@property(nonatomic) double imageVerticalAdjust; // @synthesize imageVerticalAdjust=m_imageVerticalAdjust;
@property(nonatomic) double dividerOffset; // @synthesize dividerOffset=m_dividerOffset;
@property(nonatomic) long long page; // @synthesize page=m_page;
@property(nonatomic) _Bool forceFlash; // @synthesize forceFlash;
@property(retain, nonatomic) UITextReplacement *textReplacement; // @synthesize textReplacement=m_textReplacement;
@property(retain, nonatomic) _UICalloutBarVisualStyle *visualStyle; // @synthesize visualStyle=m_visualStyle;
@property(readonly, nonatomic) int type; // @synthesize type=m_type;
@property(readonly, nonatomic) double additionalContentHeight; // @synthesize additionalContentHeight=m_additionalContentHeight;
@property(readonly, nonatomic) double contentScale; // @synthesize contentScale=m_contentScale;
@property(readonly, nonatomic) double contentWidth; // @synthesize contentWidth=m_contentWidth;
@property(readonly, nonatomic) SEL action; // @synthesize action=m_action;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (void)touchDown;
- (void)flash:(id)arg1 forEvent:(id)arg2;
- (void)cancelFlash;
- (void)fadeAndSendActionWithAuthenticationMessage:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setContentScale:(double)arg1;
@property(readonly, nonatomic) _Bool isSecurePasteButton;
- (void)configureForVerticalPosition:(int)arg1;
- (void)configureForRightPosition:(int)arg1;
- (void)configureForMiddlePosition;
- (void)configureForLeftPosition:(int)arg1;
- (void)configureForSingle:(int)arg1;
- (unsigned int)_secureName;
- (void)configureSecurePasteButtonWithWidth:(double)arg1 height:(double)arg2;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)adjustRectForPosition:(struct CGRect)arg1;
- (double)cornerRadius;
- (double)buttonHorizontalPadding;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)setupWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 type:(int)arg4 visualStyle:(id)arg5;
- (void)setupWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 visualStyle:(id)arg4;
- (void)setupWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 visualStyle:(id)arg4;
- (void)setupWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 action:(SEL)arg4 type:(int)arg5 visualStyle:(id)arg6;
- (void)_commonSetupWithAction:(SEL)arg1 type:(int)arg2 visualStyle:(id)arg3;
- (double)_scaleFactorForImage;

@end

