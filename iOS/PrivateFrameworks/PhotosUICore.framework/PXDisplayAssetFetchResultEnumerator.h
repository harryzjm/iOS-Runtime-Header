//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PXDisplayAssetFetchResult;

@interface PXDisplayAssetFetchResultEnumerator
{
    id <PXDisplayAssetFetchResult> _fetchResult;
    long long _currentIndex;
}

- (void).cxx_destruct;
- (id)nextObject;
- (unsigned long long)count;
- (void)reset;
- (id)init;
- (id)initWithDisplayAssetFetchResult:(id)arg1;

@end
