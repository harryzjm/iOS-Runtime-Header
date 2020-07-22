//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSWPTOCInfo;

__attribute__((visibility("hidden")))
@interface TSWPTOCAttachment
{
}

- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)saveTOCAttachmentMessage:(struct TOCAttachmentArchive *)arg1 archiver:(id)arg2;
- (void)loadTOCAttachmentMessage:(const struct TOCAttachmentArchive *)arg1 fromUnarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(readonly, retain, nonatomic) TSWPTOCInfo *tocInfo;

@end

