//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAMLightingCube, CAMLightingCubeAppearance;

@interface CAMLightingCubeRenderer : NSObject
{
    CAMLightingCube *_cube;
    CAMLightingCubeAppearance *_appearance;
    long long _components;
}

- (void).cxx_destruct;
- (void)renderInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2 scale:(double)arg3 cornerRadius:(double)arg4 stroke:(double)arg5;
- (id)initWithCube:(id)arg1 appearance:(id)arg2 components:(long long)arg3;

@end
