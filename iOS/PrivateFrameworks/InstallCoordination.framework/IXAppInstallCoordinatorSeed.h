//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InstallCoordination/NSCopying-Protocol.h>
#import <InstallCoordination/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface IXAppInstallCoordinatorSeed : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_bundleID;
    NSUUID *_uniqueIdentifier;
    unsigned long long _creator;
    unsigned long long _intent;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long intent; // @synthesize intent=_intent;
@property(nonatomic) unsigned long long creator; // @synthesize creator=_creator;
@property(retain, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
