//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsTransport/NTPBPersonalizationLocalData.h>

@class CKRecord, NSDictionary;

@interface NTPBPersonalizationLocalData (FCAdditions)
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (int)keyValuePairType;
@property(retain, nonatomic) CKRecord *remoteRecord;
@property(readonly, nonatomic) NSDictionary *openChangeGroupDeltasByFeatureKey;
- (void)writeToKeyValuePair:(id)arg1;
@end
