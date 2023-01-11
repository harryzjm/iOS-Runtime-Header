//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXSingleTileLayout
{
    struct CGRect _contentBounds;
    struct CGSize _preferredSize;
    struct PXTileIdentifier _tileIdentifier;
}

@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, nonatomic) struct PXTileIdentifier tileIdentifier; // @synthesize tileIdentifier=_tileIdentifier;
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)contentBounds;
- (void)prepareLayout;
- (void)setReferenceSize:(struct CGSize)arg1;
- (id)initWithTileIdentifier:(struct PXTileIdentifier)arg1;
- (id)init;

@end
