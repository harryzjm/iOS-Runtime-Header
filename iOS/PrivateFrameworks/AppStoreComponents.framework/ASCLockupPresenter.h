//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSPromise, ASCAppearMetricsPresenter, ASCLockup, ASCLockupRequest, ASCLockupViewGroup, ASCOfferPresenter, ASCPresenterContext, ASCSignpostSpan;
@protocol ASCLockupPresenterObserver, ASCLockupPresenterView;

__attribute__((visibility("hidden")))
@interface ASCLockupPresenter : NSObject
{
    id <ASCLockupPresenterObserver> _observer;
    ASCLockup *_lockup;
    ASCLockupViewGroup *_group;
    ASCLockupRequest *_request;
    CDUnknownBlockType _viewRenderSpanProvider;
    id <ASCLockupPresenterView> _view;
    ASCPresenterContext *_context;
    ASCOfferPresenter *_offerPresenter;
    ASCAppearMetricsPresenter *_metricsPresenter;
    AMSPromise *_pendingRequestedLockup;
    ASCSignpostSpan *_pendingViewRender;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASCSignpostSpan *pendingViewRender; // @synthesize pendingViewRender=_pendingViewRender;
@property(retain, nonatomic) AMSPromise *pendingRequestedLockup; // @synthesize pendingRequestedLockup=_pendingRequestedLockup;
@property(readonly, nonatomic) ASCAppearMetricsPresenter *metricsPresenter; // @synthesize metricsPresenter=_metricsPresenter;
@property(readonly, nonatomic) ASCOfferPresenter *offerPresenter; // @synthesize offerPresenter=_offerPresenter;
@property(readonly, nonatomic) ASCPresenterContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak id <ASCLockupPresenterView> view; // @synthesize view=_view;
@property(copy, nonatomic) CDUnknownBlockType viewRenderSpanProvider; // @synthesize viewRenderSpanProvider=_viewRenderSpanProvider;
@property(copy, nonatomic) ASCLockupRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) ASCLockupViewGroup *group; // @synthesize group=_group;
@property(copy, nonatomic) ASCLockup *lockup; // @synthesize lockup=_lockup;
@property(nonatomic) __weak id <ASCLockupPresenterObserver> observer; // @synthesize observer=_observer;
- (id)description;
- (void)retryGroup:(id)arg1;
- (void)daemonDidRebootstrap:(id)arg1;
- (void)endViewRender;
- (void)beginViewRender;
- (void)iconArtwork:(id)arg1 didFailFetchWithError:(id)arg2;
- (void)iconArtwork:(id)arg1 didFetchImage:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didCompleteWithLockup:(id)arg2;
- (void)requestWillFetchLockup:(id)arg1;
- (void)performFollowUpWork:(CDUnknownBlockType)arg1;
- (void)performIconFetch;
- (void)performLockupFetch;
- (_Bool)retryRequestIfNeeded;
@property(readonly, nonatomic) _Bool prefersRightToLeftViewLayout;
- (void)dealloc;
- (id)initWithView:(id)arg1 offerPresenter:(id)arg2 metricsPresenter:(id)arg3;
- (id)initWithView:(id)arg1 offerPresenter:(id)arg2 metricsPresenter:(id)arg3 context:(id)arg4;

@end
