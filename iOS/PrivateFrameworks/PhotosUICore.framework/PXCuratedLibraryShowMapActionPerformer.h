//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHFetchResult;

@interface PXCuratedLibraryShowMapActionPerformer
{
    PHFetchResult *_assetsFetchResult;
}

+ (_Bool)canPerformWithFetchResult:(id)arg1;
@property(readonly, nonatomic) PHFetchResult *assetsFetchResult; // @synthesize assetsFetchResult=_assetsFetchResult;
- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (id)activitySystemImageName;
- (id)activityType;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2 assetCollectionReference:(id)arg3;
- (id)initWithViewModel:(id)arg1 assetCollectionReference:(id)arg2 assetsFetchResult:(id)arg3;

@end
