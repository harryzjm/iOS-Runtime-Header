//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUI/PUMutableReviewScreenBarsModel-Protocol.h>

@class NSDictionary, NSSet, UIView;

@interface PUReviewScreenBarsModel : PXObservable <PUMutableReviewScreenBarsModel>
{
    _Bool _shouldPlaceScrubberInScrubberBar;
    _Bool _transitioningWithCamera;
    _Bool _lastControlAlignmentChangeForcedLayout;
    _Bool _useVerticalControlLayout;
    _Bool __needsUpdateAvailableControls;
    NSDictionary *_availableItemsByIdentifier;
    NSSet *_availableControls;
    NSSet *_enabledControls;
    UIView *_accessoryView;
    struct CGPoint _controlCenterAlignmentPoint;
}

@property(nonatomic, setter=_setNeedsUpdateAvailableControls:) _Bool _needsUpdateAvailableControls; // @synthesize _needsUpdateAvailableControls=__needsUpdateAvailableControls;
@property(readonly, nonatomic) _Bool useVerticalControlLayout; // @synthesize useVerticalControlLayout=_useVerticalControlLayout;
@property(readonly, nonatomic) _Bool lastControlAlignmentChangeForcedLayout; // @synthesize lastControlAlignmentChangeForcedLayout=_lastControlAlignmentChangeForcedLayout;
@property(readonly, nonatomic) struct CGPoint controlCenterAlignmentPoint; // @synthesize controlCenterAlignmentPoint=_controlCenterAlignmentPoint;
@property(readonly, nonatomic, getter=isTransitioningWithCamera) _Bool transitioningWithCamera; // @synthesize transitioningWithCamera=_transitioningWithCamera;
@property(readonly, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) _Bool shouldPlaceScrubberInScrubberBar; // @synthesize shouldPlaceScrubberInScrubberBar=_shouldPlaceScrubberInScrubberBar;
@property(retain, nonatomic, setter=_setEnabledControls:) NSSet *enabledControls; // @synthesize enabledControls=_enabledControls;
@property(retain, nonatomic, setter=_setAvailableControls:) NSSet *availableControls; // @synthesize availableControls=_availableControls;
@property(readonly, copy, nonatomic) NSDictionary *availableItemsByIdentifier; // @synthesize availableItemsByIdentifier=_availableItemsByIdentifier;
- (void).cxx_destruct;
- (void)setUseVerticalControlLayout:(_Bool)arg1;
- (void)setControlCenterAlignmentPoint:(struct CGPoint)arg1 forceLayout:(_Bool)arg2;
- (void)setControlCenterAlignmentPoint:(struct CGPoint)arg1;
- (void)setTransitioningWithCamera:(_Bool)arg1;
- (void)setShouldPlaceScrubberInScrubberBar:(_Bool)arg1;
- (void)setAccessoryView:(id)arg1;
- (void)setAvailableItemsByIdentifier:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (void)_updateAvailableControls;
- (void)invokeCallbackForBarButtonItemWithIdentifier:(long long)arg1;

@end

