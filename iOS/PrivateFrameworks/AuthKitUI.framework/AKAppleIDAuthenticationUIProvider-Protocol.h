//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKitUI/AKAppleIDAuthenticationLimitedUIProvider-Protocol.h>

@class AKAppleIDServerResourceLoadDelegate, NSString, NSURLRequest;

@protocol AKAppleIDAuthenticationUIProvider <AKAppleIDAuthenticationLimitedUIProvider>
- (void)dismissServerProvidedUIWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)presentServerProvidedUIWithURLRequest:(NSURLRequest *)arg1 delegate:(AKAppleIDServerResourceLoadDelegate *)arg2 completion:(void (^)(NSHTTPURLResponse *, NSDictionary *, NSError *))arg3;

@optional
- (void)dismissKeepUsingUIWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)presentKeepUsingUIForAppleID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

