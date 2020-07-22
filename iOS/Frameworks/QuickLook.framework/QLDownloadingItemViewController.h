//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class QLDetailItemViewControllerState, QLItem, QLRoundProgressView, UIImage, UIImageView;
@protocol QLDownloadingItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface QLDownloadingItemViewController
{
    _Bool _downloading;
    _Bool _downloaded;
    _Bool _didDisappear;
    id _progressSubscriber;
    QLRoundProgressView *_progressView;
    QLDetailItemViewControllerState *_readyForDownloadState;
    QLDetailItemViewControllerState *_cancelableDownloadingState;
    QLDetailItemViewControllerState *_nonCancelableDownloadingState;
    QLDetailItemViewControllerState *_completedDownloadState;
    QLDetailItemViewControllerState *_previewLoadingState;
    UIImageView *_downloadImageView;
    UIImage *_cloudImage;
    QLItem *_previewItem;
    _Bool _showsLoadingPreviewSpinner;
    id <QLDownloadingItemViewControllerDelegate> _downloadingDelegate;
}

@property(nonatomic) _Bool showsLoadingPreviewSpinner; // @synthesize showsLoadingPreviewSpinner=_showsLoadingPreviewSpinner;
@property(nonatomic) _Bool downloaded; // @synthesize downloaded=_downloaded;
@property(nonatomic) __weak id <QLDownloadingItemViewControllerDelegate> downloadingDelegate; // @synthesize downloadingDelegate=_downloadingDelegate;
@property(readonly, nonatomic) QLRoundProgressView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (void)_startDownloadOperation;
- (void)_presentConnectivityAlert;
- (void)_setDownloading:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_stopDownload:(_Bool)arg1;
- (void)_startDownload:(_Bool)arg1;
- (void)_toggleDownload:(_Bool)arg1;
- (void)performAction;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)_updateFileSizeWithProgress:(double)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAutoDownloadInNetworkState:(unsigned long long)arg1 downloadSize:(id)arg2;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;

@end
