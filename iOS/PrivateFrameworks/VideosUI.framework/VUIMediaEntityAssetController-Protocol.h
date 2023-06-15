//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSObject, NSString, VUIContentRating, VUIMediaEntityAssetControllerState;
@protocol OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate;

@protocol VUIMediaEntityAssetController <NSObject>
@property(readonly, nonatomic) _Bool contentAllowsCellularDownload;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property(readonly, copy, nonatomic) VUIMediaEntityAssetControllerState *state;
@property(readonly, nonatomic) _Bool supportsRedownloadingContent;
@property(readonly, nonatomic) _Bool supportsStartingDownload;
@property(nonatomic) __weak id <VUIMediaEntityAssetControllerDelegate> delegate;
- (void)cancelKeyFetch;
- (void)cancelAndRemoveDownload;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)fetchNewKeysForDownloadedVideo;
- (void)deleteAndRedownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(_Bool)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)startDownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(_Bool)arg3 preferEnhancedDownload:(_Bool)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (void)invalidate;

@optional
@property(readonly, nonatomic) _Bool allowsManualDownloadRenewal;
@property(readonly, nonatomic) NSString *brandName;
@property(readonly, nonatomic) NSString *brandID;
@property(readonly, nonatomic) VUIContentRating *contentRating;
@end

