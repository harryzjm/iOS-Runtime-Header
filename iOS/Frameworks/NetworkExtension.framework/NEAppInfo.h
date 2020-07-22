//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSUUID;

@interface NEAppInfo : NSObject <NSSecureCoding, NSCopying>
{
    int _pid;
    NSUUID *_uuid;
    NSString *_bundleID;
    NSString *_appVersion;
    NSData *_cdHash;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *cdHash; // @synthesize cdHash=_cdHash;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (_Bool)isComplete;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

