//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface TSPDatabaseInputStream : NSObject
{
    NSObject<OS_dispatch_queue> *_readQueue;
    struct sqlite3_blob *_blob;
    int _offset;
    int _length;
}

- (void).cxx_destruct;
- (id)closeLocalStream;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (_Bool)canSeek;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (long long)offset;
- (void)readWithHandlerAndWait:(CDUnknownBlockType)arg1;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)close;
- (void)dealloc;
- (id)initWithBlob:(struct sqlite3_blob *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

