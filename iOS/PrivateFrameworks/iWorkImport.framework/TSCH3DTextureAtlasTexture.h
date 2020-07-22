//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, TSCH3DTextureAtlasTextureResource;

__attribute__((visibility("hidden")))
@interface TSCH3DTextureAtlasTexture : NSObject
{
    tvec2_3b141483 mSize;
    float mSamples;
    NSMutableArray *mLabels;
    vector_56a3751a mPositions;
    long long mCurrentxpos;
    long long mCurrentypos;
    long long mCurrentheight;
    TSCH3DTextureAtlasTextureResource *mResource;
}

@property(readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=mSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)resource;
- (id)getTextureDataBuffer;
- (tvec2_3b141483)addLabel:(id)arg1;
- (void)p_invalidateResource;
- (void)dealloc;
- (id)initWithSize:(tvec2_3b141483)arg1;

@end

