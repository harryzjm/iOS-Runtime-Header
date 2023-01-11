//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/UITextViewDelegate-Protocol.h>

@class NSString, UIColor, UITextView;

@interface PKDashboardFooterTextView <UITextViewDelegate>
{
    _Bool _isTemplateLayout;
    UITextView *_textView;
    NSString *_footerText;
    UIColor *_linkTextColor;
    CDUnknownBlockType _action;
    struct _NSRange _linkRange;
}

+ (double)defaultHorizontalInset;
+ (id)defaultBackgroundColor;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property(nonatomic) struct _NSRange linkRange; // @synthesize linkRange=_linkRange;
@property(copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (_Bool)_isLinkRangeValid;
- (void)_updateText;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)resetFonts;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
