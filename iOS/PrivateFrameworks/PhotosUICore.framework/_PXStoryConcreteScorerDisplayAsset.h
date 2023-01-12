//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXStoryResourcesDataSource;
@protocol PXDisplayAsset;

@interface _PXStoryConcreteScorerDisplayAsset : NSObject
{
    PXStoryResourcesDataSource *_resourcesDataSource;
    long long _resourceIndex;
    id <PXDisplayAsset> _displayAsset;
}

- (void).cxx_destruct;
- (id)displayAsset;
- (long long)resourceIndex;
- (id)resourcesDataSource;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)setResourceIndex:(long long)arg1 resourcesDataSource:(id)arg2;

@end
