//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

#import <HMFoundation/HMFObject-Protocol.h>

@class NSArray, NSString;

@interface NSUUID (HMFoundation) <HMFObject>
+ (id)shortDescription;
+ (id)zeroUUID;
+ (id)hmf_zeroUUID;
+ (id)hmf_UUIDWithNamespace:(id)arg1 data:(id)arg2;
- (_Bool)hmf_isEqualToUUIDString:(id)arg1;
- (_Bool)hmf_isEqualToUUID:(id)arg1;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithNamespace:(id)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end
