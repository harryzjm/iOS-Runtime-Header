//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPMediaLibraryView, MPModelObject, NSNumber;

__attribute__((visibility("hidden")))
@interface MPModelLibraryKeepLocalStatusRequestOperation
{
    CDUnknownBlockType _downloadablePlaylistItemEntityQueryBlock;
    long long _enableState;
    MPModelObject *_identifyingModelObject;
    MPMediaLibraryView *_libraryView;
    NSNumber *_redownloadableItemCount;
    CDUnknownBlockType _responseHandler;
    shared_ptr_e8455ceb _downloadableItemsQuery;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) NSNumber *redownloadableItemCount; // @synthesize redownloadableItemCount=_redownloadableItemCount;
@property(copy, nonatomic) MPMediaLibraryView *libraryView; // @synthesize libraryView=_libraryView;
@property(retain, nonatomic) MPModelObject *identifyingModelObject; // @synthesize identifyingModelObject=_identifyingModelObject;
@property(nonatomic) long long enableState; // @synthesize enableState=_enableState;
@property(copy, nonatomic) CDUnknownBlockType downloadablePlaylistItemEntityQueryBlock; // @synthesize downloadablePlaylistItemEntityQueryBlock=_downloadablePlaylistItemEntityQueryBlock;
@property(nonatomic) shared_ptr_e8455ceb downloadableItemsQuery; // @synthesize downloadableItemsQuery=_downloadableItemsQuery;
- (void)execute;

@end
