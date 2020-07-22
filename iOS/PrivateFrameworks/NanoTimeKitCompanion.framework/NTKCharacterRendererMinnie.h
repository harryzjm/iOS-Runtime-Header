//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, _Flower, _Skirt;

@interface NTKCharacterRendererMinnie
{
    _Flower *_flower;
    _Skirt *_skirt;
    NSMutableArray *_footTexs[2];
}

- (void).cxx_destruct;
- (void)_drawBody;
- (void)_drawTappingFoot;
- (void)_drawHead;
- (void)_drawSkirt;
- (void)_drawFlower;
- (void)setupBodyState;
- (void)setupVAOs;
- (void)loadFootTextures;
- (id)initWithLoader:(id)arg1;

@end

