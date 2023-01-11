//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlayerResponse, MPNowPlayingInfoLanguageOption, NSArray, NSString;

@interface MPCPlayerLanguageOptionGroup : NSObject
{
    unsigned long long _currentIndex;
    _Bool _allowEmptySelection;
    NSArray *_options;
    MPCPlayerResponse *_response;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak MPCPlayerResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) _Bool allowEmptySelection; // @synthesize allowEmptySelection=_allowEmptySelection;
@property(readonly, nonatomic) NSArray *options; // @synthesize options=_options;
- (id)changeRequestForOptionAtIndex:(unsigned long long)arg1;
- (id)localizedTitleForOptionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) MPNowPlayingInfoLanguageOption *selectedOption;
@property(readonly, nonatomic) unsigned long long indexOfSelectedOption;
@property(readonly, nonatomic) unsigned long long numberOfOptions;
@property(readonly, nonatomic) NSString *localizedTitle;
- (id)initWithLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2 response:(id)arg3;

@end
