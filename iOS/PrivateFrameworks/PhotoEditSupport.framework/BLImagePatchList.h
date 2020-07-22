//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BLImagePatchList : NSObject
{
    struct CGImage *_baseImage;
    struct CGSize _size;
    NSMutableArray *_patchArray;
}

+ (id)imagePatchListWithSingleImage:(struct CGImage *)arg1;
- (void).cxx_destruct;
- (id)description;
- (struct CGSize)size;
- (long long)count;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)removeAllPatches;
- (void)addPatch:(id)arg1;
- (void)dealloc;
- (id)initWithImage:(struct CGImage *)arg1;

@end
