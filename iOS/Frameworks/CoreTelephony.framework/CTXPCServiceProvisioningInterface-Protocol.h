//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTDedicatedBearerRequest, CTTransportKeysReceipt, NSData, NSString;

@protocol CTXPCServiceProvisioningInterface
- (void)requestQoSLinkCharacteristics:(void (^)(NSError *))arg1;
- (void)getQoSLinkCharacteristics:(void (^)(CTQoSLinkCharacteristics *, NSError *))arg1;
- (void)getListOfPresentDedicatedBearers:(void (^)(NSArray *))arg1;
- (void)isDedicatedBearerPresent:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)removeAllDedicatedBearers:(void (^)(NSError *))arg1;
- (void)removeDedicatedBearer:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)addDedicatedBearer:(CTDedicatedBearerRequest *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)hasDedicatedBearerSupport:(void (^)(_Bool))arg1;
- (void)invalidateKey:(NSData *)arg1 with:(void (^)(NSError *))arg2;
- (void)forceRollAllTransportKeys:(void (^)(NSError *))arg1;
- (void)setTransportKeysUpdated:(_Bool)arg1 with:(CTTransportKeysReceipt *)arg2 completion:(void (^)(NSError *))arg3;
- (void)getTransportKeysToUpdate:(void (^)(CTTransportKeysUpdate *, NSError *))arg1;
@end

