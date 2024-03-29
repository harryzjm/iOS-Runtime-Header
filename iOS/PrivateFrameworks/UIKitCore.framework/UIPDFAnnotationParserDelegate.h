//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString, UIPDFAnnotation;

__attribute__((visibility("hidden")))
@interface UIPDFAnnotationParserDelegate : NSObject
{
    NSMutableString *_characters;
    _Bool _parseError;
    UIPDFAnnotation *_annotation;
}

@property(readonly, nonatomic) _Bool parseError; // @synthesize parseError=_parseError;
@property(retain, nonatomic) UIPDFAnnotation *annotation; // @synthesize annotation=_annotation;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parserDidStartDocument:(id)arg1;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

