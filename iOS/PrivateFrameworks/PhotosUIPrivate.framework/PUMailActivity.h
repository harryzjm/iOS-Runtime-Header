//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIMailActivity.h>

@class MFMailComposeViewController, NSString, PHAsset, PLProgressView, PLUIEditVideoViewController, PLVideoRemaker, UIViewController;
@protocol PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUMailActivity : UIMailActivity
{
    UIViewController *_referenceViewController;
    PHAsset *_videoAssetBeingTrimmed;
    MFMailComposeViewController *_mailComposeController;
    PLUIEditVideoViewController *_editVideoViewController;
    PLProgressView *_remakerProgressView;
    PLVideoRemaker *_videoRemaker;
    CDUnknownBlockType _remakerCompletionHandler;
    id _strongSelf;
    _Bool _shouldTranscodeSingleVideo;
    _Bool _didCheckMailDropAvailable;
    _Bool _isMailDropAvailable;
    _Bool _canSendMailInNewScene;
    _Bool _didFallbackToPresentComposeControllerModally;
    _Bool __remakerWasCancelled;
    id <PXActivityItemSourceController> _itemSourceController;
    NSString *_transcodedVideoFilePath;
}

+ (void)openEmailAccountPrefs;
+ (_Bool)allowedToModifyEmailAccounts;
+ (_Bool)canPerformActivityAsIndividualItemsInSourceController:(id)arg1;
+ (_Bool)canPerformActivityWithTotalCount:(unsigned long long)arg1 assetMediaTypeCount:(struct PXAssetMediaTypeCount)arg2;
+ (_Bool)isMailDropEnabled;
+ (id)_momentShareLinkActivityItemsForURL:(id)arg1 momentShare:(id)arg2;
+ (id)_expirationStringForMomentShare:(id)arg1;
+ (id)_momentShareLinkTitleForMomentShare:(id)arg1;
+ (id)_momentShareLinkSubjectForMomentShare:(id)arg1;
+ (id)_momentShareLinkPrompt;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *transcodedVideoFilePath; // @synthesize transcodedVideoFilePath=_transcodedVideoFilePath;
@property(nonatomic, setter=_setRemakerWasCancelled:) _Bool _remakerWasCancelled; // @synthesize _remakerWasCancelled=__remakerWasCancelled;
@property(nonatomic) __weak id <PXActivityItemSourceController> itemSourceController; // @synthesize itemSourceController=_itemSourceController;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)activityDidFinish:(_Bool)arg1;
- (void)performActivity;
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)mailComposeViewController;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (void)_prepareWithMomentShareLink:(id)arg1;
- (_Bool)_canPerformForIndividualAssetsWithActivityItems:(id)arg1;
- (_Bool)_canPerformWithLink;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (_Bool)_momentShareLinkDidFail;
- (void)_composeMailForVideo:(id)arg1 trimmedFilePath:(id)arg2;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)_removeTempVideoRemakerFile;
- (void)_cleanupRemaker;
- (void)remakeVideoAsset:(id)arg1 withTrimStartTime:(double)arg2 endTime:(double)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_transcodeAndSendVideo:(id)arg1;
- (void)cancelRemaking;
- (void)_remakeAndSendVideoAsset:(id)arg1 withTrimStartTime:(double)arg2 endTime:(double)arg3;
- (_Bool)_showTrimViewControllerIfNeededForVideoAsset:(id)arg1;
- (void)_showTrimViewControllerForVideo:(id)arg1 maximumTrimDuration:(double)arg2 trimButtonTitle:(id)arg3;
- (_Bool)_isMailDropEnabled;
- (void)dealloc;
- (void)_pu_cleanup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

