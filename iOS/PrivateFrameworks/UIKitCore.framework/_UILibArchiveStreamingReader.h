//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _UILibArchiveStreamingReader : NSObject
{
    long long _state;
    struct ui_archive *_laArchive;
    int _laArchiveType;
    NSString *_laArchiveTypeName;
    int _laProcessingState;
    long long _nextLoadedItemEntrySequenceIndex;
    NSMutableArray *_readableLoadedItemEntryQueue;
    NSError *_readError;
    NSString *_archivePath;
    struct ui_archive *_underlyingArchive;
    long long _appleDoubleIdentificationType;
}

- (void).cxx_destruct;
@property(nonatomic) long long appleDoubleIdentificationType; // @synthesize appleDoubleIdentificationType=_appleDoubleIdentificationType;
@property(readonly, nonatomic) struct ui_archive *underlyingArchive; // @synthesize underlyingArchive=_underlyingArchive;
@property(readonly, nonatomic) NSString *archivePath; // @synthesize archivePath=_archivePath;
- (id)_debugLoadAndPrintAllRemainingItems;
- (id)_loadItemByReadingAttributesFromUnderlyingArchiveEntry:(struct ui_archive_entry *)arg1;
- (id)_nextSimpleItemFromPendingQueueOrLibArchiveRead;
- (void)_closeArchive;
- (_Bool)_openArchive;
- (_Bool)_shouldReportAsAppleDoubleItem:(id)arg1 withConfirmedAppleDoubleFiles:(id)arg2;
- (_Bool)_shouldReportAsLogicalItem:(id)arg1 withConfirmedAppleDoubleFiles:(id)arg2;
@property(readonly, nonatomic) NSString *openedArchiveUnderlyingFormatName;
- (_Bool)_readItemsWithShouldVisitBlock:(CDUnknownBlockType)arg1 visitorBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)readLogicalItemsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)readAllItemsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)close;
- (_Bool)open;
- (id)initForReadingArchivePath:(id)arg1;

@end

