//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXHorizontalCollectionGadgetProvider.h>

#import <PhotosUI/PXChangeObserver-Protocol.h>
#import <PhotosUI/PXCollectionsDataSourceManagerObserver-Protocol.h>
#import <PhotosUI/PXSettingsKeyObserver-Protocol.h>

@class NSString, PUAlbumsGadgetProvider, PUSessionInfo, PXExtendedTraitCollection, PXPhotoKitCollectionsDataSourceManager;

@interface PUHorizontalAlbumListGadgetProvider : PXHorizontalCollectionGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXCollectionsDataSourceManagerObserver>
{
    NSString *_title;
    PUSessionInfo *_sessionInfo;
    unsigned long long _type;
    PXExtendedTraitCollection *_traitCollection;
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;
    PUAlbumsGadgetProvider *_albumsGadgetProvider;
}

@property(retain, nonatomic) PUAlbumsGadgetProvider *albumsGadgetProvider; // @synthesize albumsGadgetProvider=_albumsGadgetProvider;
@property(retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
- (id)title;
- (void).cxx_destruct;
- (id)_seeAllViewController;
- (id)_fromMyMacConfiguration;
- (id)_peoplePlacesAndMediaTypesConfiguration;
- (_Bool)_canProvideGadgets;
- (id)_newConfiguration;
- (void)_handleDataSourceChange;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)startLoadingRemainingData;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)loadDataForGadgets;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 extendedTraitCollection:(id)arg2 sessionInfo:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

