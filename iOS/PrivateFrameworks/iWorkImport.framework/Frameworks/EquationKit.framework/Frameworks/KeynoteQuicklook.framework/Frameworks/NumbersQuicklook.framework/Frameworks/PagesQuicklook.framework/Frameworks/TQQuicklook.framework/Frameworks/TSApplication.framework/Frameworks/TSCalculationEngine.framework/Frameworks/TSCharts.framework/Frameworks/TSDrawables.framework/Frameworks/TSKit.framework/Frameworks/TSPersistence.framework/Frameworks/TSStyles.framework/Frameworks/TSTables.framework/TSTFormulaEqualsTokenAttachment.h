//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSText/TSWPUIGraphicalAttachment.h>

@interface TSTFormulaEqualsTokenAttachment : TSWPUIGraphicalAttachment
{
}

- (id)description;
- (void)saveToArchive:(struct FormulaEqualsTokenAttachmentArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct FormulaEqualsTokenAttachmentArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)wantsSelectionAtPoint:(struct CGPoint)arg1;
- (double)baselineOffset;
- (struct CGSize)size;
- (id)rendererForAttachment;

@end
