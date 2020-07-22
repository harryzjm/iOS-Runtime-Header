//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/CSCoderEncoder-Protocol.h>
#import <CoreSpotlight/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet, NSString, NSUUID;
@protocol OS_xpc_object;

@interface CSUserAction : NSObject <CSCoderEncoder, NSSecureCoding>
{
    NSString *_itemIdentifier;
    NSString *_contentAction;
    NSDictionary *_userInfo;
    NSSet *_keywords;
    unsigned long long _eligibility;
    NSUUID *_uaIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)actionFromUserActivity:(id)arg1 searchableItem:(id)arg2;
@property(retain, nonatomic) NSUUID *uaIdentifier; // @synthesize uaIdentifier=_uaIdentifier;
@property unsigned long long eligibility; // @synthesize eligibility=_eligibility;
@property(retain) NSSet *keywords; // @synthesize keywords=_keywords;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSString *contentAction; // @synthesize contentAction=_contentAction;
@property(copy) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)_propertiesDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpc_dictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCSCoder:(id)arg1;
- (id)initWithXPCDict:(id)arg1;

@end
