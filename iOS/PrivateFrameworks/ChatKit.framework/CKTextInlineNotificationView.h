//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton, UIView;

__attribute__((visibility("hidden")))
@interface CKTextInlineNotificationView
{
    UIView *_contentView;
    UIButton *_textButton;
    UIView *_greyOutView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *greyOutView; // @synthesize greyOutView=_greyOutView;
@property(retain, nonatomic) UIButton *textButton; // @synthesize textButton=_textButton;
- (struct CGSize)contentViewSizeThatFits:(struct CGSize)arg1;
- (id)contentView;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_handleTouchUpOutside:(id)arg1;
- (void)_handleTouchUpInside:(id)arg1;
- (void)_handleTouchDown:(id)arg1;
@property(nonatomic) _Bool greyedOut; // @dynamic greyedOut;
@property(retain, nonatomic) NSString *text; // @dynamic text;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
