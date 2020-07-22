//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SKUIEditorialComponent, SKUILayoutCache;

@interface SKUIEditorialLayout : NSObject
{
    SKUIEditorialComponent *_editorial;
    long long _landscapeLinkLayoutIndex;
    long long _landscapeTextLayoutIndex;
    long long _landscapeTitleLayoutIndex;
    double _landscapeWidth;
    long long _portraitLinkLayoutIndex;
    long long _portraitTextLayoutIndex;
    long long _portraitTitleLayoutIndex;
    double _portraitWidth;
    SKUILayoutCache *_textLayoutCache;
}

@property(readonly, nonatomic) SKUILayoutCache *layoutCache; // @synthesize layoutCache=_textLayoutCache;
@property(readonly, nonatomic) SKUIEditorialComponent *editorialComponent; // @synthesize editorialComponent=_editorial;
- (void).cxx_destruct;
- (id)_titleTextLayoutRequestWithTotalWidth:(double)arg1;
- (id)_linkLayoutRequestWithTotalWidth:(double)arg1;
- (id)_bodyTextLayoutRequestWithTotalWidth:(double)arg1;
- (id)titleTextLayoutForOrientation:(long long)arg1;
- (void)setLayoutWidth:(double)arg1 forOrientation:(long long)arg2;
- (id)linkLayoutForOrientation:(long long)arg1;
- (void)enqueueLayoutRequests;
- (double)layoutHeightForOrientation:(long long)arg1 expanded:(_Bool)arg2;
- (id)bodyTextLayoutForOrientation:(long long)arg1;
- (id)initWithEditorial:(id)arg1 layoutCache:(id)arg2;

@end

