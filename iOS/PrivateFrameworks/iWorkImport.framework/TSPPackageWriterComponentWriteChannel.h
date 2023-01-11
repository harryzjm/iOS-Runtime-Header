//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPComponentWriteChannel-Protocol.h>

@class NSString, TSUZipFileWriter;

__attribute__((visibility("hidden")))
@interface TSPPackageWriterComponentWriteChannel : NSObject <TSPComponentWriteChannel>
{
    TSUZipFileWriter *_archiveWriter;
    _Bool _isClosed;
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

