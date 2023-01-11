//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKActivityObserving-Protocol.h>
#import <MapKit/UGCCallToActionEditAccessoryViewDelegate-Protocol.h>

@class MKUGCCallToActionViewAppearance, NSArray, NSString, UILabel, UIView;
@protocol MKUGCCallToActionViewDelegate;

__attribute__((visibility("hidden")))
@interface MKUGCCallToActionView <UGCCallToActionEditAccessoryViewDelegate, MKActivityObserving>
{
    UIView *_accessoryButtonContainerView;
    UIView *_currentAccessoryView;
    NSArray *_constraints;
    UILabel *_callToActionLabel;
    MKUGCCallToActionViewAppearance *_appearance;
    double _verticalSpacing;
    id <MKUGCCallToActionViewDelegate> _delegate;
    long long _presentationContext;
}

- (void).cxx_destruct;
@property(nonatomic) long long presentationContext; // @synthesize presentationContext=_presentationContext;
@property(nonatomic) __weak id <MKUGCCallToActionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MKUGCCallToActionViewAppearance *appearance; // @synthesize appearance=_appearance;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;
- (void)beginAnimatingActivityIndicator;
- (void)_addPhotosButtonPressed;
- (void)_likeButtonPressed;
- (void)_dislikeButtonPressed;
- (void)callToActionEditAccessoryViewTapped:(id)arg1;
@property(readonly, nonatomic) NSString *analyticValue;
@property(readonly, nonatomic) UIView *anchoringView;
- (void)_updateAccessoryView:(_Bool)arg1;
- (void)_invalidateLayout;
- (void)_contentSizeChanged;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)initWithAppearance:(id)arg1 verticalSpacing:(double)arg2;
- (id)initWithAppearance:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
