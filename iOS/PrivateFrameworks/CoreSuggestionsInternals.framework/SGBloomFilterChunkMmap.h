//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGBloomFilterChunk-Protocol.h>

@class NSString;

@interface SGBloomFilterChunkMmap : NSObject <SGBloomFilterChunk>
{
    NSString *_path;
    int _fd;
    unsigned int *_countPtr;
    unsigned int _mask;
    char *_buf;
}

- (void).cxx_destruct;
- (_Bool)exists:(CDUnion_e7c9147b)arg1;
- (void)add:(CDUnion_e7c9147b)arg1;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) unsigned int count;
- (void)close;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
