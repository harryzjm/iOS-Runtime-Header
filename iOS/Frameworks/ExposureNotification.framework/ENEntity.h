//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExposureNotification/NSCopying-Protocol.h>
#import <ExposureNotification/NSSecureCoding-Protocol.h>

@class ENRegion, NSString;

@interface ENEntity : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_bundleIdentifier;
    ENRegion *_region;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) ENRegion *region; // @synthesize region=_region;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1 region:(id)arg2;

@end
