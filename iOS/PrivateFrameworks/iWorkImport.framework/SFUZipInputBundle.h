//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/SFUInputBundle-Protocol.h>

@class NSString, SFUZipArchive;

__attribute__((visibility("hidden")))
@interface SFUZipInputBundle : NSObject <SFUInputBundle>
{
    SFUZipArchive *_zipArchive;
}

- (void)copyEntry:(id)arg1 toFile:(id)arg2;
- (unsigned int)crc32ForEntry:(id)arg1;
- (long long)lengthOfEntry:(id)arg1;
- (id)bufferedInputStreamForEntry:(id)arg1;
- (id)inputStreamForEntry:(id)arg1;
- (_Bool)hasEntryWithName:(id)arg1;
- (void)dealloc;
- (id)initWithZipArchive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

