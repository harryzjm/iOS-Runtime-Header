//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSURL, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface TSPExternalReferenceDataStorage
{
    NSURL *_URL;
    NSData *_bookmarkData;
    _Bool _isReachable;
    TSPObjectContext *_context;
}

- (void).cxx_destruct;
- (_Bool)isReadable;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)bookmarkDataForArchiver:(id)arg1;
- (_Bool)archiveInfoMessage:(struct DataInfo *)arg1 archiver:(id)arg2 packageWriter:(id)arg3;
- (id)initWithBookmarkData:(id)arg1 context:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

