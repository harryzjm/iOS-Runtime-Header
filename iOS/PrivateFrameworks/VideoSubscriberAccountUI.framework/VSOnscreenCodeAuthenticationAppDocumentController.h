//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeAuthenticationAppDocumentController
{
    IKViewElement *_buttonLockupViewElement;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IKViewElement *buttonLockupViewElement; // @synthesize buttonLockupViewElement=_buttonLockupViewElement;
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;
- (id)_newViewModel;
- (void)onscreenCodeViewModelButtonLockupPressed;
- (_Bool)_updateOnscreenCodeViewModel:(id)arg1 withTemplate:(id)arg2;
- (_Bool)_updateOnscreenCodeViewModel:(id)arg1 error:(id *)arg2;
- (id)_onscreenCodeViewModelWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

