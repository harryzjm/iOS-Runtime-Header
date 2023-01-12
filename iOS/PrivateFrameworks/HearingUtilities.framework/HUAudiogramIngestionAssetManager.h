//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HearingUtilities/AXAssetControllerObserver-Protocol.h>

@class AXAsset, AXAssetController, NSString;
@protocol HUAudiogramIngestionAssetManagerDelegate;

@interface HUAudiogramIngestionAssetManager : NSObject <AXAssetControllerObserver>
{
    AXAssetController *_assetController;
    AXAsset *_latestDownloadedAsset;
    id <HUAudiogramIngestionAssetManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HUAudiogramIngestionAssetManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AXAsset *latestDownloadedAsset; // @synthesize latestDownloadedAsset=_latestDownloadedAsset;
@property(retain, nonatomic) AXAssetController *assetController; // @synthesize assetController=_assetController;
- (void)assetController:(id)arg1 asset:(id)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(_Bool)arg5 expectedTimeRemaining:(double)arg6;
- (void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4 hasRemainingDownloads:(_Bool)arg5;
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4;
- (void)assetDidUpdateWithError:(id)arg1;
- (void)refreshAssets;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
