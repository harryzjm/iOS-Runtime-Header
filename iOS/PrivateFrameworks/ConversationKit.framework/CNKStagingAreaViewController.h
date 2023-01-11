//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, TUCall;
@protocol CNKFaceTimeMultiwayConversationViewControllerDelegate, CNKStagingAreaViewControllerDelegate;

@interface CNKStagingAreaViewController : UIViewController
{
    MISSING_TYPE *participantLabel;
    MISSING_TYPE *secondaryParticipantLabel;
    MISSING_TYPE *localPreviewFrontView;
    MISSING_TYPE *localPreviewBackView;
    MISSING_TYPE *audioVisualizationView;
    MISSING_TYPE *controlsViewController;
    MISSING_TYPE *constraintController;
    MISSING_TYPE *controlsDragController;
    MISSING_TYPE *effectsEnabled;
    MISSING_TYPE *avcEffects;
    MISSING_TYPE *effectsCaptureInfo;
    MISSING_TYPE *effectsViewController;
    MISSING_TYPE *effectsBrowserViewController;
    MISSING_TYPE *effectsLayoutController;
    MISSING_TYPE *conversationController;
    MISSING_TYPE *videoDeviceController;
    MISSING_TYPE *numberFormatter;
    MISSING_TYPE *scheduledUpdateTimer;
    MISSING_TYPE *isWaitingToConnect;
    MISSING_TYPE *hasJoined;
    MISSING_TYPE *delegate;
    MISSING_TYPE *stagingAreaDelegate;
    MISSING_TYPE *call;
    MISSING_TYPE *deviceOrientation;
    MISSING_TYPE *isOnScreen;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)hideEffectsBrowser;
- (void)didTapSwapLocalParticipantCamera;
- (void)toggleVideoMute;
- (void)didTapLeaveButton;
- (void)didTapJoinButton;
- (_Bool)_canShowWhileLocked;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithActiveCall:(id)arg1 hasJoined:(_Bool)arg2;
- (id)initWithActiveCall:(id)arg1;
@property(nonatomic) _Bool isOnScreen; // @synthesize isOnScreen;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation;
@property(nonatomic, retain) TUCall *call; // @synthesize call;
@property(nonatomic) __weak id <CNKStagingAreaViewControllerDelegate> stagingAreaDelegate; // @synthesize stagingAreaDelegate;
@property(nonatomic) __weak id <CNKFaceTimeMultiwayConversationViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool hasJoined; // @synthesize hasJoined;
@property(nonatomic) _Bool effectsEnabled; // @synthesize effectsEnabled;

@end
