//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICStorePlatformMetadata, NSDictionary;

@interface MPStoreItemLibraryImportLookupElement
{
    ICStorePlatformMetadata *_storeItem;
    NSDictionary *_lookupDictionary;
}

@property(readonly, nonatomic) NSDictionary *lookupDictionary; // @synthesize lookupDictionary=_lookupDictionary;
- (void).cxx_destruct;
- (id)storeItem;
- (id)initWithLookupDictionary:(id)arg1 additionalTrackMetadata:(id)arg2;

@end

