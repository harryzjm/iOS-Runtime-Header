//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPRotatedRegion
{
    struct CGRect normalizedBounds;
    _Bool dirtyNormalizedBounds;
}

- (void)resizeWith:(id)arg1;
- (void)fitBoundsToChildren;
- (double)bottom;
- (double)top;
- (double)center;
- (double)right;
- (double)left;
- (struct CGPoint)anchor;
- (struct CGRect)normalizedBounds;
- (id)init;

@end

