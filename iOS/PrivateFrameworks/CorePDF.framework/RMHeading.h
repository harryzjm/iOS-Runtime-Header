//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface RMHeading : NSObject
{
    struct CGPDFNode *_node;
    struct CGPDFPage *_page;
    CDStruct_627e0f85 _textRange;
}

@property CDStruct_627e0f85 textRange; // @synthesize textRange=_textRange;
@property(readonly) struct CGPDFPage *page; // @dynamic page;
- (struct CGRect)bounds;
- (id)initWithNode:(struct CGPDFNode *)arg1 onPage:(struct CGPDFPage *)arg2;

@end

