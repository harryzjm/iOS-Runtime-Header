//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailKit/MEMessageDecoder-Protocol.h>
#import <MailKit/MEMessageEncoder-Protocol.h>

@class MEExtensionViewController, NSArray, NSData;

@protocol MEMessageSecurityHandler <MEMessageEncoder, MEMessageDecoder>
- (void)primaryActionClickedForMessageContext:(NSData *)arg1 completionHandler:(void (^)(MEExtensionViewController *))arg2;
- (MEExtensionViewController *)extensionViewControllerForMessageContext:(NSData *)arg1;
- (MEExtensionViewController *)extensionViewControllerForMessageSigners:(NSArray *)arg1;
@end

