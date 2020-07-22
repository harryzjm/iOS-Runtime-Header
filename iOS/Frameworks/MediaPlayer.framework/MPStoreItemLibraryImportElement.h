//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface MPStoreItemLibraryImportElement : NSObject
{
    long long _storeItemID;
    NSDictionary *_additionalTrackMetadata;
}

@property(readonly, nonatomic) NSDictionary *additionalTrackMetadata; // @synthesize additionalTrackMetadata=_additionalTrackMetadata;
@property(readonly, nonatomic) long long storeItemID; // @synthesize storeItemID=_storeItemID;
- (void).cxx_destruct;
- (id)storeItem;
- (id)initWithStoreItemID:(long long)arg1 additionalTrackMetadata:(id)arg2;

@end

