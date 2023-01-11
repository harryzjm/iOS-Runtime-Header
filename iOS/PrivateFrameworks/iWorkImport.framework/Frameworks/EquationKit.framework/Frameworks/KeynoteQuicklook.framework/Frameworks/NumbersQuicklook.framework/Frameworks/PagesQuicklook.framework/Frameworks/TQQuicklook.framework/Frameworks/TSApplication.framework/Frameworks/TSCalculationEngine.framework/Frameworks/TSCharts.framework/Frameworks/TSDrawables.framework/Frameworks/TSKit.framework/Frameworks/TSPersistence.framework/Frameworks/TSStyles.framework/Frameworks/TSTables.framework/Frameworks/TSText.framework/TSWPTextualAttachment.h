//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TSWPTextualAttachment
{
}

+ (Class)classForUnarchiver:(id)arg1;
- (id)stringEquivalentWithLayoutParent:(id)arg1;
- (id)stringEquivalentWithNumberProvider:(id)arg1;
- (void)setStringEquivalent:(id)arg1;
@property(readonly, nonatomic) NSString *stringEquivalent;
- (id)stringWithPageNumber:(unsigned long long)arg1 pageCount:(unsigned long long)arg2 charIndex:(unsigned long long)arg3;
- (void)saveToArchive:(struct TextualAttachmentArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct TextualAttachmentArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)shouldArchiveStringEquivalent;

@end
