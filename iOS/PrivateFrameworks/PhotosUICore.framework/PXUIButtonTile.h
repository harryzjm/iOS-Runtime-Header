//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSArray, NSString, PXButtonSpec, UIButton, UIView;
@protocol PXUIButtonTileDelegate;

@interface PXUIButtonTile : NSObject <PXUIViewBasicTile, PXReusableObject>
{
    _Bool _hasScheduledUpdate;
    CDStruct_6d279c03 _needsUpdateFlags;
    id <PXUIButtonTileDelegate> _delegate;
    NSString *_title;
    UIView *__view;
    UIButton *__button;
    PXButtonSpec *__spec;
    NSArray *__layoutConstraints;
}

@property(copy, nonatomic, setter=_setLayoutConstraints:) NSArray *_layoutConstraints; // @synthesize _layoutConstraints=__layoutConstraints;
@property(retain, nonatomic, setter=_setSpec:) PXButtonSpec *_spec; // @synthesize _spec=__spec;
@property(readonly, nonatomic) UIButton *_button; // @synthesize _button=__button;
@property(readonly, nonatomic) UIView *_view; // @synthesize _view=__view;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <PXUIButtonTileDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)becomeReusable;
@property(readonly, nonatomic) UIView *view;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)_updateButtonIfNeeded;
- (void)_invalidateButton;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_handleButton:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
