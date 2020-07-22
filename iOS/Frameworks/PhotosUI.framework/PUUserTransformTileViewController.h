//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUUserTransformViewDelegate-Protocol.h>

@class NSString, PUAssetReference, PUDisplayTileTransform, PUUserTransformView;
@protocol PUUserTransformTileViewControllerDelegate;

@interface PUUserTransformTileViewController <PUUserTransformViewDelegate>
{
    struct {
        _Bool respondsToDidChangeModelTileTransform;
        _Bool respondsToDidChangeIsUserInteracting;
        _Bool respondsToShouldReceiveTouchAtLocationFromProvider;
    } _delegateFlags;
    _Bool _userInteractionEnabled;
    id <PUUserTransformTileViewControllerDelegate> _delegate;
    PUAssetReference *_assetReference;
    PUUserTransformView *_userTransformView;
    PUDisplayTileTransform *__displayTileTransform;
    NSString *__identifier;
    struct CGRect __untransformedContentFrame;
}

@property(copy, nonatomic, setter=_setIdentifier:) NSString *_identifier; // @synthesize _identifier=__identifier;
@property(retain, nonatomic, setter=_setDisplayTileTransform:) PUDisplayTileTransform *_displayTileTransform; // @synthesize _displayTileTransform=__displayTileTransform;
@property(nonatomic, setter=_setUntransformedContentFrame:) struct CGRect _untransformedContentFrame; // @synthesize _untransformedContentFrame=__untransformedContentFrame;
@property(nonatomic, setter=setUserInteractionEnabled:) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(retain, nonatomic, setter=_setUserTransformView:) PUUserTransformView *userTransformView; // @synthesize userTransformView=_userTransformView;
@property(retain, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
@property(nonatomic) __weak id <PUUserTransformTileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)userTransformView:(id)arg1 didChangeIsUserInteracting:(_Bool)arg2;
- (_Bool)userTransformView:(id)arg1 shouldReceiveTouchAtPoint:(struct CGPoint)arg2;
- (void)userTransformView:(id)arg1 didChangeUserAffineTransform:(struct CGAffineTransform)arg2 isUserInteracting:(_Bool)arg3;
- (id)_userInputOriginIdentifier;
- (void)_updateUserInteractionEnabled;
- (void)didChangeAnimating;
- (void)_updateUserTransformPadding;
- (void)_updateUserTransformView;
- (void)applyLayoutInfo:(id)arg1;
- (id)loadView;
- (void)becomeReusable;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

