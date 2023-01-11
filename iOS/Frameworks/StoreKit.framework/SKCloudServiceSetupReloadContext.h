//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKit/NSCopying-Protocol.h>
#import <StoreKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface SKCloudServiceSetupReloadContext : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_userInfo;
    NSURL *_cloudServiceSetupURL;
    NSString *_action;
    NSArray *_queryItems;
    NSString *_sourceApplicationBundleIdentifier;
    NSURL *_referrerURL;
    NSString *_serializedUserInfo;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *serializedUserInfo; // @synthesize serializedUserInfo=_serializedUserInfo;
@property(retain, nonatomic) NSURL *referrerURL; // @synthesize referrerURL=_referrerURL;
@property(copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(copy, nonatomic) NSArray *queryItems; // @synthesize queryItems=_queryItems;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSURL *cloudServiceSetupURL; // @synthesize cloudServiceSetupURL=_cloudServiceSetupURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(copy, nonatomic) NSDictionary *userInfo;

@end
