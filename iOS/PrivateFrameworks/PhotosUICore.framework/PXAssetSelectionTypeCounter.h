//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXInfoProvider-Protocol.h>
#import <PhotosUICore/PXInfoUpdaterObserver-Protocol.h>

@class NSObject, NSString, PXInfoUpdater, PXSectionedSelectionManager;
@protocol OS_dispatch_queue;

@interface PXAssetSelectionTypeCounter <PXChangeObserver, PXInfoProvider, PXInfoUpdaterObserver>
{
    NSObject<OS_dispatch_queue> *_countUpdateQueue;
    PXSectionedSelectionManager *_selectionManager;
    PXInfoUpdater *_infoUpdater;
    CDStruct_15189878 _typedCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXInfoUpdater *infoUpdater; // @synthesize infoUpdater=_infoUpdater;
@property(nonatomic) CDStruct_15189878 typedCount; // @synthesize typedCount=_typedCount;
@property(readonly, nonatomic) __weak PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
- (void)infoUpdaterDidUpdate:(id)arg1;
- (long long)priorityForInfoRequestOfKind:(id)arg1;
- (id)requestInfoOfKind:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (id)selectionSnapshot;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithSelectionManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
