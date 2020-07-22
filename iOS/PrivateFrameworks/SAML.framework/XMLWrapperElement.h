//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, XMLWrapperQuery;

__attribute__((visibility("hidden")))
@interface XMLWrapperElement : NSObject
{
    struct _xmlNode *_xmlNode;
    _Bool _ownsXMLNode;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_namespaces;
    NSMutableArray *_elements;
    NSString *_tagName;
    NSString *_textContent;
    NSArray *_childElementSequence;
    XMLWrapperQuery *_query;
}

@property(retain, nonatomic) XMLWrapperQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) NSArray *childElementSequence; // @synthesize childElementSequence=_childElementSequence;
@property(readonly, nonatomic) NSDictionary *namespaces; // @synthesize namespaces=_namespaces;
@property(retain, nonatomic) NSString *textContent; // @synthesize textContent=_textContent;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (void).cxx_destruct;
- (id)xmlString:(id *)arg1;
- (struct _xmlNode *)xmlNode:(id *)arg1;
- (void)reorderChildElements;
- (id)getResultsByXpathQuery:(id)arg1;
- (id)firstResultByXpathQuery:(id)arg1;
- (void)replaceChildElement:(id)arg1 newElement:(id)arg2;
- (void)removeChildElement:(id)arg1;
- (void)addChildElement:(id)arg1 before:(id)arg2;
- (void)addChildElement:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (id)firstElementByTagName:(id)arg1;
- (void)setAttributeWithName:(id)arg1 value:(id)arg2;
- (id)attributeWithName:(id)arg1;
- (void)setNamespace:(id)arg1;
@property(readonly, nonatomic) NSDictionary *attributes;
- (void)setElements:(id)arg1;
@property(readonly, nonatomic) NSArray *elements;
- (void)dealloc;
- (id)initWithTagName:(id)arg1 error:(id *)arg2;
- (id)initWithNode:(struct _xmlNode *)arg1 doc:(struct _xmlDoc *)arg2 query:(id)arg3 error:(id *)arg4;

@end

