//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOutputStream, NSString;

@interface KVJSONProfileWriter : NSObject
{
    NSOutputStream *_stream;
    unsigned int _datasetIdx;
    unsigned int _itemIdx;
}

- (void).cxx_destruct;
- (_Bool)finishProfile:(id *)arg1;
- (_Bool)finishDataset:(id *)arg1;
- (_Bool)addItem:(id)arg1 error:(id *)arg2;
- (_Bool)startDataset:(id)arg1 error:(id *)arg2;
- (_Bool)startProfile:(id)arg1 error:(id *)arg2;
- (id)initWithOutputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

