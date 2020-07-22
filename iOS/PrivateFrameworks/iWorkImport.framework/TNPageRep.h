//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TNPageRep
{
    struct CGRect _shadowPathRect;
    struct CGPath *_shadowPath;
}

- (id)p_childRepForInfo:(id)arg1;
- (id)p_repForHeaderLayout:(id)arg1;
- (int)p_hitHeaderFooterFragment:(int)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)p_headerFooterIsVisibleAndInteractive:(int)arg1;
- (_Bool)isOpaque;
- (_Bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end
