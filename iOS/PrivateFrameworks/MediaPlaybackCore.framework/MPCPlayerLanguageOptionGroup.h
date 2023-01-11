//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlayerResponse, NSArray, NSString;

@interface MPCPlayerLanguageOptionGroup : NSObject
{
    _Bool _allowEmptySelection;
    unsigned long long _currentIndex;
    NSArray *_options;
    MPCPlayerResponse *_response;
}

@property(readonly, nonatomic) __weak MPCPlayerResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)changeRequestForOptionAtIndex:(unsigned long long)arg1;
- (id)localizedTitleForOptionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long indexOfSelectedOption;
@property(readonly, nonatomic) unsigned long long numberOfOptions;
@property(readonly, nonatomic) NSString *localizedTitle;
- (id)initWithLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2 response:(id)arg3;

@end
