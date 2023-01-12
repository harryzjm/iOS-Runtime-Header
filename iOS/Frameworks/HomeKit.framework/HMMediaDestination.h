//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface HMMediaDestination : NSObject <HMFLogging, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSUUID *_uniqueIdentifier;
    NSUUID *_parentIdentifier;
    unsigned long long _supportedOptions;
    NSUUID *_audioGroupIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;
+ (id)logCategory;
+ (id)payloadForNullDestination;
+ (id)payloadForDestination:(id)arg1 options:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(copy) NSUUID *audioGroupIdentifier; // @synthesize audioGroupIdentifier=_audioGroupIdentifier;
@property unsigned long long supportedOptions; // @synthesize supportedOptions=_supportedOptions;
@property(readonly, copy) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(readonly, copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)logIdentifier;
- (_Bool)containsHomeTheaterSupportedOptions;
- (_Bool)containsSupportedOptions:(unsigned long long)arg1;
@property(readonly, copy) NSString *identifier;
- (id)initWithUniqueIdentifier:(id)arg1 parentIdentifier:(id)arg2 supportedOptions:(unsigned long long)arg3 audioGroupIdentifier:(id)arg4;
- (id)initWithUniqueIdentifier:(id)arg1 parentIdentifier:(id)arg2 supportedOptions:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end
