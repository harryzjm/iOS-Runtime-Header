//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface LSStashedAppMetadata : NSObject
{
    unsigned char _validationState;
    NSString *_exactBundleVersion;
    NSString *_bundleShortVersion;
    NSDate *_dateStashed;
    NSDate *_dateOriginallyInstalled;
    NSString *_signerOrganization;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSString *signerOrganization; // @synthesize signerOrganization=_signerOrganization;
@property(readonly) NSDate *dateOriginallyInstalled; // @synthesize dateOriginallyInstalled=_dateOriginallyInstalled;
@property(readonly) NSDate *dateStashed; // @synthesize dateStashed=_dateStashed;
@property(readonly) NSString *bundleShortVersion; // @synthesize bundleShortVersion=_bundleShortVersion;
@property(readonly) NSString *exactBundleVersion; // @synthesize exactBundleVersion=_exactBundleVersion;
@property(readonly, getter=isFreeProfileValidated) _Bool freeProfileValidated; // @dynamic freeProfileValidated;
@property(readonly, getter=isUPPValidated) _Bool UPPValidated; // @dynamic UPPValidated;
@property(readonly, getter=isProfileValidated) _Bool profileValidated; // @dynamic profileValidated;
- (id)initWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

