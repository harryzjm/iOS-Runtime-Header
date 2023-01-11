//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUI/PUMutableUUIDSelectionManager-Protocol.h>
#import <PhotosUI/_PUOneUpSelectionIndicatorCompatibleManager-Protocol.h>

@class NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface PUUUIDSelectionManager : PXObservable <_PUOneUpSelectionIndicatorCompatibleManager, PUMutableUUIDSelectionManager>
{
    NSMutableSet *__mutableSelectedUUIDs;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSMutableSet *_mutableSelectedUUIDs; // @synthesize _mutableSelectedUUIDs=__mutableSelectedUUIDs;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)deselectAllUUIDs;
- (void)setSelectedUUIDs:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *selectedUUIDs;
- (void)removeSelectedUUID:(id)arg1;
- (void)addSelectedUUID:(id)arg1;
- (_Bool)isSelectedUUID:(id)arg1;
- (id)init;
- (id)initWithSelectedUUIDs:(id)arg1;
- (_Bool)pu_isAssetReferenceSelected:(id)arg1;
- (void)pu_unregisterSelectionIndicatorObserver:(id)arg1;
- (void)pu_registerSelectionIndicatorObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
