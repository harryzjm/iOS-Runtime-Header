//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface MPCPlaybackDelegationProperties : NSObject
{
    NSString *_deviceGUID;
    NSString *_deviceName;
    long long _systemReleaseType;
    NSString *_requestUserAgent;
    unsigned long long _storeAccountID;
    NSTimeZone *_timeZone;
}

+ (_Bool)supportsSecureCoding;
+ (id)payloadValueFromJSONValue:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, copy, nonatomic) NSString *requestUserAgent; // @synthesize requestUserAgent=_requestUserAgent;
@property(readonly, nonatomic) long long systemReleaseType; // @synthesize systemReleaseType=_systemReleaseType;
@property(readonly, copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, copy, nonatomic) NSString *deviceGUID; // @synthesize deviceGUID=_deviceGUID;
@property(readonly, nonatomic) unsigned long long storeAccountID; // @synthesize storeAccountID=_storeAccountID;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone *)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoreAccountID:(unsigned long long)arg1 deviceGUID:(id)arg2;
- (id)mpc_jsonValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

