//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKitUI/NSObject-Protocol.h>

@class LAContext, NSDictionary, NSError, NSString;

@protocol LAUIAuthenticationDelegate <NSObject>

@optional
- (NSString *)localizedAuthWatchPrompt;
- (NSString *)localizedCallerName;
- (NSString *)callerIconBundlePath;
- (void)processAuthenticationSuccessWithCompletionHandler:(void (^)(void))arg1;
- (void)processBiometricMatchWithCompletionHandler:(void (^)(void))arg1;
- (NSString *)localizedSubTitleForMechanisms:(unsigned long long)arg1;
- (void)biometricNoMatch;
- (void)authenticationResult:(NSDictionary *)arg1 error:(NSError *)arg2 context:(LAContext *)arg3;
@end

