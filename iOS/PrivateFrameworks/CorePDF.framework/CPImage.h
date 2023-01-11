//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPImage
{
    struct CPPDFImage *imageData;
    _Bool renderedBoundsComputed;
}

- (_Bool)isVisible;
- (long long)zOrder;
- (void)accept:(id)arg1;
- (void)recomputeRenderedBounds;
- (struct CGRect)bounds;
- (struct CGRect)renderedBounds;
- (struct CPPDFImage *)imageData;
- (id)initWithBounds:(struct CGRect)arg1;
- (id)initWithPDFImage:(struct CPPDFImage *)arg1;

@end

