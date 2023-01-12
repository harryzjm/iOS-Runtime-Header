//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGViewSource-Protocol.h>

@class NSString, NSTimer, PXStoryAnimationController, PXStoryHUDViewConfiguration, PXStoryModel, PXStoryRelatedController, PXStoryViewModel;

@interface PXStoryDiagnosticHUDLayout <PXGViewSource, PXChangeObserver>
{
    CDStruct_af00bf4e _updateFlags;
    unsigned int _viewSpriteIndex;
    unsigned int _badgeSpriteIndex;
    unsigned short _contentVersion;
    _Bool _wantsHUDContentVisible;
    PXStoryHUDViewConfiguration *_configuration;
    PXStoryHUDViewConfiguration *_badgeConfiguration;
    PXStoryViewModel *_viewModel;
    NSTimer *_timer;
    PXStoryRelatedController *_relatedController;
    PXStoryModel *_model;
    PXStoryAnimationController *_animationController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PXStoryAnimationController *animationController; // @synthesize animationController=_animationController;
@property(retain, nonatomic) PXStoryModel *model; // @synthesize model=_model;
@property(retain, nonatomic) PXStoryRelatedController *relatedController; // @synthesize relatedController=_relatedController;
@property(readonly, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) PXStoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) PXStoryHUDViewConfiguration *badgeConfiguration; // @synthesize badgeConfiguration=_badgeConfiguration;
@property(readonly, nonatomic) PXStoryHUDViewConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)axSpriteIndexes;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)_updateContent;
- (void)_invalidateContent;
- (void)_updateControllers;
- (void)_invalidateControllers;
- (void)_updateModel;
- (void)_invalidateModel;
- (void)update;
- (_Bool)_shouldDisplayContentForHUDType:(long long)arg1;
- (void)safeAreaInsetsDidChange;
- (void)_enumerateDiagnosticHUDContentProvidersUsingBlock:(CDUnknownBlockType)arg1;
- (void)_updateTextInConfiguration:(id)arg1;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
