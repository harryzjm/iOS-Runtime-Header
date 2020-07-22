//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ICTableTextAttachment
{
    double _lastAvailableWidth;
    struct CGSize _lastAttachmentSize;
}

@property(nonatomic) struct CGSize lastAttachmentSize; // @synthesize lastAttachmentSize=_lastAttachmentSize;
@property(nonatomic) double lastAvailableWidth; // @synthesize lastAvailableWidth=_lastAvailableWidth;
- (id)printableTextContent;
- (void)fixAttachmentForAttributedString:(id)arg1 range:(struct _NSRange)arg2 forPlainText:(_Bool)arg3;
- (CDStruct_d2b197d1)attachmentBoundsMargins;
- (_Bool)canDragWithoutSelecting;

@end
