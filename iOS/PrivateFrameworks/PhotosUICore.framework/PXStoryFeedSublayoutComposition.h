//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXLayoutGenerator;
@protocol PXStoryFeedViewLayoutSpec;

@interface PXStoryFeedSublayoutComposition
{
    PXLayoutGenerator *_cachedLayoutGenerator;
    id <PXStoryFeedViewLayoutSpec> _spec;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <PXStoryFeedViewLayoutSpec> spec; // @synthesize spec=_spec;
- (id)configuredLayoutGenerator;
@property(readonly, nonatomic) long long scrollableAxis;

@end
