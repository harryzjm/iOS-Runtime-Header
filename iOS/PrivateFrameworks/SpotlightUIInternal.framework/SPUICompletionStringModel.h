//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPUICompletionStringModel : NSObject
{
    _Bool _searchFieldHasTokens;
    _Bool _hasMarkedText;
    NSString *_displayedText;
    unsigned long long _queryId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(readonly, nonatomic) _Bool hasMarkedText; // @synthesize hasMarkedText=_hasMarkedText;
@property(readonly, nonatomic) _Bool searchFieldHasTokens; // @synthesize searchFieldHasTokens=_searchFieldHasTokens;
@property(readonly, nonatomic) NSString *displayedText; // @synthesize displayedText=_displayedText;
- (id)initWithTypedString:(id)arg1 hasTokens:(_Bool)arg2 queryId:(unsigned long long)arg3 hasMarkedText:(_Bool)arg4;

@end
