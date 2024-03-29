//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSString;

@interface CKDPCSKeySyncCoreAnalytics : NSObject
{
    NSString *_serviceName;
    NSNumber *_shouldThrottle;
    NSNumber *_isManatee;
    NSString *_keySyncResult;
    NSString *_overallResult;
    NSNumber *_keySyncDurationSec;
    NSNumber *_throttledDurationSec;
    NSString *_context;
    NSString *_bundleID;
    NSNumber *_KRSReturnedExistingIdentity;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) NSNumber *KRSReturnedExistingIdentity; // @synthesize KRSReturnedExistingIdentity=_KRSReturnedExistingIdentity;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSNumber *throttledDurationSec; // @synthesize throttledDurationSec=_throttledDurationSec;
@property(retain, nonatomic) NSNumber *keySyncDurationSec; // @synthesize keySyncDurationSec=_keySyncDurationSec;
@property(retain, nonatomic) NSString *overallResult; // @synthesize overallResult=_overallResult;
@property(retain, nonatomic) NSString *keySyncResult; // @synthesize keySyncResult=_keySyncResult;
@property(retain, nonatomic) NSNumber *isManatee; // @synthesize isManatee=_isManatee;
@property(retain, nonatomic) NSNumber *shouldThrottle; // @synthesize shouldThrottle=_shouldThrottle;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;

@end

