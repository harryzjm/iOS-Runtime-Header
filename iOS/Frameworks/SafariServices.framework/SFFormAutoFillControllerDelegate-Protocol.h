//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSURL, _SFFormAutoFillController;

@protocol SFFormAutoFillControllerDelegate <NSObject>
- (_Bool)formAutoFillControllerShouldDisableAutoFill:(_SFFormAutoFillController *)arg1;
- (NSURL *)formAutoFillControllerURLForFormAutoFill:(_SFFormAutoFillController *)arg1;
- (_Bool)formAutoFillControllerCanPrefillForm:(_SFFormAutoFillController *)arg1;

@optional
- (void)formAutoFillControllerGetAuthenticationForAutoFill:(_SFFormAutoFillController *)arg1 onPageLoad:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)formAutoFillControllerGetAuthenticationForAutoFillOnPageLoad:(_SFFormAutoFillController *)arg1 completion:(void (^)(_Bool))arg2;
@end

