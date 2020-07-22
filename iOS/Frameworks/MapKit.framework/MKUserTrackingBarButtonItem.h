//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIBarButtonItem.h>

#import <MapKit/MKUserTrackingButtonTarget-Protocol.h>

@class MKMapView, NSString, UIButton, UIImage, UINavigationBar, UIToolbar, UIView, _MKUserTrackingButton, _MKUserTrackingButtonController;
@protocol MKUserTrackingView;

@interface MKUserTrackingBarButtonItem : UIBarButtonItem <MKUserTrackingButtonTarget>
{
    _Bool _hasCustomAssociatedView;
    UIButton *_customButton;
    _MKUserTrackingButtonController *_controller;
    _MKUserTrackingButton *_userTrackingButton;
    _Bool _isLegacy;
    _Bool _explicitlyEnabled;
    _Bool _internallyEnabled;
    UIImage *_trackingEmptyImage;
    UIImage *_trackingNoneImage;
    UIImage *_trackingFollowImage;
    UIImage *_trackingFollowWithHeadingImage;
    MKMapView *_mapView;
    UIToolbar *_toolbar;
    UINavigationBar *_navigationBar;
    UIView *_associatedView;
}

+ (Class)_activityIndicatorClass;
@property(retain, nonatomic) UIView *_associatedView; // @synthesize _associatedView;
@property(retain, nonatomic) UINavigationBar *_navigationBar; // @synthesize _navigationBar;
@property(retain, nonatomic) UIToolbar *_toolbar; // @synthesize _toolbar;
- (void).cxx_destruct;
- (void)_goToNextMode:(id)arg1;
@property(nonatomic, setter=_setState:) long long _state;
- (void)_updateForState:(long long)arg1;
- (_Bool)_isHighlightedForState:(long long)arg1;
- (long long)_styleForState:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)createViewForNavigationItem:(id)arg1;
- (id)createViewForToolbar:(id)arg1;
- (void)_setInternallyEnabled:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
@property(retain, nonatomic) MKMapView *mapView;
@property(retain, nonatomic, setter=_setUserTrackingView:) id <MKUserTrackingView> _userTrackingView;
- (void)_repositionViews;
- (_Bool)_isInMiniBar;
- (long long)_activityIndicatorStyle;
- (id)_trackingFollowWithHeadingImage;
- (id)_trackingFollowImage;
- (id)_trackingNoneImage;
- (id)_trackingEmptyImage;
- (void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2;
- (id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1;
- (void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2;
- (id)_imageForUserTrackingMode:(long long)arg1;
- (id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
@property(nonatomic, getter=_selectsWhenTracking, setter=_setSelectsWhenTracking:) _Bool selectsWhenTracking;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithMapView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

