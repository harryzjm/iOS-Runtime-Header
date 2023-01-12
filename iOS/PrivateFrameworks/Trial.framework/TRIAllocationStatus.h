//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/NSCopying-Protocol.h>
#import <Trial/NSSecureCoding-Protocol.h>

@class NSDate;

@interface TRIAllocationStatus : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _type;
    NSDate *_date;
}

+ (_Bool)supportsSecureCoding;
+ (id)activeExperimentInformationWithError:(id *)arg1;
+ (id)syncProxyWithErrorHandler:(CDUnknownBlockType)arg1;
+ (const char *)notificationNameForDeploymentEnvironment:(int)arg1;
+ (id)defaultProvider;
+ (id)_defaultProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToStatus:(id)arg1;
- (id)initWithType:(unsigned char)arg1 date:(id)arg2;

@end
