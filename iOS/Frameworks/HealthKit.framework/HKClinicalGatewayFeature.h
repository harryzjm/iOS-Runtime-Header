//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface HKClinicalGatewayFeature : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    long long _minCompatibleAPIVersion;
    long long _status;
    NSArray *_interactions;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *interactions; // @synthesize interactions=_interactions;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) long long minCompatibleAPIVersion; // @synthesize minCompatibleAPIVersion=_minCompatibleAPIVersion;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 minCompatibleAPIVersion:(long long)arg2 status:(long long)arg3 interactions:(id)arg4;
- (id)init;

@end
