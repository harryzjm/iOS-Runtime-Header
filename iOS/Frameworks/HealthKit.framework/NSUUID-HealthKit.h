//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@class NSString;

@interface NSUUID (HealthKit)
+ (id)hk_v3UUIDWithNameSpace:(id)arg1 name:(id)arg2;
+ (id)hk_UUIDWithData:(id)arg1;
- (id)hk_shortRepresentation;
- (long long)hk_compare:(id)arg1;
- (id)hk_dataForUUIDBytes;
- (id)hk_UUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

