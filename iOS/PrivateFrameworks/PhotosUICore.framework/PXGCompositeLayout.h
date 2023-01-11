//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGDataSourceDrivenLayout-Protocol.h>

@class NSString, PXGSublayoutComposition;
@protocol PXGSublayoutFaultingDelegate;

@interface PXGCompositeLayout <PXGDataSourceDrivenLayout>
{
    CDStruct_d97c9657 _updateFlags;
    _Bool _isUpdatingSublayouts;
    long long *_currentSingleLayouts;
    long long *_pendingSingleLayouts;
    _Bool *_pendingAnimations;
    PXGSublayoutComposition *_composition;
    id <PXGSublayoutFaultingDelegate> _sublayoutFaultingDelegate;
    struct UIEdgeInsets _faultInOutsets;
    struct UIEdgeInsets _faultOutOutsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets faultOutOutsets; // @synthesize faultOutOutsets=_faultOutOutsets;
@property(nonatomic) struct UIEdgeInsets faultInOutsets; // @synthesize faultInOutsets=_faultInOutsets;
@property(nonatomic) __weak id <PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate; // @synthesize sublayoutFaultingDelegate=_sublayoutFaultingDelegate;
@property(retain, nonatomic) PXGSublayoutComposition *composition; // @synthesize composition=_composition;
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)_updateSublayouts;
- (void)_invalidateSublayouts;
- (void)_updateSublayoutOfStylableType:(long long)arg1;
- (void)_invalidateStylableType:(long long)arg1;
- (void)update;
- (void)didApplySublayoutChangeDetails:(id)arg1 axAdjustedSubgroupChangeDetails:(id)arg2 countAfterChanges:(long long)arg3;
- (void)scrollSpeedRegimeDidChange;
- (void)screenScaleDidChange;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void)viewEnvironmentDidChange;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (void)didAddSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (void)insertSublayoutProvider:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)setSublayoutIndex:(long long)arg1 forUniquelyStylableType:(long long)arg2 animated:(_Bool)arg3;
- (id)initWithComposition:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
