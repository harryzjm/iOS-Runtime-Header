//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDFAction, PDFDestination, PDFDocument, PDFOutlinePrivate;

@interface PDFOutline : NSObject
{
    PDFOutlinePrivate *_private;
}

- (void).cxx_destruct;
- (id)_lastChild;
- (id)_firstChild;
- (id)_previous;
- (id)_next;
- (_Bool)_childDictionaryReferencesParent:(struct CGPDFDictionary *)arg1;
- (int)_openDescendantCount;
- (void)_addActionToDictionaryRef:(struct __CFDictionary *)arg1;
- (_Bool)_addDestinationToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)_removeChildAtIndex:(unsigned long long)arg1;
- (id)_childArray;
- (void)_setParent:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)invalidateDictionaryRef;
- (struct __CFDictionary *)createDictionaryRef;
- (struct CGPDFDictionary *)_srcDictionaryRef;
- (void)commonInit;
- (void)_lazilyLoadChildren;
- (id)initWithDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 parent:(id)arg3;
- (void)dealloc;
@property(retain, nonatomic) PDFAction *action;
@property(retain, nonatomic) PDFDestination *destination;
@property(nonatomic) _Bool isOpen;
@property(copy, nonatomic) NSString *label;
- (void)removeFromParent;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)childAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long index;
@property(readonly, nonatomic) unsigned long long numberOfChildren;
@property(readonly, nonatomic) PDFOutline *parent;
@property(readonly, nonatomic) __weak PDFDocument *document;
- (id)init;

@end
