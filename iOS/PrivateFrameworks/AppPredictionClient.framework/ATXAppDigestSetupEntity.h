//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSCopying-Protocol.h>
#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class NSString;

@interface ATXAppDigestSetupEntity : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_bundleId;
    unsigned long long _numBasicNotifications;
    unsigned long long _numMessageNotifications;
    unsigned long long _numTimeSensitiveNonMessageNotifications;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long numTimeSensitiveNonMessageNotifications; // @synthesize numTimeSensitiveNonMessageNotifications=_numTimeSensitiveNonMessageNotifications;
@property(nonatomic) unsigned long long numMessageNotifications; // @synthesize numMessageNotifications=_numMessageNotifications;
@property(nonatomic) unsigned long long numBasicNotifications; // @synthesize numBasicNotifications=_numBasicNotifications;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleId:(id)arg1 numBasicNotifications:(unsigned long long)arg2 numMessageNotifications:(unsigned long long)arg3 numTimeSenstiveNonMessageNotifications:(unsigned long long)arg4;

@end
