//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSDialogAction, UIFont;

__attribute__((visibility("hidden")))
@interface AMSUIMessageButton
{
    AMSDialogAction *_dialogAction;
    unsigned long long _messageStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long messageStyle; // @synthesize messageStyle=_messageStyle;
@property(readonly, nonatomic) AMSDialogAction *dialogAction; // @synthesize dialogAction=_dialogAction;
- (id)_defaultTextFont;
- (id)_defaultContentColor;
- (id)_closeImage;
- (id)_chevronImage;
- (id)_symbolConfiguration;
@property(retain, nonatomic) UIFont *titleFont;
- (_Bool)isDefaultCloseButton;
- (void)setFooterStyle;
- (void)_setupWithDialogAction:(id)arg1;
- (id)initWithDialogAction:(id)arg1 messageStyle:(unsigned long long)arg2;

@end
