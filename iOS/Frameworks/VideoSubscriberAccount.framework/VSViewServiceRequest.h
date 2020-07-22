//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSArray, NSString, VSAccountMetadataRequest, VSOptional;

__attribute__((visibility("hidden")))
@interface VSViewServiceRequest : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _allowsPrivacyUI;
    _Bool _requiresPrivacyUI;
    _Bool _canVetoAuthentication;
    _Bool _shouldInferFeaturedProviders;
    VSAccountMetadataRequest *_accountMetadataRequest;
    VSOptional *_requestingAppDisplayName;
    NSString *_requestingAppAdamID;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *requestingAppAdamID; // @synthesize requestingAppAdamID=_requestingAppAdamID;
@property(retain, nonatomic) VSOptional *requestingAppDisplayName; // @synthesize requestingAppDisplayName=_requestingAppDisplayName;
@property(nonatomic) _Bool shouldInferFeaturedProviders; // @synthesize shouldInferFeaturedProviders=_shouldInferFeaturedProviders;
@property(copy, nonatomic) VSAccountMetadataRequest *accountMetadataRequest; // @synthesize accountMetadataRequest=_accountMetadataRequest;
@property(nonatomic) _Bool canVetoAuthentication; // @synthesize canVetoAuthentication=_canVetoAuthentication;
@property(nonatomic) _Bool requiresPrivacyUI; // @synthesize requiresPrivacyUI=_requiresPrivacyUI;
@property(nonatomic) _Bool allowsPrivacyUI; // @synthesize allowsPrivacyUI=_allowsPrivacyUI;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *localizedVideoTitle;
@property(readonly, copy, nonatomic) NSArray *supportedAccountProviderAuthenticationSchemes;
@property(readonly, copy, nonatomic) NSArray *featuredIdentityProviderIdentifiers;
@property(readonly, copy, nonatomic) NSArray *supportedIdentityProviderIdentifiers;
@property(readonly, nonatomic) _Bool allowsAuthenticationUI;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
