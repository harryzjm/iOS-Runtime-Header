//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, VUIMediaAPIClient;

__attribute__((visibility("hidden")))
@interface VUIFamilySharingMenuDataSource
{
    _Bool _hasFetchedGenres;
    _Bool _hasFetchedRecentPurchases;
    _Bool _hasFetchedMovies;
    _Bool _hasFetchedShows;
    _Bool _hasRecentPurchases;
    _Bool _hasMovies;
    _Bool _hasShows;
    NSString *_ownerIdentifier;
    NSArray *_genres;
    VUIMediaAPIClient *_mediaClient;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUIMediaAPIClient *mediaClient; // @synthesize mediaClient=_mediaClient;
@property(nonatomic) _Bool hasShows; // @synthesize hasShows=_hasShows;
@property(nonatomic) _Bool hasMovies; // @synthesize hasMovies=_hasMovies;
@property(nonatomic) _Bool hasRecentPurchases; // @synthesize hasRecentPurchases=_hasRecentPurchases;
@property(nonatomic) _Bool hasFetchedShows; // @synthesize hasFetchedShows=_hasFetchedShows;
@property(nonatomic) _Bool hasFetchedMovies; // @synthesize hasFetchedMovies=_hasFetchedMovies;
@property(nonatomic) _Bool hasFetchedRecentPurchases; // @synthesize hasFetchedRecentPurchases=_hasFetchedRecentPurchases;
@property(nonatomic) _Bool hasFetchedGenres; // @synthesize hasFetchedGenres=_hasFetchedGenres;
@property(retain, nonatomic) NSArray *genres; // @synthesize genres=_genres;
@property(retain, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
- (void)_notifyDelegatesFetchDidComplete;
- (CDUnknownBlockType)_categoryTypesSortComparator;
- (id)_constructGenreMenuItems;
- (id)_constructMainMenuItems;
- (id)_constructVUIMenuDataSource;
- (_Bool)_hasCompletedAllFetches;
- (void)_fetchShows;
- (void)_fetchMovies;
- (void)_fetchRecentPurchases;
- (void)_fetchGenres;
- (id)getGenreByGenreTitle:(id)arg1;
- (void)startFetch;
- (id)initWithValidCategories:(id)arg1;

@end

