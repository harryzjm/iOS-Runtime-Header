//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMF/NSCopying-Protocol.h>
#import <FMF/NSSecureCoding-Protocol.h>

@class NSString;

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isActiveDevice;
    _Bool _isThisDevice;
    _Bool _isCompanionDevice;
    _Bool _isAutoMeCapable;
    NSString *_deviceId;
    NSString *_deviceName;
    NSString *_idsDeviceId;
}

+ (_Bool)supportsSecureCoding;
+ (id)deviceWithId:(id)arg1 name:(id)arg2 idsDeviceId:(id)arg3 isActive:(_Bool)arg4 isThisDevice:(_Bool)arg5 isCompanionDevice:(_Bool)arg6 isAutoMeCapable:(_Bool)arg7;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAutoMeCapable; // @synthesize isAutoMeCapable=_isAutoMeCapable;
@property(copy, nonatomic) NSString *idsDeviceId; // @synthesize idsDeviceId=_idsDeviceId;
@property(nonatomic) _Bool isCompanionDevice; // @synthesize isCompanionDevice=_isCompanionDevice;
@property(nonatomic) _Bool isThisDevice; // @synthesize isThisDevice=_isThisDevice;
@property(nonatomic) _Bool isActiveDevice; // @synthesize isActiveDevice=_isActiveDevice;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateIsActive:(_Bool)arg1 isThisDevice:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
