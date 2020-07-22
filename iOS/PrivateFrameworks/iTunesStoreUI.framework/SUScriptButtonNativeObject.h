//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage;

@interface SUScriptButtonNativeObject
{
    _Bool _loading;
    NSString *_subtitle;
    NSString *_styleString;
    NSString *_systemItemString;
}

+ (id)objectWithDefaultButtonForScriptButton:(id)arg1;
@property(readonly, nonatomic) NSString *systemItemString; // @synthesize systemItemString=_systemItemString;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *styleString;
- (void)showConfirmationWithTitle:(id)arg1 animated:(_Bool)arg2;
- (void)setStyleFromString:(id)arg1;
@property(nonatomic) struct UIEdgeInsets imageInsets;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @dynamic enabled;
@property(readonly, nonatomic, getter=isShowingConfirmation) _Bool showingConfirmation;
@property(readonly, nonatomic, getter=isBackButton) _Bool backButton;
- (void)hideConfirmationAnimated:(_Bool)arg1;
- (void)disconnectButtonAction;
- (void)connectButtonAction;
- (void)configureFromScriptButtonNativeObject:(id)arg1;
@property(readonly, nonatomic) int buttonType;
- (void)buttonAction:(id)arg1;
- (void)dealloc;
- (id)initWithSystemItemString:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UIImage *image; // @dynamic image;
@property(nonatomic) long long tag; // @dynamic tag;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end
