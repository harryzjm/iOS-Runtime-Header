//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@interface MusicStoreCuratorPlaylistsRequestOperation : MPStoreModelRequestOperation
{
    unsigned long long _requestType;
}

- (void)_produceIncrementalResponseWithLoadedItemMetadataResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_produceInitialResponseWithLoadedItemMetadataResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;

@end

