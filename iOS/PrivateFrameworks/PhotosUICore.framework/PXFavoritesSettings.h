//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol PXFavoritesSettingsDelegate;

@interface PXFavoritesSettings
{
    _Bool _didEncounterUnknownSettingsClassName;
    id <PXFavoritesSettingsDelegate> _delegate;
    NSArray *_favoritesSettingsClassNames;
}

+ (id)favoritesSubmoduleWithFavoritesSettingsKeyPath:(id)arg1 delegate:(id)arg2;
+ (id)transientProperties;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *favoritesSettingsClassNames; // @synthesize favoritesSettingsClassNames=_favoritesSettingsClassNames;
@property(nonatomic) __weak id <PXFavoritesSettingsDelegate> delegate; // @synthesize delegate=_delegate;
- (id)valueForKey:(id)arg1;
- (void)_performBlockAfterLoadingAccessorySettings:(CDUnknownBlockType)arg1;
- (id)_keyForFavoriteExistingAtIndex:(long long)arg1;
- (id)_keyForFavoriteNameAtIndex:(long long)arg1;
- (void)_requestFavoriteSettingsAtIndex:(long long)arg1 fromViewController:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)_notifyChange;
- (void)setIsFavorite:(_Bool)arg1 settings:(id)arg2;
- (_Bool)isFavoriteSettings:(id)arg1;
- (id)parentSettings;

@end
