//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/PXPreferencesObserver-Protocol.h>
#import <PhotosUI/PXSidebarDataSectionEnablement-Protocol.h>

@class NSMapTable, NSString, PHPhotoLibrary;

__attribute__((visibility("hidden")))
@interface PUSidebarDataSectionEnablementController : NSObject <PXPreferencesObserver, PXSidebarDataSectionEnablement>
{
    _Bool _registeredAsPrefObserver;
    NSMapTable *_sectionManagerByItemTypeForAccountStoreChange;
    NSMapTable *_sectionManagersByItemTypeForDefaultsChange;
    PHPhotoLibrary *_photoLibrary;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool registeredAsPrefObserver; // @synthesize registeredAsPrefObserver=_registeredAsPrefObserver;
@property(readonly, nonatomic) __weak PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) NSMapTable *sectionManagersByItemTypeForDefaultsChange; // @synthesize sectionManagersByItemTypeForDefaultsChange=_sectionManagersByItemTypeForDefaultsChange;
@property(readonly, nonatomic) NSMapTable *sectionManagerByItemTypeForAccountStoreChange; // @synthesize sectionManagerByItemTypeForAccountStoreChange=_sectionManagerByItemTypeForAccountStoreChange;
- (void)preferencesDidChange;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_observeDefaultsForManager:(id)arg1 enablementItem:(long long)arg2;
- (void)_observeAccountsStoreForManager:(id)arg1 enablementItem:(long long)arg2;
- (void)_configureEnablementOfSectionManager:(id)arg1 enablementItem:(long long)arg2 setupObservation:(_Bool)arg3;
- (void)configureEnablementOfSectionManager:(id)arg1 enablementItem:(long long)arg2;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
