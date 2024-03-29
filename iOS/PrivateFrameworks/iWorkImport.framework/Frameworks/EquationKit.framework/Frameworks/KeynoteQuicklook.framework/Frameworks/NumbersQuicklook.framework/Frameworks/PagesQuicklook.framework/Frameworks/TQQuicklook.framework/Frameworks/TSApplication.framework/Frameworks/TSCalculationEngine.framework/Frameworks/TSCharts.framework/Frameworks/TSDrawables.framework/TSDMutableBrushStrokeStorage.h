//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, TSUImage;

@interface TSDMutableBrushStrokeStorage : NSObject
{
    NSMutableDictionary *_paths;
    NSMutableDictionary *_bounds;
    NSMutableDictionary *_textureIndices;
    NSMutableDictionary *_options;
    NSMutableDictionary *_lineEnds;
    TSUImage *_image;
}

+ (id)p_smoothPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *lineEnds; // @synthesize lineEnds=_lineEnds;
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSDictionary *textureIndices; // @synthesize textureIndices=_textureIndices;
@property(readonly, copy, nonatomic) NSDictionary *bounds; // @synthesize bounds=_bounds;
@property(readonly, copy, nonatomic) NSDictionary *paths; // @synthesize paths=_paths;
@property(readonly, nonatomic) TSUImage *image; // @synthesize image=_image;
- (id)deepCopy;
- (void)setLineEnd:(id)arg1 forKey:(id)arg2;
- (void)setOption:(id)arg1 forKey:(id)arg2;
- (void)addTextureIndex:(unsigned long long)arg1 forKey:(id)arg2;
- (void)addPath:(id)arg1 withBounds:(struct CGRect)arg2 shouldSmooth:(_Bool)arg3 forKey:(id)arg4;
- (void)setImage:(id)arg1;
@property(readonly, nonatomic) unsigned long long totalSectionCount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

