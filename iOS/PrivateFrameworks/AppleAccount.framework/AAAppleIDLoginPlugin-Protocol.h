//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol AAAppleIDLoginPlugin <NSObject>
- (void)handleLoginResponse:(NSDictionary *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (NSDictionary *)parametersForLoginRequest;
- (NSDictionary *)parametersForIdentityEstablishmentRequest;
- (NSString *)serviceIdentifier;
@end
