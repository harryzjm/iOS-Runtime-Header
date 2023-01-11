//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCH3DCamera, TSCH3DDataBufferResource;
@protocol TSCH3DShadowsRenderer;

__attribute__((visibility("hidden")))
@interface TSCH3DChartShadowsPropertiesInternal : NSObject
{
    _Bool mEnabled;
    TSCH3DCamera *mCamera;
    TSCH3DDataBufferResource *mQuad;
    TSCH3DDataBufferResource *mTexcoords;
    TSCH3DDataBufferResource *mFadecoords;
    NSObject<TSCH3DShadowsRenderer> *mRenderer;
    box_a3bd9649 mShadowPlanePadding;
}

@property(readonly, nonatomic) NSObject<TSCH3DShadowsRenderer> *renderer; // @synthesize renderer=mRenderer;
@property(retain, nonatomic) TSCH3DDataBufferResource *fadecoords; // @synthesize fadecoords=mFadecoords;
@property(retain, nonatomic) TSCH3DDataBufferResource *texcoords; // @synthesize texcoords=mTexcoords;
@property(retain, nonatomic) TSCH3DDataBufferResource *quad; // @synthesize quad=mQuad;
@property(retain, nonatomic) TSCH3DCamera *camera; // @synthesize camera=mCamera;
@property(nonatomic) _Bool enabled; // @synthesize enabled=mEnabled;
- (id).cxx_construct;
- (void)invalidate;
@property(readonly, nonatomic) _Bool shadowPlaneValid;
- (void)setupResources;
- (void)dealloc;
- (id)initWithCamera:(id)arg1 renderer:(id)arg2;

@end

