//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSData, NSDate, NSSet;

@interface _TtC8MapsSync27MapsSyncAnonymousCredential
{
    MISSING_TYPE *_anonymousId;
    MISSING_TYPE *_mapsToken;
    MISSING_TYPE *_mapsTokenCreatedAt;
    MISSING_TYPE *_mapsTokenTTL;
    MISSING_TYPE *_reviewedPlaces;
    MISSING_TYPE *_reviewedPlacesUnstored;
}

+ (id)fetchWithAnonymousId:(id)arg1;
+ (id)fetchLatestAnonymousCredential;
- (void).cxx_destruct;
- (id)initWithObject:(id)arg1;
- (void)addEditWithBlock:(CDUnknownBlockType)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)arg1;
- (void)executeOnFirstSave:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) NSSet *reviewedPlaces;
@property(nonatomic, readonly) unsigned long long mapsTokenTTL;
@property(nonatomic, readonly) NSDate *mapsTokenCreatedAt;
@property(nonatomic, readonly) NSData *mapsToken;
@property(nonatomic, readonly) NSData *anonymousId;
@property(nonatomic, copy) NSSet *_reviewedPlacesUnstored;

@end
