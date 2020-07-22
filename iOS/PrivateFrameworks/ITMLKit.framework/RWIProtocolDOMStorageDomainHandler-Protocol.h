//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/NSObject-Protocol.h>

@class NSString, RWIProtocolDOMStorageStorageId;

@protocol RWIProtocolDOMStorageDomainHandler <NSObject>
- (void)removeDOMStorageItemWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 storageId:(RWIProtocolDOMStorageStorageId *)arg3 key:(NSString *)arg4;
- (void)setDOMStorageItemWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 storageId:(RWIProtocolDOMStorageStorageId *)arg3 key:(NSString *)arg4 value:(NSString *)arg5;
- (void)getDOMStorageItemsWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 storageId:(RWIProtocolDOMStorageStorageId *)arg3;
- (void)disableWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)enableWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
@end

