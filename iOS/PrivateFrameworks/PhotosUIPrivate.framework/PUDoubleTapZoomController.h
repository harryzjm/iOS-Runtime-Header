//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITapGestureRecognizer;
@protocol PUDoubleTapZoomControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUDoubleTapZoomController : NSObject
{
    struct {
        _Bool respondsToViewHostingGestureRecognizers;
        _Bool respondsToTilingView;
        _Bool respondsToDelegateForGestureRecognizer;
        _Bool respondsToCanDoubleTapBeginAtLocationFromProvider;
    } _delegateFlags;
    _Bool __needsUpdateGestureRecognizers;
    id <PUDoubleTapZoomControllerDelegate> _delegate;
    UITapGestureRecognizer *__doubleTapGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setDoubleTapGestureRecognizer:) UITapGestureRecognizer *_doubleTapGestureRecognizer; // @synthesize _doubleTapGestureRecognizer=__doubleTapGestureRecognizer;
@property(nonatomic, setter=_setNeedsUpdateGestureRecognizers:) _Bool _needsUpdateGestureRecognizers; // @synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers;
@property(nonatomic) __weak id <PUDoubleTapZoomControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)_userTransformViewAtLocationFromProvider:(id)arg1;
- (void)_handleDoubleTapGestureRecognizer:(id)arg1;
- (void)_updateGestureRecognizersIfNeeded;
- (void)_invalidateGestureRecognizers;
- (_Bool)shouldDoubleTapBeginAtLocationFromProvider:(id)arg1;
@property(readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
- (void)invalidateViewHostingGestureRecognizers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

