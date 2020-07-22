//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/SFUOutputStream-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OISFUFileOutputStream : NSObject <SFUOutputStream>
{
    struct __sFILE *mFile;
    NSString *mPath;
}

- (id)closeLocalStream;
- (void)close;
- (id)inputStream;
- (_Bool)canCreateInputStream;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (_Bool)canSeek;
- (long long)offset;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (id)path;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

