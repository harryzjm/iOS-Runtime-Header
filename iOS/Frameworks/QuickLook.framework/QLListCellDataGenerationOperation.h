//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLookSupport/QLAsynchronousOperation.h>

@class QLItem, QLListCell;
@protocol QLListCellDataGenerationOperationDelegate;

__attribute__((visibility("hidden")))
@interface QLListCellDataGenerationOperation : QLAsynchronousOperation
{
    _Bool _didGenerateThumbnail;
    _Bool _didGenerateSubtitleInformation;
    unsigned long long _index;
    QLListCell *_cell;
    QLItem *_item;
    id <QLListCellDataGenerationOperationDelegate> _delegate;
}

@property(nonatomic) __weak id <QLListCellDataGenerationOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak QLItem *item; // @synthesize item=_item;
@property(nonatomic) __weak QLListCell *cell; // @synthesize cell=_cell;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)_didDetermineFileSize:(id)arg1 fileTypeString:(id)arg2;
- (void)_didGenerateThumbnail:(id)arg1;
- (void)_finishIfNeeded;
- (void)main;
- (id)initWithListCell:(id)arg1 index:(unsigned long long)arg2 item:(id)arg3 delegate:(id)arg4;

@end

