//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSString;

@interface RTApplication : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_bundleId;
    NSString *_localizedDisplayName;
    long long _capabilities;
}

+ (id)capabilitiesToString:(long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleId:(id)arg1 localizedDisplayName:(id)arg2 capabilities:(long long)arg3;

@end

