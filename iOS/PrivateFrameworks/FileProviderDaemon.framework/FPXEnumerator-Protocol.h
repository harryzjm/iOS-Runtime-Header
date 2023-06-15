//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProviderDaemon/NSObject-Protocol.h>

@class NSData, NSNumber;

@protocol FPXEnumerator <NSObject>
- (void)invalidate;
- (void)keepAliveConnectionForRegisteredObserver:(void (^)(void))arg1;
- (void)enumerateChangesFromToken:(NSData *)arg1 suggestedBatchSize:(long long)arg2 reply:(void (^)(NSArray *, NSArray *, _Bool, NSData *, FPExtensionResponse *, NSError *))arg3;
- (void)enumerateItemsFromPage:(NSData *)arg1 suggestedPageSize:(long long)arg2 upTo:(long long)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)enumerateItemsFromPage:(NSData *)arg1 suggestedPageSize:(long long)arg2 reply:(void (^)(NSArray *, NSData *, NSData *, FPExtensionResponse *, NSError *))arg3;
- (void)currentSyncAnchorWithCompletion:(void (^)(NSData *, NSError *))arg1;

@optional
- (void)enumeratorBecameFrontmost:(_Bool)arg1 inWindow:(NSNumber *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

