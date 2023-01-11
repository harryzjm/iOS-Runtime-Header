//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssetsLibraryServices/NSObject-Protocol.h>

@class NSArray, NSString, PLXPCObject;

@protocol PLAssetsdPhotoKitServiceProtocol <NSObject>
- (void)clearSaveTokens:(NSArray *)arg1;
- (void)requestUUIDWithCustomUUID:(NSString *)arg1 reply:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)applyChangesRequest:(PLXPCObject *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
@end
