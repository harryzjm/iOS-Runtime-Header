//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKFHIRVersion, NSData, NSDate, NSString, NSURL;

@interface HKFHIRResource : NSObject <NSSecureCoding, NSCopying>
{
    HKFHIRVersion *_FHIRVersion;
    NSString *_resourceType;
    NSString *_identifier;
    NSData *_data;
    NSURL *_sourceURL;
    NSDate *_lastUpdatedDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy) NSString *sourceString;
@property(readonly, copy) NSDate *lastUpdatedDate;
@property(readonly, copy) NSURL *sourceURL;
@property(readonly, copy) NSData *data;
@property(readonly, copy) NSString *identifier;
@property(readonly, copy) NSString *resourceType;
@property(readonly, copy) HKFHIRVersion *FHIRVersion;
- (id)initWithResourceType:(id)arg1 identifier:(id)arg2 FHIRVersion:(id)arg3 data:(id)arg4 sourceURL:(id)arg5 lastUpdatedDate:(id)arg6;
- (id)init;

@end
