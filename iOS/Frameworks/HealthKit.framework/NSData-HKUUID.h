//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

#import <HealthKit/HKUUIDCollection-Protocol.h>

@class NSString;

@interface NSData (HKUUID) <HKUUIDCollection>
+ (id)hk_randomDataOfLength:(long long)arg1;
+ (id)hk_nilDataMD5;
+ (id)hk_dataWithSHA256Fingerprint:(id)arg1 error:(out id *)arg2;
- (id)hk_dataForAllUUIDs;
- (_Bool)hk_enumerateUUIDsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (unsigned long long)hk_countOfUUIDs;
- (void)hk_enumerateUUIDBytesUsingBlock:(CDUnknownBlockType)arg1;
- (void)hk_enumerateUUIDsUsingBlock:(CDUnknownBlockType)arg1;
- (id)hk_SHA256;
- (id)hk_MD5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
