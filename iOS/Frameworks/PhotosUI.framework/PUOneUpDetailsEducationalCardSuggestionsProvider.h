//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PUOneUpAccessoryViewControllersManager;

__attribute__((visibility("hidden")))
@interface PUOneUpDetailsEducationalCardSuggestionsProvider
{
    PUOneUpAccessoryViewControllersManager *_accessoryViewControllersManager;
}

+ (id)_userDefaults;
+ (void)setDidDisplayEducationalCard:(_Bool)arg1;
+ (_Bool)didDisplayEducationalCard;
- (void).cxx_destruct;
@property(readonly, nonatomic) PUOneUpAccessoryViewControllersManager *accessoryViewControllersManager; // @synthesize accessoryViewControllersManager=_accessoryViewControllersManager;
- (id)requestSuggestionForAsset:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (_Bool)canProvideSuggestionForAsset:(id)arg1;
- (id)initWithAccessoryViewControllersManager:(id)arg1;
- (id)init;

@end
