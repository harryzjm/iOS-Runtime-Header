//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetsDataSourceManager.h>

@class IMMomentShareCache, NSURL, PHMomentShare, PXStaticDisplayAssetsDataSource;

__attribute__((visibility("hidden")))
@interface CKMomentSharePreviewAssetsDataSourceManager : PXAssetsDataSourceManager
{
    IMMomentShareCache *_momentShareCache;
    PXStaticDisplayAssetsDataSource *_currentDataSource;
    NSURL *_momentShareURL;
    PHMomentShare *_momentShare;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PHMomentShare *momentShare; // @synthesize momentShare=_momentShare;
@property(readonly, nonatomic) NSURL *momentShareURL; // @synthesize momentShareURL=_momentShareURL;
- (void)_momentShareCacheDidChange:(id)arg1;
- (void)_handleFetchedMomentShare:(id)arg1 error:(id)arg2;
- (void)_fetchMomentShare;
- (id)createInitialDataSource;
- (id)initWithMomentShareURL:(id)arg1;
- (id)init;

@end

