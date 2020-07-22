//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSUUIImageAutoreleasePoolGuard, UIImage;

__attribute__((visibility("hidden")))
@interface TSUUIImage
{
    UIImage *mUIImage;
    TSUUIImageAutoreleasePoolGuard *mGuard;
}

+ (id)imageNamed:(id)arg1;
+ (void)i_performBlockWithUIImageLock:(CDUnknownBlockType)arg1;
- (long long)imageOrientation;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;
- (struct CGImage *)CGImage;
- (double)scale;
- (struct CGSize)size;
- (id)UIImage;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithUIImage:(id)arg1;
- (id)p_initWithUIImage:(id)arg1 needsGuard:(_Bool)arg2;

@end

