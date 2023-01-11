//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOMNode, NSString, WebArchive;

@interface DOMRange
{
}

+ (id)rangeForFirstPosition:(id)arg1 second:(id)arg2;
- (void)expand:(id)arg1;
- (_Bool)isPointInRange:(id)arg1 offset:(int)arg2;
- (short)comparePoint:(id)arg1 offset:(int)arg2;
- (_Bool)intersectsNode:(id)arg1;
- (short)compareNode:(id)arg1;
- (id)createContextualFragment:(id)arg1;
- (void)detach;
- (id)toString;
- (id)cloneRange;
- (void)surroundContents:(id)arg1;
- (void)insertNode:(id)arg1;
- (id)cloneContents;
- (id)extractContents;
- (void)deleteContents;
- (short)compareBoundaryPoints:(unsigned short)arg1 sourceRange:(id)arg2;
- (void)selectNodeContents:(id)arg1;
- (void)selectNode:(id)arg1;
- (void)collapse:(_Bool)arg1;
- (void)setEndAfter:(id)arg1;
- (void)setEndBefore:(id)arg1;
- (void)setStartAfter:(id)arg1;
- (void)setStartBefore:(id)arg1;
- (void)setEnd:(id)arg1 offset:(int)arg2;
- (void)setStart:(id)arg1 offset:(int)arg2;
@property(readonly, copy) NSString *text;
@property(readonly) DOMNode *commonAncestorContainer;
@property(readonly) _Bool collapsed;
@property(readonly) int endOffset;
@property(readonly) DOMNode *endContainer;
@property(readonly) int startOffset;
@property(readonly) DOMNode *startContainer;
- (void)dealloc;
- (id)lineBoxRects;
- (id)textRects;
- (struct CGImage *)renderedImageForcingBlackText:(_Bool)arg1;
- (struct CGRect)boundingBox;
- (id)_text;
- (id)description;
- (short)compareBoundaryPoints:(unsigned short)arg1:(id)arg2;
- (void)setEnd:(id)arg1:(int)arg2;
- (void)setStart:(id)arg1:(int)arg2;
- (id)firstNode;
- (void)extend:(unsigned int)arg1 inDirection:(int)arg2;
- (void)move:(unsigned int)arg1 inDirection:(int)arg2;
@property(readonly, copy, nonatomic) NSString *markupString;
@property(readonly, nonatomic) WebArchive *webArchive;
- (id)enclosingWordRange;
- (id)endPosition;
- (id)startPosition;

@end
