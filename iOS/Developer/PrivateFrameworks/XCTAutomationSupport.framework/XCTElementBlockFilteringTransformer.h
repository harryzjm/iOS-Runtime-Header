//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/XCTElementSetTransformer-Protocol.h>

@class NSString;

@interface XCTElementBlockFilteringTransformer : NSObject <XCTElementSetTransformer>
{
    _Bool stopsOnFirstMatch;
    NSString *transformationDescription;
    CDUnknownBlockType _filter;
}

@property(readonly, copy) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property _Bool stopsOnFirstMatch; // @synthesize stopsOnFirstMatch;
@property(copy) NSString *transformationDescription; // @synthesize transformationDescription;
- (void).cxx_destruct;
- (id)iteratorForInput:(id)arg1;
- (id)requiredKeyPathsOrError:(id *)arg1;
@property(readonly) _Bool supportsAttributeKeyPathAnalysis;
@property(readonly) _Bool supportsRemoteEvaluation;
- (id)transform:(id)arg1 relatedElements:(id *)arg2;
- (id)initWithBlockFilter:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
