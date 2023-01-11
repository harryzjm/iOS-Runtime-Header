//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgStateMapsFeatures : PBCodable <NSCopying>
{
    int _favoritesCount;
    int _followedPublisherCount;
    int _personalCollectionsCount;
    int _savedCollectionsCount;
    int _submittedPhotosCount;
    int _submittedRatingsCount;
    _Bool _homeFavoriteSet;
    _Bool _schoolFavoriteSet;
    _Bool _workFavoriteSet;
    struct {
        unsigned int has_favoritesCount:1;
        unsigned int has_followedPublisherCount:1;
        unsigned int has_personalCollectionsCount:1;
        unsigned int has_savedCollectionsCount:1;
        unsigned int has_submittedPhotosCount:1;
        unsigned int has_submittedRatingsCount:1;
        unsigned int has_homeFavoriteSet:1;
        unsigned int has_schoolFavoriteSet:1;
        unsigned int has_workFavoriteSet:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSubmittedPhotosCount;
@property(nonatomic) int submittedPhotosCount;
@property(nonatomic) _Bool hasSubmittedRatingsCount;
@property(nonatomic) int submittedRatingsCount;
@property(nonatomic) _Bool hasFollowedPublisherCount;
@property(nonatomic) int followedPublisherCount;
@property(nonatomic) _Bool hasSavedCollectionsCount;
@property(nonatomic) int savedCollectionsCount;
@property(nonatomic) _Bool hasPersonalCollectionsCount;
@property(nonatomic) int personalCollectionsCount;
@property(nonatomic) _Bool hasFavoritesCount;
@property(nonatomic) int favoritesCount;
@property(nonatomic) _Bool hasSchoolFavoriteSet;
@property(nonatomic) _Bool schoolFavoriteSet;
@property(nonatomic) _Bool hasWorkFavoriteSet;
@property(nonatomic) _Bool workFavoriteSet;
@property(nonatomic) _Bool hasHomeFavoriteSet;
@property(nonatomic) _Bool homeFavoriteSet;

@end
