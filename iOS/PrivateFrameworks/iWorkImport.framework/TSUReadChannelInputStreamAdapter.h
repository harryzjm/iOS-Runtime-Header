//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/SFUInputStream-Protocol.h>

@class NSString;
@protocol OS_dispatch_data, TSUReadChannel;

__attribute__((visibility("hidden")))
@interface TSUReadChannelInputStreamAdapter : NSObject <SFUInputStream>
{
    id <TSUReadChannel> _readChannel;
    NSObject<OS_dispatch_data> *_leftoverData;
    long long _offset;
}

- (void).cxx_destruct;
- (id)closeLocalStream;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (_Bool)canSeek;
- (void)close;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (long long)offset;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
