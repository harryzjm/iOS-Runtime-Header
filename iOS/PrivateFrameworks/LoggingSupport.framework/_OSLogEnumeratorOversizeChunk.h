//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _OSLogEnumeratorCatalogSubchunk;

__attribute__((visibility("hidden")))
@interface _OSLogEnumeratorOversizeChunk : NSObject
{
    _OSLogEnumeratorCatalogSubchunk *_subchunk;
    struct tracev3_chunk_s *_chunk;
}

- (void).cxx_destruct;
- (void)fillProxy:(id)arg1;
- (void)fillMessage:(struct os_log_message_s *)arg1;
- (_Bool)matches:(unsigned int)arg1 procinfo:(struct catalog_procinfo_s *)arg2;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) unsigned long long timestamp;
- (id)initWithSubchunk:(id)arg1 chunk:(struct tracev3_chunk_s *)arg2;

@end

