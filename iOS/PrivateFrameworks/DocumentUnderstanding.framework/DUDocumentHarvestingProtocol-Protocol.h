//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString;

@protocol DUDocumentHarvestingProtocol
- (void)foundInEventResultWithSerializedDocument:(NSData *)arg1 documentType:(long long)arg2 completion:(void (^)(DUFoundInEventResultObjC *, NSError *))arg3;
- (void)addSerializedDocument:(NSData *)arg1 documentType:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)addOrUpdateSearchableItems:(NSArray *)arg1 bundleID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
@end

