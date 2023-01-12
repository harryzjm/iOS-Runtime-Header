//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVDatasetInfo, NSArray, NSString;

@interface KVJSONDatasetReader : NSObject
{
    KVDatasetInfo *_datasetInfo;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)datasetInfo;
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

