//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLocale;

@interface CHCleanUpSpacesStep
{
    NSLocale *_locale;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)process:(id)arg1 options:(id)arg2;
- (id)cleanUpSpacesInToken:(id)arg1 leftContext:(id)arg2 inString:(id)arg3 withQuoteCount:(id)arg4;
- (id)prepareQuoteCountFromLeftContext:(id)arg1;
- (id)initWithLocale:(id)arg1;

@end

