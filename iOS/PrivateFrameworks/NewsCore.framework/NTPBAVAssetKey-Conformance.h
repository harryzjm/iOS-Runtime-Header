//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsTransport/NTPBAVAssetKey.h>

@class FCContentArchive, NSData, NSDate, NSString;

@interface NTPBAVAssetKey (Conformance)
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (int)keyValuePairType;
@property(readonly, nonatomic) FCContentArchive *contentArchive;
@property(readonly, nonatomic) _Bool isExpired;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic) NSDate *creationDate;
- (void)writeToKeyValuePair:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSData *keyData;
@property(readonly) Class superclass;
@end

