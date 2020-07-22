//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SKUIIndexBarEntryListViewElement
{
    _Bool _indexBarHiddenWhenEmpty;
    long long _entryListElementType;
    long long _minimumEntityCount;
    NSString *_targetIndexBarEntryID;
}

@property(readonly, copy, nonatomic) NSString *targetIndexBarEntryID; // @synthesize targetIndexBarEntryID=_targetIndexBarEntryID;
@property(readonly, nonatomic) long long minimumEntityCount; // @synthesize minimumEntityCount=_minimumEntityCount;
@property(readonly, nonatomic, getter=isIndexBarHiddenWhenEmpty) _Bool indexBarHiddenWhenEmpty; // @synthesize indexBarHiddenWhenEmpty=_indexBarHiddenWhenEmpty;
@property(readonly, nonatomic) long long entryListElementType; // @synthesize entryListElementType=_entryListElementType;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *childIndexBarEntryElements;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

