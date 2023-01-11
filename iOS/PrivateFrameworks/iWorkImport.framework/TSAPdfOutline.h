//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSAPdfOutline : NSObject
{
    struct __CFDictionary *_dictionaryRef;
    NSString *_title;
    unsigned long long _pageNumber;
    TSAPdfOutline *_parent;
    TSAPdfOutline *_firstChild;
    TSAPdfOutline *_lastChild;
    unsigned long long _count;
    TSAPdfOutline *_next;
    TSAPdfOutline *_previous;
    struct CGPoint _point;
}

+ (id)pdfOutlineWithTitle:(id)arg1 pageNumber:(unsigned long long)arg2 point:(struct CGPoint)arg3;
@property(nonatomic) TSAPdfOutline *previous; // @synthesize previous=_previous;
@property(nonatomic) TSAPdfOutline *next; // @synthesize next=_next;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) TSAPdfOutline *lastChild; // @synthesize lastChild=_lastChild;
@property(nonatomic) TSAPdfOutline *firstChild; // @synthesize firstChild=_firstChild;
@property(nonatomic) TSAPdfOutline *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(readonly, nonatomic) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (struct __CFDictionary *)dictionaryRef;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 pageNumber:(unsigned long long)arg2 point:(struct CGPoint)arg3;

@end

