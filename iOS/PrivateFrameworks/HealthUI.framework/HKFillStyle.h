//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@class UIImage;

@interface HKFillStyle : NSObject <NSCopying>
{
    UIImage *_cachedImage;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_renderInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;
- (_Bool)_needsRenderForSize:(struct CGSize)arg1;
- (void)_renderCacheIfNecessaryForSize:(struct CGSize)arg1 usingTraitCollection:(id)arg2;
- (void)_renderCacheIfNecessaryForWidth:(double)arg1 usingTraitCollection:(id)arg2;
- (void)_renderCacheIfNecessaryForHeight:(double)arg1 usingTraitCollection:(id)arg2;
- (id)fillImageWithWidth:(double)arg1 usingTraitCollection:(id)arg2;
- (id)fillImageWithHeight:(double)arg1 usingTraitCollection:(id)arg2;
- (void)clearCache;

@end
