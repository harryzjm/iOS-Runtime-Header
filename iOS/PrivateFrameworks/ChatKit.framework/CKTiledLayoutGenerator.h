//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKTiledLayoutGeneratorScanState;

__attribute__((visibility("hidden")))
@interface CKTiledLayoutGenerator : NSObject
{
    long long _cacheTailLocation;
    long long _cacheHeadLocation;
    CDStruct_1417b155 _cachedTileInfo[20];
    id _cachedBatchID[20];
    _Bool _scannedBatchHasCaption;
    _Bool _shouldStop;
    long long _tileCount;
    CDUnknownBlockType _tileImageSizeBlock;
    CDUnknownBlockType _tileMinimumSizeBlock;
    CDUnknownBlockType _tileHasCaptionBlock;
    CDUnknownBlockType _tileCaptionSizeBlock;
    CDUnknownBlockType _tileBatchIDBlock;
    long long _numberOfMagneticGuidelines;
    double _roundingScale;
    CDUnknownBlockType _parsedFrameBlock;
    long long _scanLocation;
    id _scannedBatchID;
    long long _scanSpecialSequenceCount;
    struct CGSize _interTileSpacing;
    struct CGSize _noCaptionSpacing;
    struct UIEdgeInsets _captionPadding;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldStop; // @synthesize shouldStop=_shouldStop;
@property(nonatomic) long long scanSpecialSequenceCount; // @synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount;
@property(nonatomic) _Bool scannedBatchHasCaption; // @synthesize scannedBatchHasCaption=_scannedBatchHasCaption;
@property(retain, nonatomic) id scannedBatchID; // @synthesize scannedBatchID=_scannedBatchID;
@property(nonatomic) long long scanLocation; // @synthesize scanLocation=_scanLocation;
@property(copy, nonatomic) CDUnknownBlockType parsedFrameBlock; // @synthesize parsedFrameBlock=_parsedFrameBlock;
@property(nonatomic) double roundingScale; // @synthesize roundingScale=_roundingScale;
@property(nonatomic) long long numberOfMagneticGuidelines; // @synthesize numberOfMagneticGuidelines=_numberOfMagneticGuidelines;
@property(copy, nonatomic) CDUnknownBlockType tileBatchIDBlock; // @synthesize tileBatchIDBlock=_tileBatchIDBlock;
@property(copy, nonatomic) CDUnknownBlockType tileCaptionSizeBlock; // @synthesize tileCaptionSizeBlock=_tileCaptionSizeBlock;
@property(copy, nonatomic) CDUnknownBlockType tileHasCaptionBlock; // @synthesize tileHasCaptionBlock=_tileHasCaptionBlock;
@property(nonatomic) struct CGSize noCaptionSpacing; // @synthesize noCaptionSpacing=_noCaptionSpacing;
@property(nonatomic) struct UIEdgeInsets captionPadding; // @synthesize captionPadding=_captionPadding;
@property(copy, nonatomic) CDUnknownBlockType tileMinimumSizeBlock; // @synthesize tileMinimumSizeBlock=_tileMinimumSizeBlock;
@property(copy, nonatomic) CDUnknownBlockType tileImageSizeBlock; // @synthesize tileImageSizeBlock=_tileImageSizeBlock;
@property(nonatomic) struct CGSize interTileSpacing; // @synthesize interTileSpacing=_interTileSpacing;
@property(nonatomic) long long tileCount; // @synthesize tileCount=_tileCount;
- (double)valueByRounding:(double)arg1 usingMagneticGuidelines:(_Bool)arg2;
- (void)parsedFrame:(struct CGRect)arg1 type:(long long)arg2 forTileAtIndex:(long long)arg3;
- (struct CGSize)captionSizeForTileAtIndex:(long long)arg1 proposedSize:(struct CGSize)arg2;
- (_Bool)scanTile:(CDStruct_1417b155 *)arg1 ofType:(long long)arg2;
- (_Bool)scanTile:(CDStruct_1417b155 *)arg1 type:(long long *)arg2;
- (_Bool)scanTileWithSquareImage:(CDStruct_1417b155 *)arg1;
- (_Bool)scanTileWithHorizontalPanorama:(CDStruct_1417b155 *)arg1;
- (_Bool)scanTileWithLandscapeImage:(CDStruct_1417b155 *)arg1;
- (_Bool)scanTileWithPortraitImage:(CDStruct_1417b155 *)arg1;
- (_Bool)scanAnyTile:(CDStruct_1417b155 *)arg1;
- (_Bool)scanTile:(CDStruct_1417b155 *)arg1 passingTest:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isAtEnd;
@property(retain, nonatomic) CKTiledLayoutGeneratorScanState *scanState;
- (void)didParseTiles;
- (_Bool)parseNextTiles;
- (void)willParseTiles;
- (void)parseTiles;
- (void)enumerateFramesWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

