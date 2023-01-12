//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSURL, PLPhotoLibraryPathManager;

@interface PHImportLibrarySource
{
    NSURL *_libraryURL;
    NSDictionary *_renderResourcePathsByIdentifier;
    PLPhotoLibraryPathManager *_pathManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
- (_Bool)_isValidPhotoLibraryWithError:(id *)arg1;
- (id)name;
- (_Bool)isLibrary;
- (_Bool)canReference;
- (id)productKind;
- (void)loadSidecarsFor:(id)arg1;
- (id)assetsByProcessingItem:(id)arg1;
- (void)beginProcessingWithCompletion:(CDUnknownBlockType)arg1;
- (id)resourcePathsByUuidForPaths:(id)arg1;
- (_Bool)containsSupportedMediaWithImportExceptions:(id *)arg1;
- (id)initWithUrls:(id)arg1;

@end
