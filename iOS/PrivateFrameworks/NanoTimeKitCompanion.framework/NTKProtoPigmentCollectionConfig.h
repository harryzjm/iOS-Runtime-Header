//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTKProtoPigmentCollectionConfig : PBCodable <NSCopying>
{
    NSString *_collectionOverride;
    NSString *_defaultColorOptionName;
    NSString *_defaultConfigAttributeName;
    NSMutableArray *_defaultGalleryColorNames;
    NSMutableArray *_exclusions;
    NSString *_fallbackDefaultColorOptionName;
    NSString *_featureFlag;
    NSMutableArray *_migrations;
    _Bool _excludesDuotone;
    _Bool _isAddable;
    _Bool _sensitivity;
    _Bool _sortedByHue;
    _Bool _supportsSlider;
    struct {
        unsigned int excludesDuotone:1;
        unsigned int isAddable:1;
        unsigned int sensitivity:1;
        unsigned int sortedByHue:1;
        unsigned int supportsSlider:1;
    } _has;
}

+ (Class)migrationType;
+ (Class)exclusionsType;
+ (Class)defaultGalleryColorNamesType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *collectionOverride; // @synthesize collectionOverride=_collectionOverride;
@property(retain, nonatomic) NSMutableArray *migrations; // @synthesize migrations=_migrations;
@property(retain, nonatomic) NSMutableArray *exclusions; // @synthesize exclusions=_exclusions;
@property(nonatomic) _Bool excludesDuotone; // @synthesize excludesDuotone=_excludesDuotone;
@property(retain, nonatomic) NSString *featureFlag; // @synthesize featureFlag=_featureFlag;
@property(nonatomic) _Bool supportsSlider; // @synthesize supportsSlider=_supportsSlider;
@property(nonatomic) _Bool sortedByHue; // @synthesize sortedByHue=_sortedByHue;
@property(nonatomic) _Bool isAddable; // @synthesize isAddable=_isAddable;
@property(nonatomic) _Bool sensitivity; // @synthesize sensitivity=_sensitivity;
@property(retain, nonatomic) NSMutableArray *defaultGalleryColorNames; // @synthesize defaultGalleryColorNames=_defaultGalleryColorNames;
@property(retain, nonatomic) NSString *defaultConfigAttributeName; // @synthesize defaultConfigAttributeName=_defaultConfigAttributeName;
@property(retain, nonatomic) NSString *fallbackDefaultColorOptionName; // @synthesize fallbackDefaultColorOptionName=_fallbackDefaultColorOptionName;
@property(retain, nonatomic) NSString *defaultColorOptionName; // @synthesize defaultColorOptionName=_defaultColorOptionName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCollectionOverride;
- (id)migrationAtIndex:(unsigned long long)arg1;
- (unsigned long long)migrationsCount;
- (void)addMigration:(id)arg1;
- (void)clearMigrations;
- (id)exclusionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)exclusionsCount;
- (void)addExclusions:(id)arg1;
- (void)clearExclusions;
@property(nonatomic) _Bool hasExcludesDuotone;
@property(readonly, nonatomic) _Bool hasFeatureFlag;
@property(nonatomic) _Bool hasSupportsSlider;
@property(nonatomic) _Bool hasSortedByHue;
@property(nonatomic) _Bool hasIsAddable;
@property(nonatomic) _Bool hasSensitivity;
- (id)defaultGalleryColorNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)defaultGalleryColorNamesCount;
- (void)addDefaultGalleryColorNames:(id)arg1;
- (void)clearDefaultGalleryColorNames;
@property(readonly, nonatomic) _Bool hasDefaultConfigAttributeName;
@property(readonly, nonatomic) _Bool hasFallbackDefaultColorOptionName;
@property(readonly, nonatomic) _Bool hasDefaultColorOptionName;

@end
