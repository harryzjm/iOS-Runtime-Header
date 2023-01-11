//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ASDAppClusterMapping : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleID;
    NSNumber *_clusterID;
    NSNumber *_clusterVersion;
    NSNumber *_itemID;
    NSNumber *_launchesWeight;
    NSNumber *_usageWeight;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSNumber *usageWeight; // @synthesize usageWeight=_usageWeight;
@property(copy, nonatomic) NSNumber *launchesWeight; // @synthesize launchesWeight=_launchesWeight;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSNumber *clusterVersion; // @synthesize clusterVersion=_clusterVersion;
@property(copy, nonatomic) NSNumber *clusterID; // @synthesize clusterID=_clusterID;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

