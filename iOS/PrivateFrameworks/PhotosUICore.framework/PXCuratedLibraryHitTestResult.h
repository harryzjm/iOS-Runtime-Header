//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXAssetCollectionReference, PXAssetReference;

@interface PXCuratedLibraryHitTestResult
{
    long long _control;
    PXAssetReference *_assetReference;
    PXAssetCollectionReference *_assetCollectionReference;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference; // @synthesize assetCollectionReference=_assetCollectionReference;
@property(readonly, nonatomic) PXAssetReference *assetReference; // @synthesize assetReference=_assetReference;
@property(readonly, nonatomic) long long control; // @synthesize control=_control;
- (id)initWithSpriteReference:(id)arg1 layout:(id)arg2 identifier:(id)arg3 userData:(id)arg4;
- (id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetReference:(id)arg4 assetCollectionReference:(id)arg5;
- (id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetCollectionReference:(id)arg4;
- (id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetReference:(id)arg4;
- (id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3;

@end
