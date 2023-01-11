//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATXProactiveSuggestionClientModelSpecification, NSBundle;

@interface ATXFallbackActions : NSObject
{
    NSBundle *_bundle;
    ATXProactiveSuggestionClientModelSpecification *_clientModelSpec;
}

+ (id)stringForFallbackActionType:(unsigned long long)arg1;
+ (unsigned long long)fallbackActionTypeForString:(id)arg1;
+ (id)dateWithoutMinutesAndSeconds:(id)arg1;
+ (id)fallbackActionsBundle;
- (void).cxx_destruct;
- (id)proactiveSuggestionForAction:(id)arg1;
- (id)suggestionforSpecifiedFallbackActionType:(unsigned long long)arg1;
- (id)suggestionsForAllFallbackActions;
- (id)sendAMessage;
- (id)createAnEventForCurrentDate:(id)arg1;
- (id)startATimer;
- (id)searchSafari;
- (id)viewPhotos;
- (id)localizedStringForKey:(id)arg1;
- (id)initWithClientModelSpec:(id)arg1;
- (id)init;

@end
