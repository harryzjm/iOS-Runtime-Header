//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SUUIViewElementText;

__attribute__((visibility("hidden")))
@interface SUUISearchBarViewElement
{
    NSString *_accessoryText;
    SUUIViewElementText *_defaultText;
    NSString *_placeholderString;
    NSString *_searchHintsURLString;
    NSString *_trendingSearchURLString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *trendingSearchURLString; // @synthesize trendingSearchURLString=_trendingSearchURLString;
@property(readonly, nonatomic) NSString *searchHintsURLString; // @synthesize searchHintsURLString=_searchHintsURLString;
@property(readonly, nonatomic) NSString *placeholderString; // @synthesize placeholderString=_placeholderString;
@property(readonly, nonatomic) SUUIViewElementText *defaultText; // @synthesize defaultText=_defaultText;
@property(readonly, nonatomic) NSString *accessoryText; // @synthesize accessoryText=_accessoryText;
- (long long)pageComponentType;
- (unsigned long long)elementType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

