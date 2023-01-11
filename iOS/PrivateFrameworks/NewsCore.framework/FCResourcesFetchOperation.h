//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol FCContentContext;

@interface FCResourcesFetchOperation
{
    _Bool _downloadAssets;
    long long _cacheLifetimeHint;
    CDUnknownBlockType _progressHandler;
    id <FCContentContext> _context;
    NSArray *_resourceIDs;
    NSArray *_resources;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(readonly, nonatomic) _Bool downloadAssets; // @synthesize downloadAssets=_downloadAssets;
@property(readonly, nonatomic) NSArray *resourceIDs; // @synthesize resourceIDs=_resourceIDs;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) long long cacheLifetimeHint; // @synthesize cacheLifetimeHint=_cacheLifetimeHint;
- (_Bool)_shoudUsePermanentURLForResourceID:(id)arg1;
- (id)completeFetchOperation;
- (id)downloadAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)validateOperation;
- (id)initWithContext:(id)arg1 resourceIDs:(id)arg2 downloadAssets:(_Bool)arg3;
- (id)init;

@end
