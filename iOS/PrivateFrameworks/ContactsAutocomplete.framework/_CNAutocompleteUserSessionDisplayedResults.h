//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAutocompleteFetchRequest, NSMutableDictionary;

@interface _CNAutocompleteUserSessionDisplayedResults : NSObject
{
    _Bool _ignored;
    _Bool _containsDuetResults;
    CNAutocompleteFetchRequest *_request;
    NSMutableDictionary *_datesByBatchIndexes;
}

@property(nonatomic) _Bool containsDuetResults; // @synthesize containsDuetResults=_containsDuetResults;
@property(nonatomic) _Bool ignored; // @synthesize ignored=_ignored;
@property(retain, nonatomic) NSMutableDictionary *datesByBatchIndexes; // @synthesize datesByBatchIndexes=_datesByBatchIndexes;
@property(readonly, nonatomic) CNAutocompleteFetchRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)relevantForRequest:(id)arg1;
- (void)didReceiveBatch:(unsigned long long)arg1;
- (id)initWithRequest:(id)arg1;

@end

