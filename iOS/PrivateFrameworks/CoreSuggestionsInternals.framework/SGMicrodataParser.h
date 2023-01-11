//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SGMicrodataParserStackItem;

@interface SGMicrodataParser : NSObject
{
    SGMicrodataParserStackItem *_stackItem;
}

+ (id)parse:(id)arg1;
+ (id)whitespaceSplit:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) SGMicrodataParserStackItem *stackItem; // @synthesize stackItem=_stackItem;
- (void)textContent:(id)arg1;
- (void)endElement;
- (void)startElement:(id)arg1 withAttributes:(id)arg2;
- (id)initWithDocument:(id)arg1;

@end
