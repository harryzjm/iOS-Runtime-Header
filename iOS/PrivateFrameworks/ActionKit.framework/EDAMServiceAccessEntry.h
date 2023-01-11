//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface EDAMServiceAccessEntry
{
    NSNumber *_accessTime;
    NSString *_serviceName;
    NSNumber *_userId;
    NSNumber *_authenticatedClientUserId;
    NSNumber *_apiKeyId;
    NSNumber *_businessAdmin;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *businessAdmin; // @synthesize businessAdmin=_businessAdmin;
@property(retain, nonatomic) NSNumber *apiKeyId; // @synthesize apiKeyId=_apiKeyId;
@property(retain, nonatomic) NSNumber *authenticatedClientUserId; // @synthesize authenticatedClientUserId=_authenticatedClientUserId;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSNumber *accessTime; // @synthesize accessTime=_accessTime;

@end
