//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage;

@interface BLRepairLayerStack
{
    int _mode;
    UIImage *_analysisImage;
    UIImage *_sourceImage;
    UIImage *_repairSourceImage;
    UIImage *_redEyeSourceImage;
    struct CGSize _repairSourceSize;
    struct CGSize _redEyeSourceSize;
}

+ (id)layerStack;
+ (id)addAutoRedEyeCorrection:(id)arg1 toCurrentStrokesDataDictionary:(id)arg2 forSourceSize:(struct CGSize)arg3;
+ (int)maxEdgeSize;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) struct CGSize redEyeSourceSize; // @synthesize redEyeSourceSize=_redEyeSourceSize;
@property(retain, nonatomic) UIImage *redEyeSourceImage; // @synthesize redEyeSourceImage=_redEyeSourceImage;
@property(nonatomic) struct CGSize repairSourceSize; // @synthesize repairSourceSize=_repairSourceSize;
@property(retain, nonatomic) UIImage *repairSourceImage; // @synthesize repairSourceImage=_repairSourceImage;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(retain, nonatomic) UIImage *analysisImage; // @synthesize analysisImage=_analysisImage;
- (void).cxx_destruct;
- (void)repairChanged;
- (void)redEyeChanged;
- (id)imagePatchListForLayerStack;
- (struct CGContext *)newContextForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(double)arg3;
- (struct CGImage *)newImageForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(double)arg3;
- (_Bool)readyToDrawForMode:(int)arg1;
@property(nonatomic) __weak UIImage *redEyeRepairedImage;
- (double)timestamp;
- (void)dealloc;
- (_Bool)hasRedEye;
- (_Bool)hasRepair;
- (_Bool)haveLayerMask;
- (_Bool)readyToDraw;
- (void)setStrokesDataDictionary:(id)arg1;
- (id)strokesDataDictionary;
- (id)init;

@end

