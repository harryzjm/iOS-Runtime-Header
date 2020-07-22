//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <TSUtility/SFUOutputStream-Protocol.h>

@class NSString, SFUCryptor;
@protocol SFUOutputStream;

@interface SFUCryptoOutputStream : NSObject <SFUOutputStream>
{
    id <SFUOutputStream> mBaseStream;
    SFUCryptor *mCryptor;
    _Bool mIsClosed;
    _Bool mComputeCrc32;
    unsigned int mCrc32;
}

+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)arg1 key:(id)arg2;
- (id)closeLocalStream;
- (void)close;
- (unsigned int)crc32;
- (id)inputStream;
- (_Bool)canCreateInputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (_Bool)canSeek;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (void)dealloc;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(_Bool)arg3;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

