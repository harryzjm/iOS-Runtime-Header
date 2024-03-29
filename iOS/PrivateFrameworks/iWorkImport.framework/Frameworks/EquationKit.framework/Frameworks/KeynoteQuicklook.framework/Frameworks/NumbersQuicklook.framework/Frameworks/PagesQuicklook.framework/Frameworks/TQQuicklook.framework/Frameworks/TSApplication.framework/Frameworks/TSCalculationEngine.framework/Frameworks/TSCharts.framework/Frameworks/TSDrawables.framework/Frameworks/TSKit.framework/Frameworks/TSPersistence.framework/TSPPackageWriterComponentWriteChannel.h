//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TSUZipFileWriter;

@interface TSPPackageWriterComponentWriteChannel : NSObject
{
    TSUZipFileWriter *_archiveWriter;
    _Atomic _Bool _isClosed;
}

- (void).cxx_destruct;
- (void)close;
- (void)writeData:(id)arg1;
- (id)initWithArchiveWriter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

