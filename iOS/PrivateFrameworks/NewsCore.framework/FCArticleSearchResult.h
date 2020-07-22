//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SFSearchResult;
@protocol FCHeadlineProviding;

@interface FCArticleSearchResult : NSObject
{
    NSString *_articleID;
    id <FCHeadlineProviding> _deflatedHeadline;
    id <FCHeadlineProviding> _inflatedHeadline;
    SFSearchResult *_searchResult;
}

@property(retain, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(retain, nonatomic) id <FCHeadlineProviding> inflatedHeadline; // @synthesize inflatedHeadline=_inflatedHeadline;
@property(readonly, nonatomic) id <FCHeadlineProviding> deflatedHeadline; // @synthesize deflatedHeadline=_deflatedHeadline;
@property(readonly, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (void).cxx_destruct;
- (id)initWithParsecSearchResult:(id)arg1 cloudContext:(id)arg2;

@end

