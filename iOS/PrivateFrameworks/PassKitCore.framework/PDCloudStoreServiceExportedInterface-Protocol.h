//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSArray, PKPaymentPass;

@protocol PDCloudStoreServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)fetchAndStoreRecordsForPaymentPass:(PKPaymentPass *)arg1 completion:(void (^)(PKCloudRecordArray *, NSError *))arg2;
- (void)simulateCloudStorePushWithCompletion:(void (^)(PKCloudRecordArray *, NSArray *, NSError *))arg1;
- (void)resetContainerWithCompletion:(void (^)(_Bool))arg1;
- (void)allItemsOfClassType:(Class)arg1 storeLocally:(_Bool)arg2 completion:(void (^)(PKCloudRecordArray *, NSError *))arg3;
- (void)removeItemsWithRecordNames:(NSArray *)arg1 itemClass:(Class)arg2 completion:(void (^)(NSError *))arg3;
- (void)updateCloudStoreWithLocalItems:(NSArray *)arg1 recordSpecificKeys:(NSArray *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
@end
