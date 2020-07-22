//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSURL, TSPObjectContext;

@interface TSPExternalReferenceDataStorage
{
    NSURL *_URL;
    NSData *_bookmarkData;
    TSPObjectContext *_context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isReadable) _Bool readable;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)bookmarkDataForArchiver:(id)arg1;
- (id)storageForDataCopyFromOtherContext;
- (id)initWithBookmarkData:(id)arg1 context:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

