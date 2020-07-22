//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDDisplayHeaderSubstitute, GEORelatedSearchSuggestion, NSString;

__attribute__((visibility("hidden")))
@interface GEODisplayHeaderSubstitute : NSObject
{
    GEOPDDisplayHeaderSubstitute *_displayHeaderSubstitute;
    GEORelatedSearchSuggestion *_relatedSearchSuggestion;
}

@property(retain, nonatomic) GEORelatedSearchSuggestion *relatedSearchSuggestion; // @synthesize relatedSearchSuggestion=_relatedSearchSuggestion;
@property(retain, nonatomic) GEOPDDisplayHeaderSubstitute *displayHeaderSubstitute; // @synthesize displayHeaderSubstitute=_displayHeaderSubstitute;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *interpretedQuery;
@property(readonly, nonatomic) int substituteType;
- (id)initWithPDDisplayHeaderSubstitute:(id)arg1;

@end
