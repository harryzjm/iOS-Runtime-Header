//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CommunicationsSetupUI/NSObject-Protocol.h>

@class AKAppleIDAuthenticationContext, AKAppleIDAuthenticationController, NSError, NSMutableDictionary;

@protocol AKAppleIDAuthenticationDelegate <NSObject>

@optional
- (void)authenticationController:(AKAppleIDAuthenticationController *)arg1 shouldContinueWithAuthenticationResults:(NSMutableDictionary *)arg2 error:(NSError *)arg3 forContext:(AKAppleIDAuthenticationContext *)arg4 completion:(void (^)(_Bool))arg5;
- (_Bool)authenticationController:(AKAppleIDAuthenticationController *)arg1 shouldContinueWithAuthenticationResults:(NSMutableDictionary *)arg2 error:(NSError *)arg3 forContext:(AKAppleIDAuthenticationContext *)arg4;
@end

