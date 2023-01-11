//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssetsLibraryServices/NSObject-Protocol.h>

@class NSData, NSDictionary, NSError, NSString, NSURL;

@protocol PLAssetsdClientServiceProtocol <NSObject>
- (void)resourceURLReceivedForIdentifier:(NSString *)arg1 url:(NSURL *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)assetAvailableForIdentifier:(NSString *)arg1 success:(_Bool)arg2 error:(NSError *)arg3;
- (void)downloadFinishedForIdentifier:(NSString *)arg1 success:(_Bool)arg2 url:(NSURL *)arg3 data:(NSData *)arg4 info:(NSDictionary *)arg5 error:(NSError *)arg6;
- (void)downloadStatusForIdentifier:(NSString *)arg1 progress:(double)arg2 completed:(_Bool)arg3 data:(NSData *)arg4 error:(NSError *)arg5;
@end
