//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/NSCopying-Protocol.h>
#import <CoreSpotlight/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CSIndexJob : NSObject <NSSecureCoding, NSCopying>
{
    long long _jobType;
    long long _jobOptions;
    NSArray *_identifiersToReindex;
    NSArray *_bundleIDs;
    NSArray *_excludedBundleIDs;
    NSString *_providerIdentifier;
    NSString *_providerType;
    NSString *_extensionBundleID;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *extensionBundleID; // @synthesize extensionBundleID=_extensionBundleID;
@property(retain, nonatomic) NSString *providerType; // @synthesize providerType=_providerType;
@property(retain, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(retain, nonatomic) NSArray *excludedBundleIDs; // @synthesize excludedBundleIDs=_excludedBundleIDs;
@property(retain, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property(retain, nonatomic) NSArray *identifiersToReindex; // @synthesize identifiersToReindex=_identifiersToReindex;
@property(nonatomic) long long jobOptions; // @synthesize jobOptions=_jobOptions;
@property(nonatomic) long long jobType; // @synthesize jobType=_jobType;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)xpc_dictionary;
- (id)initWithXPCDict:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithJobType:(long long)arg1;
- (id)initWithJobType:(long long)arg1 jobOptions:(long long)arg2;

@end

