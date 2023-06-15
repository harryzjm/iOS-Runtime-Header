//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIRedeemStepViewController.h"

@class NSString, SUUIRedeemITunesPassLockup, SUUIRedeemTextField, UIBarButtonItem, UIImageView;

__attribute__((visibility("hidden")))
@interface SUUIRedeemInputViewController : SUUIRedeemStepViewController
{
    long long _category;
    SUUIRedeemTextField *_field;
    UIImageView *_imageView;
    NSString *_initialCode;
    SUUIRedeemITunesPassLockup *_passbookLockup;
    UIBarButtonItem *_redeemButton;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *initialCode; // @synthesize initialCode=_initialCode;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (void)_toggleActivityIndicatorBarButtonItem:(_Bool)arg1;
- (id)_newTextFieldWithClientContext:(id)arg1;
- (void)_termsButtonAction:(id)arg1;
- (void)_redeemAction:(id)arg1;
- (void)_passbookLockupAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)_textFieldTextDidChange:(id)arg1;
- (void)_redeemConfigurationImagesDidLoad:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithRedeemCategory:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

