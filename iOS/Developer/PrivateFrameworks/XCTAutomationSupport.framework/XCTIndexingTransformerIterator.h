//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/XCTMatchingElementIterator-Protocol.h>

@class NSMutableSet, NSSet, NSString, XCElementSnapshot, XCTElementIndexingTransformer;
@protocol XCTElementSetTransformer;

__attribute__((visibility("hidden")))
@interface XCTIndexingTransformerIterator : NSObject <XCTMatchingElementIterator>
{
    _Bool _hasMatched;
    XCElementSnapshot *_input;
    id <XCTElementSetTransformer> _transformer;
    XCElementSnapshot *_currentMatch;
    XCTElementIndexingTransformer *_indexingTransformer;
    unsigned long long _count;
    NSMutableSet *_mutableRelatedElements;
}

- (void).cxx_destruct;
@property(readonly) NSMutableSet *mutableRelatedElements; // @synthesize mutableRelatedElements=_mutableRelatedElements;
@property(readonly) _Bool hasMatched; // @synthesize hasMatched=_hasMatched;
@property unsigned long long count; // @synthesize count=_count;
@property(readonly) __weak XCTElementIndexingTransformer *indexingTransformer; // @synthesize indexingTransformer=_indexingTransformer;
@property(retain) XCElementSnapshot *currentMatch; // @synthesize currentMatch=_currentMatch;
@property(readonly) id <XCTElementSetTransformer> transformer; // @synthesize transformer=_transformer;
@property(retain) XCElementSnapshot *input; // @synthesize input=_input;
@property(readonly) NSSet *currentRelatedElements;
- (id)nextMatch;
- (id)initWithInput:(id)arg1 filteringTransformer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

