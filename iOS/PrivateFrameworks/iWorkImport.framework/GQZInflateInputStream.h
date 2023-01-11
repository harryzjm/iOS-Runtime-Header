//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQZEntryInputStream-Protocol.h>

@class NSString;
@protocol GQZEntryInputStream;

__attribute__((visibility("hidden")))
@interface GQZInflateInputStream : NSObject <GQZEntryInputStream>
{
    struct z_stream_s mStream;
    id <GQZEntryInputStream> mInput;
}

- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)readToOwnBuffer:(const char **)arg1 size:(unsigned long long *)arg2;
- (void)dealloc;
- (id)initWithInput:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

