//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarDisplayingController-Protocol.h>
#import <AvatarUI/AVTAvatarTransitionModel-Protocol.h>

@class AVTAdaptativeLayoutView, AVTImageTransitioningContainerView, AVTRenderingScope, AVTViewSession, NSString, _AVTAvatarRecordImageProvider;
@protocol AVTAvatarDisplayingControllerDelegate, AVTAvatarRecord, AVTPresenterDelegate, AVTTransition, AVTUILogger;

@interface AVTSingleAvatarController : NSObject <AVTAvatarTransitionModel, AVTAvatarDisplayingController>
{
    id <AVTAvatarDisplayingControllerDelegate> delegate;
    id <AVTPresenterDelegate> presenterDelegate;
    AVTAdaptativeLayoutView *_view;
    AVTImageTransitioningContainerView *_transitioningContainer;
    id <AVTAvatarRecord> _displayedRecord;
    AVTViewSession *_avtViewSession;
    _AVTAvatarRecordImageProvider *_thumbnailRenderer;
    AVTRenderingScope *_renderingScope;
    id <AVTUILogger> _logger;
    id <AVTTransition> _currentTransition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <AVTTransition> currentTransition; // @synthesize currentTransition=_currentTransition;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) AVTRenderingScope *renderingScope; // @synthesize renderingScope=_renderingScope;
@property(retain, nonatomic) _AVTAvatarRecordImageProvider *thumbnailRenderer; // @synthesize thumbnailRenderer=_thumbnailRenderer;
@property(retain, nonatomic) AVTViewSession *avtViewSession; // @synthesize avtViewSession=_avtViewSession;
@property(retain, nonatomic) id <AVTAvatarRecord> displayedRecord; // @synthesize displayedRecord=_displayedRecord;
@property(retain, nonatomic) AVTImageTransitioningContainerView *transitioningContainer; // @synthesize transitioningContainer=_transitioningContainer;
@property(retain, nonatomic) AVTAdaptativeLayoutView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <AVTPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate;
@property(nonatomic) __weak id <AVTAvatarDisplayingControllerDelegate> delegate; // @synthesize delegate;
- (void)applyFullAlpha;
- (void)applyBaseAlpha;
- (id)liveView;
- (void)transitionLiveViewToFront;
- (void)transitionStaticViewToFront;
- (void)transitionToShowingDisplayedRecordWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)transitionToOtherDisplayedRecord;
- (void)updateImageViewWithAVTViewSnapshot;
- (void)updateImageViewWithDisplayedRecord;
- (void)prepareToTransitionToVisible:(_Bool)arg1 completionHandler:(CDUnknownBlockType *)arg2;
- (void)displayAvatarForRecord:(id)arg1 animated:(_Bool)arg2;
- (void)stopUsingAVTViewSessionSynchronously:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)useAVTViewFromSession:(id)arg1 withLayout:(id)arg2;
- (void)prepareViewWithLayout:(id)arg1;
- (void)reloadData;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)isViewLoaded;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
