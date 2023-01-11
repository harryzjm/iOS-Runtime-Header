//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIMailActivity.h>

#import <PhotosUI/MFMailComposeViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUMomentShareActivity-Protocol.h>

@class MFMailComposeViewController, NSString, PLManagedAsset, PLProgressView, PLUIEditVideoViewController, PUActivityItemSource, PUActivityItemSourceController, UIViewController;

__attribute__((visibility("hidden")))
@interface PUMailActivity : UIMailActivity <MFMailComposeViewControllerDelegate, PUMomentShareActivity>
{
    UIViewController *_referenceViewController;
    PLManagedAsset *_currentVideo;
    PUActivityItemSource *_currentVideoItemSource;
    MFMailComposeViewController *_mailComposeController;
    PLUIEditVideoViewController *_editVideoViewController;
    PLProgressView *_remakerProgressView;
    id _strongSelf;
    _Bool _isSharingSingleVideo;
    _Bool _didCheckMailDropAvailable;
    _Bool _isMailDropAvailable;
    PUActivityItemSourceController *_itemSourceController;
}

+ (void)openEmailAccountPrefs;
+ (_Bool)allowedToModifyEmailAccounts;
+ (id)_momentShareLinkActivityItemsForURL:(id)arg1 momentShare:(id)arg2;
+ (id)_expirationStringForMomentShare:(id)arg1;
+ (id)_momentShareLinkTitleForMomentShare:(id)arg1;
+ (id)_momentShareLinkSubjectForMomentShare:(id)arg1;
+ (id)_momentShareLinkPrompt;
+ (_Bool)wantsMomentShareLinkForAssetCount:(long long)arg1;
@property(nonatomic) __weak PUActivityItemSourceController *itemSourceController; // @synthesize itemSourceController=_itemSourceController;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)activityDidFinish:(_Bool)arg1;
- (void)performActivity;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)mailComposeViewController;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (void)_prepareWithMomentShareLink:(id)arg1;
- (_Bool)_canPerformForIndividualAssetsWithActivityItems:(id)arg1;
- (_Bool)_canPerformWithLink;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (_Bool)_momentShareLinkDidFail;
- (void)_sendViaEmail;
- (void)_composeMailForVideo:(id)arg1 trimmedFilePath:(id)arg2;
- (void)_transcodeVideo:(id)arg1 usingMode:(int)arg2;
- (void)cancelRemaking;
- (void)_remakeAndSendVideoWithTrimStartTime:(double)arg1 endTime:(double)arg2;
- (_Bool)_showTrimViewControllerIfNeededForVideo:(id)arg1 usingMode:(int)arg2;
- (void)_showTrimViewControllerForVideo:(id)arg1 maximumTrimDuration:(double)arg2 trimButtonTitle:(id)arg3;
- (_Bool)_isMailDropEnabled;
- (void)dealloc;
- (void)_pu_cleanup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

