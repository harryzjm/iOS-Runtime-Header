//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCopying-Protocol.h>

@class AKAppleIDSession, NSDictionary, NSString, NSURLCredential;

@interface DVTDeveloperAccountCredentials : NSObject <NSCopying>
{
    _Bool __optOutOfTokenRequirement;
    NSString *_username;
    NSURLCredential *_URLCredential;
}

+ (id)accountCredentialsFromUsername:(id)arg1 alternateDSID:(id)arg2 token:(id)arg3;
+ (id)accountCredentialsFromUsername:(id)arg1 password:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property _Bool _optOutOfTokenRequirement; // @synthesize _optOutOfTokenRequirement=__optOutOfTokenRequirement;
@property(readonly, nonatomic) NSURLCredential *URLCredential; // @synthesize URLCredential=_URLCredential;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (void)applyAuthenticationHeadersToRequest:(id)arg1;
@property(readonly, nonatomic) NSDictionary *authenticationHeaders;
- (id)authenticationHeadersForRequest:(id)arg1;
- (id)_manuallyProvidedAuthenticationHeaders;
@property(readonly, nonatomic) AKAppleIDSession *appleIDSession;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLCredential:(id)arg1 username:(id)arg2;
- (id)initWithURLCredential:(id)arg1;

@end
