//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGadgetDataSourceManager.h>

@class NSArray, NSString, PHPhotoLibrary, PUSessionInfo, PXExtendedTraitCollection, PXLibraryFilterState;

__attribute__((visibility("hidden")))
@interface PUAlbumsGadgetDataSourceManager : PXGadgetDataSourceManager
{
    PXExtendedTraitCollection *_traitCollection;
    PHPhotoLibrary *_photoLibrary;
    PXLibraryFilterState *_libraryFilterState;
    PUSessionInfo *_sessionInfo;
    NSArray *_providers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(readonly, nonatomic) PXLibraryFilterState *libraryFilterState; // @synthesize libraryFilterState=_libraryFilterState;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)gadgetProviders;
- (void)removeCachedProviders;
- (id)initWithTraitCollection:(id)arg1 sessionInfo:(id)arg2 photoLibrary:(id)arg3 libraryFilterState:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

