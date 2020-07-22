//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXVerticalFeedLayoutGenerator
{
    struct CGPoint _origin;
    struct PXTileInfo _enqueuedCaptionTileInfo;
    _Bool _shouldDisplayCaptionsBelowBatches;
    double _referenceWidth;
}

@property(nonatomic) _Bool shouldDisplayCaptionsBelowBatches; // @synthesize shouldDisplayCaptionsBelowBatches=_shouldDisplayCaptionsBelowBatches;
@property(nonatomic) double referenceWidth; // @synthesize referenceWidth=_referenceWidth;
- (void)_willAddRowWithFirstTileInfo:(struct PXTileInfo)arg1;
- (_Bool)_addSpecialSequenceBlock:(struct PXTileInfo *)arg1;
- (_Bool)_addRowWithTiles:(struct PXTileInfo *)arg1 imageFrames:(struct CGRect *)arg2 count:(long long)arg3;
- (void)_enumerateRowFramesWithContiguousTiles:(struct PXTileInfo *)arg1 count:(long long)arg2 useMagneticGuidelines:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (_Bool)_addRowWithContiguousTiles:(struct PXTileInfo *)arg1 count:(long long)arg2;
- (_Bool)_dequeueCaption;
- (_Bool)_hasEnqueuedCaption;
- (void)_enqueueCaptionWithTileInfo:(struct PXTileInfo)arg1;
- (_Bool)_isAtEndOfRow;
- (_Bool)_hasLeftSuboptimalRow;
- (_Bool)_scanTripletWithRearrangment:(struct PXTileInfo *)arg1;
- (_Bool)_scanTripletWithLargeLead:(struct PXTileInfo *)arg1;
- (_Bool)_scanNonPanoramaSequence:(struct PXTileInfo *)arg1 count:(long long)arg2;
- (_Bool)_scanSpecialSequenceRow:(struct PXTileInfo *)arg1 count:(long long *)arg2;
- (_Bool)_scanSpecialSequenceBlock:(struct PXTileInfo *)arg1;
- (_Bool)_scanTileTriplet:(struct PXTileInfo *)arg1;
- (_Bool)_scanTilePair:(struct PXTileInfo *)arg1;
- (_Bool)_scanTileRequiringNewRow:(struct PXTileInfo *)arg1;
- (_Bool)_scanTileRequiringFullWidth:(struct PXTileInfo *)arg1;
- (_Bool)_parseSpecialSubsequenceWithRowRequired:(_Bool)arg1 rowParsed:(_Bool *)arg2;
- (_Bool)_parseSpecialSequence;
- (_Bool)_parseSpecialTileTriplet;
- (_Bool)_parseTileRequiringFullWidth;
- (_Bool)_parseTileTriplet;
- (_Bool)_parseTilePair;
- (_Bool)_parseSingleTile;
- (double)referenceDistanceForMagneticGuidelines;
- (void)didParseTiles;
- (_Bool)parseNextTiles;
- (void)willParseTiles;

@end

