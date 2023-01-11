//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQZArchiveInputStream-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface GQZArchiveMemoryInputStream : NSObject <GQZArchiveInputStream>
{
    NSData *mData;
    const char *mBytes;
    long long mSize;
}

- (long long)size;
- (void)readFromOffset:(long long)arg1 size:(unsigned long long)arg2 buffer:(char *)arg3;
- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long long)arg2 end:(long long)arg3 readSize:(unsigned long long *)arg4;
- (void)dealloc;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
