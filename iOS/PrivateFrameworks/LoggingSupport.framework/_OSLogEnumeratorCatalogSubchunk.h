//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LoggingSupport/_OSLogIndexTimeRangable-Protocol.h>

@class NSMutableDictionary, NSString, _OSLogEnumeratorCatalog;

__attribute__((visibility("hidden")))
@interface _OSLogEnumeratorCatalogSubchunk : NSObject <_OSLogIndexTimeRangable>
{
    NSMutableDictionary *_decompressedChunks;
    struct catalog_subchunk_s *_subchunk;
    struct _NSRange _range;
    _OSLogEnumeratorCatalog *_catalog;
    unsigned long long _ot;
    unsigned long long _et;
}

@property(readonly, nonatomic) unsigned long long endTime; // @synthesize endTime=_et;
@property(readonly, nonatomic) unsigned long long oldestTime; // @synthesize oldestTime=_ot;
@property(readonly, nonatomic) _OSLogEnumeratorCatalog *catalog; // @synthesize catalog=_catalog;
- (void).cxx_destruct;
- (void)enumerateChunksUsingBlock:(CDUnknownBlockType)arg1;
- (id)_decompressedBufferForChunk:(struct tracev3_chunk_s *)arg1 subchunk:(struct catalog_subchunk_s *)arg2;
- (long long)endTimeCompare:(id)arg1;
- (long long)oldestTimeCompare:(id)arg1;
- (id)initWithCatalog:(id)arg1 subchunk:(struct catalog_subchunk_s *)arg2 range:(struct _NSRange)arg3 oldestTime:(unsigned long long)arg4 endTime:(unsigned long long)arg5;
- (id)initWithCatalog:(id)arg1 subchunk:(struct catalog_subchunk_s *)arg2 range:(struct _NSRange)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

