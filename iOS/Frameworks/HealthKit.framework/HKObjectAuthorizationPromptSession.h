//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface HKObjectAuthorizationPromptSession : NSObject <NSSecureCoding>
{
    NSUUID *_sessionIdentifier;
    NSString *_bundleIdentifier;
    NSArray *_samplesRequiringAuthorization;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *samplesRequiringAuthorization; // @synthesize samplesRequiringAuthorization=_samplesRequiringAuthorization;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForBundleIdentifier:(id)arg1 samples:(id)arg2 sessionIdentifier:(id)arg3;

@end

