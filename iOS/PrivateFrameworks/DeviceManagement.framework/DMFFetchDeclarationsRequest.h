//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface DMFFetchDeclarationsRequest
{
    _Bool _includeInternalState;
    _Bool _includePayloadContents;
    NSString *_organizationIdentifier;
    NSArray *_payloadIdentifiers;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isPermittedOnUserConnection;
+ (_Bool)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
@property(nonatomic) _Bool includePayloadContents; // @synthesize includePayloadContents=_includePayloadContents;
@property(nonatomic) _Bool includeInternalState; // @synthesize includeInternalState=_includeInternalState;
@property(copy, nonatomic) NSArray *payloadIdentifiers; // @synthesize payloadIdentifiers=_payloadIdentifiers;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
