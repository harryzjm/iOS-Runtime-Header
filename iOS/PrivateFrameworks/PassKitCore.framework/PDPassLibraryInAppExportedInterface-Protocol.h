//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDPassLibraryExportedInterface-Protocol.h>

@class NSSet, NSString, PKPaymentRequest;

@protocol PDPassLibraryInAppExportedInterface <PDPassLibraryExportedInterface>
- (void)hasPassesWithSupportedNetworks:(NSSet *)arg1 merchantCapabilities:(unsigned long long)arg2 webDomain:(NSString *)arg3 completion:(void (^)(_Bool))arg4;
- (void)canPresentPaymentRequest:(PKPaymentRequest *)arg1 completion:(void (^)(long long, NSString *, NSError *))arg2;
- (void)hasInAppPrivateLabelPaymentPassesForWebDomain:(NSString *)arg1 issuerCountryCodes:(NSSet *)arg2 withHandler:(void (^)(_Bool))arg3;
- (void)inAppPrivateLabelPaymentPassesForWebDomain:(NSString *)arg1 issuerCountryCodes:(NSSet *)arg2 withHandler:(void (^)(NSSet *))arg3;
- (void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(NSString *)arg1 issuerCountryCodes:(NSSet *)arg2 withHandler:(void (^)(_Bool))arg3;
- (void)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(NSString *)arg1 issuerCountryCodes:(NSSet *)arg2 withHandler:(void (^)(NSSet *))arg3;
- (void)inAppPaymentPassesForNetworks:(NSSet *)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(NSSet *)arg3 withHandler:(void (^)(NSSet *))arg4;
- (void)hasInAppPaymentPassesForNetworks:(NSSet *)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(NSSet *)arg3 withHandler:(void (^)(_Bool))arg4;
@end

