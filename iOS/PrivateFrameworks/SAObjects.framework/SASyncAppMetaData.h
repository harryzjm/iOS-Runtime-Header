//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString, SASyncAppIdentifyingInfo;

@interface SASyncAppMetaData <SAAceSerializable>
{
}

+ (id)appMetaDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)appMetaData;
@property(copy, nonatomic) NSArray *syncSlots;
@property(copy, nonatomic) NSNumber *developerMode;
@property(retain, nonatomic) SASyncAppIdentifyingInfo *appIdentifyingInfo;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

