//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, NSURL, QLItem;

@interface QLDataFetcher
{
    NSData *_data;
    NSString *_contentType;
    NSString *_previewItemTitle;
    NSURL *_temporaryURL;
    QLItem *_item;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)newItemProvider;
- (void)loadDataIfNeeded;
- (id)fetchedContent;
- (void)prepareShareableItem:(CDUnknownBlockType)arg1;
- (id)shareableItem;
- (id)_temporaryFilename;
- (void)_deleteTempraryFileIfNeeded;
- (id)_createTemporaryFileIfNeeded;
- (id)itemSize;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithData:(id)arg1 contentType:(id)arg2 previewItemTitle:(id)arg3;
- (id)initWithItem:(id)arg1 contentType:(id)arg2;

@end
