//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _VKLandmarkIconArtwork
{
    struct _retain_ptr<CGImage *, geo::_retain_cf<CGImage *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _maskImage;
    struct _retain_ptr<CGImage *, geo::_retain_cf<CGImage *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _outlineMaskImage;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cleanUpAfterDrawing;
- (id)_newImage;
- (void)dealloc;
- (id)initWithMask:(struct CGImage *)arg1 outlineMask:(struct CGImage *)arg2 style:(const struct Style *)arg3 extraStyle:(const struct ExtraStyle *)arg4 contentScale:(double)arg5;

@end

