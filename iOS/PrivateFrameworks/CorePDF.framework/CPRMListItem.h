//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CPRMListItem : NSObject
{
    struct CGPDFNode **_paragraphs;
    unsigned long long _count;
    unsigned long long _pos;
}

@property(readonly) struct CGPDFNode **paragraphNodes; // @synthesize paragraphNodes=_paragraphs;
- (struct CGRect)bounds;
@property(readonly) struct CGPDFPage *page; // @dynamic page;
- (void)addParagraph:(struct CGPDFNode *)arg1;
- (void)dealloc;
- (id)initWithCount:(unsigned long long)arg1;

@end

