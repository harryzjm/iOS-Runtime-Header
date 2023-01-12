//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebSheet/NSObject-Protocol.h>

@class NSURL, _SFFormAutoFillController;

@protocol SFFormAutoFillControllerDelegate <NSObject>
- (NSURL *)formAutoFillControllerURLForFormAutoFill:(_SFFormAutoFillController *)arg1;
- (_Bool)formAutoFillControllerCanPrefillForm:(_SFFormAutoFillController *)arg1;

@optional
- (void)formAutoFillControllerUserChoseToUseGeneratedPassword:(_SFFormAutoFillController *)arg1;
- (_Bool)formAutoFillControllerDidUserDeclineAutomaticStrongPasswordForCurrentDomain:(_SFFormAutoFillController *)arg1;
- (_Bool)formAutoFillControllerShouldShowIconsInPasswordPicker:(_SFFormAutoFillController *)arg1;
- (void)formAutoFillControllerGetAuthenticationForAutoFill:(_SFFormAutoFillController *)arg1 completion:(void (^)(_Bool, LAContext *))arg2;
- (_Bool)formAutoFillControllerShouldDisableStreamlinedLogin:(_SFFormAutoFillController *)arg1;
- (void)formAutoFillControllerDidFocusSensitiveFormField:(_SFFormAutoFillController *)arg1;
@end

