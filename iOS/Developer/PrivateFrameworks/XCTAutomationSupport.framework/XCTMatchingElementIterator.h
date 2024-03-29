//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/XCTMatchingElementIterator-Protocol.h>

@class NSEnumerator, NSSet, NSString, XCElementSnapshot;
@protocol XCTElementSetTransformer;

@interface XCTMatchingElementIterator : NSObject <XCTMatchingElementIterator>
{
    NSEnumerator *_outputEnumerator;
    XCElementSnapshot *_input;
    id <XCTElementSetTransformer> _transformer;
    XCElementSnapshot *_currentMatch;
    NSSet *_currentRelatedElements;
}

- (void).cxx_destruct;
@property(retain) NSSet *currentRelatedElements; // @synthesize currentRelatedElements=_currentRelatedElements;
@property(retain) XCElementSnapshot *currentMatch; // @synthesize currentMatch=_currentMatch;
@property(readonly) id <XCTElementSetTransformer> transformer; // @synthesize transformer=_transformer;
@property(readonly) XCElementSnapshot *input; // @synthesize input=_input;
- (id)nextMatch;
- (id)initWithInput:(id)arg1 transformer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

