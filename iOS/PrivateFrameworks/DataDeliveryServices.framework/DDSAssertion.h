//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/NSCopying-Protocol.h>
#import <DataDeliveryServices/NSSecureCoding-Protocol.h>

@class DDSAssetPolicy, DDSAssetQuery, NSDate, NSMutableSet, NSSet, NSString;

@interface DDSAssertion : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_description;
    NSDate *_lastUpdated;
    DDSAssetQuery *_query;
    NSMutableSet *_descriptors;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *descriptors; // @synthesize descriptors=_descriptors;
@property(readonly, nonatomic) DDSAssetQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
- (unsigned long long)hash;
- (_Bool)isEqualToAssertion:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)invalidateDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)removeDescriptorWithAssertionID:(id)arg1;
- (void)removeDescriptorWithClientID:(id)arg1;
@property(readonly, nonatomic) DDSAssetPolicy *policy;
- (id)assertionIDsForClientID:(id)arg1;
@property(readonly, nonatomic) NSSet *assertionIdentifiers;
@property(readonly, nonatomic) NSSet *clientIdentifiers;
- (void)addDescriptorWithAssertionID:(id)arg1 clientID:(id)arg2 policy:(id)arg3;
- (id)initWithQuery:(id)arg1;

@end
