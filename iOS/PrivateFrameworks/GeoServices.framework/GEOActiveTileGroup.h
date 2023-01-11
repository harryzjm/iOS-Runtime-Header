//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEODataSetDescription, GEOURLInfoSet, GEOVersionManifest, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOActiveTileGroup : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _activeScales;
    CDStruct_95bda58d _activeScenarios;
    struct GEOTileSetRegion *_hybridUnavailableRegions;
    unsigned long long _hybridUnavailableRegionsCount;
    unsigned long long _hybridUnavailableRegionsSpace;
    NSString *_abExperimentURLLegacy;
    NSMutableArray *_activeResources;
    NSString *_addressCorrectionInitURLLegacy;
    NSString *_addressCorrectionUpdateURLLegacy;
    NSMutableArray *_announcementsSupportedLanguages;
    NSString *_announcementsURLLegacy;
    NSMutableArray *_attributions;
    NSString *_backgroundDispatcherURLLegacy;
    NSString *_backgroundRevGeoURLLegacy;
    NSString *_batchReverseGeocoderURLLegacy;
    NSString *_batchTrafficProbeURLLegacy;
    NSString *_bluePOIURLLegacy;
    NSString *_businessPortalBaseURLLegacy;
    GEODataSetDescription *_dataSet;
    NSString *_directionsURLLegacy;
    NSString *_dispatcherURLLegacy;
    NSMutableArray *_displayStrings;
    NSString *_environment;
    NSString *_etaURLLegacy;
    NSData *_flyoverRegionVersions;
    NSMutableArray *_fontChecksums;
    NSMutableArray *_fonts;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    NSMutableArray *_locationShiftEnabledRegions;
    NSString *_logMessageUsageURLLegacy;
    NSString *_logMessageUsageV3URLLegacy;
    NSString *_muninBaseURL;
    NSMutableArray *_muninBuckets;
    NSString *_polyLocationShiftURLLegacy;
    NSString *_proactiveRoutingURLLegacy;
    NSString *_problemCategoriesURLLegacy;
    NSString *_problemOptInURLLegacy;
    NSString *_problemStatusURLLegacy;
    NSString *_problemSubmissionURLLegacy;
    NSString *_realtimeTrafficProbeURLLegacy;
    NSMutableArray *_regionalResourceRegions;
    NSMutableArray *_regionalResourceTiles;
    NSString *_regionalResourcesURLLegacy;
    NSMutableArray *_regionalResources;
    NSString *_releaseInfo;
    NSData *_reserved;
    NSString *_resourcesURLLegacy;
    NSMutableArray *_resources;
    NSString *_reverseGeocoderVersionsURLLegacy;
    NSString *_searchAttributionManifestURLLegacy;
    NSString *_simpleETAURLLegacy;
    NSString *_spatialLookupURLLegacy;
    NSMutableArray *_staleResources;
    NSMutableArray *_styleSheetChecksums;
    NSMutableArray *_styleSheets;
    NSMutableArray *_textureChecksums;
    NSMutableArray *_textures;
    NSMutableArray *_tileSets;
    NSString *_uniqueIdentifier;
    GEOURLInfoSet *_urlInfoSet;
    GEOVersionManifest *_versionManifest;
    NSString *_wifiConnectionQualityProbeURLLegacy;
    NSMutableArray *_xmlChecksums;
    NSMutableArray *_xmls;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _identifier;
    unsigned int _locationShiftVersion;
    unsigned int _modelVersion;
    struct {
        unsigned int has_locationShiftVersion:1;
        unsigned int has_modelVersion:1;
        unsigned int read_unknownFields:1;
        unsigned int read_activeScales:1;
        unsigned int read_activeScenarios:1;
        unsigned int read_hybridUnavailableRegions:1;
        unsigned int read_abExperimentURLLegacy:1;
        unsigned int read_activeResources:1;
        unsigned int read_addressCorrectionInitURLLegacy:1;
        unsigned int read_addressCorrectionUpdateURLLegacy:1;
        unsigned int read_announcementsSupportedLanguages:1;
        unsigned int read_announcementsURLLegacy:1;
        unsigned int read_attributions:1;
        unsigned int read_backgroundDispatcherURLLegacy:1;
        unsigned int read_backgroundRevGeoURLLegacy:1;
        unsigned int read_batchReverseGeocoderURLLegacy:1;
        unsigned int read_batchTrafficProbeURLLegacy:1;
        unsigned int read_bluePOIURLLegacy:1;
        unsigned int read_businessPortalBaseURLLegacy:1;
        unsigned int read_dataSet:1;
        unsigned int read_directionsURLLegacy:1;
        unsigned int read_dispatcherURLLegacy:1;
        unsigned int read_displayStrings:1;
        unsigned int read_environment:1;
        unsigned int read_etaURLLegacy:1;
        unsigned int read_flyoverRegionVersions:1;
        unsigned int read_fontChecksums:1;
        unsigned int read_fonts:1;
        unsigned int read_iconChecksums:1;
        unsigned int read_icons:1;
        unsigned int read_locationShiftEnabledRegions:1;
        unsigned int read_logMessageUsageURLLegacy:1;
        unsigned int read_logMessageUsageV3URLLegacy:1;
        unsigned int read_muninBaseURL:1;
        unsigned int read_muninBuckets:1;
        unsigned int read_polyLocationShiftURLLegacy:1;
        unsigned int read_proactiveRoutingURLLegacy:1;
        unsigned int read_problemCategoriesURLLegacy:1;
        unsigned int read_problemOptInURLLegacy:1;
        unsigned int read_problemStatusURLLegacy:1;
        unsigned int read_problemSubmissionURLLegacy:1;
        unsigned int read_realtimeTrafficProbeURLLegacy:1;
        unsigned int read_regionalResourceRegions:1;
        unsigned int read_regionalResourceTiles:1;
        unsigned int read_regionalResourcesURLLegacy:1;
        unsigned int read_regionalResources:1;
        unsigned int read_releaseInfo:1;
        unsigned int read_reserved:1;
        unsigned int read_resourcesURLLegacy:1;
        unsigned int read_resources:1;
        unsigned int read_reverseGeocoderVersionsURLLegacy:1;
        unsigned int read_searchAttributionManifestURLLegacy:1;
        unsigned int read_simpleETAURLLegacy:1;
        unsigned int read_spatialLookupURLLegacy:1;
        unsigned int read_staleResources:1;
        unsigned int read_styleSheetChecksums:1;
        unsigned int read_styleSheets:1;
        unsigned int read_textureChecksums:1;
        unsigned int read_textures:1;
        unsigned int read_tileSets:1;
        unsigned int read_uniqueIdentifier:1;
        unsigned int read_urlInfoSet:1;
        unsigned int read_versionManifest:1;
        unsigned int read_wifiConnectionQualityProbeURLLegacy:1;
        unsigned int read_xmlChecksums:1;
        unsigned int read_xmls:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)displayStringsType;
+ (Class)muninBucketType;
+ (Class)staleResourceType;
+ (Class)regionalResourceType;
+ (Class)activeResourceType;
+ (Class)locationShiftEnabledRegionType;
+ (Class)xmlChecksumType;
+ (Class)xmlType;
+ (Class)iconChecksumType;
+ (Class)iconType;
+ (Class)fontChecksumType;
+ (Class)fontType;
+ (Class)textureChecksumType;
+ (Class)textureType;
+ (Class)styleSheetChecksumType;
+ (Class)styleSheetType;
+ (Class)announcementsSupportedLanguagesType;
+ (Class)regionalResourceRegionType;
+ (Class)regionalResourceTileType;
+ (Class)attributionType;
+ (Class)resourceType;
+ (Class)tileSetType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
- (id)displayStringsAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayStringsCount;
- (void)addDisplayStrings:(id)arg1;
- (void)clearDisplayStrings;
@property(retain, nonatomic) NSMutableArray *displayStrings;
@property(retain, nonatomic) NSString *environment;
@property(readonly, nonatomic) _Bool hasEnvironment;
- (id)muninBucketAtIndex:(unsigned long long)arg1;
- (unsigned long long)muninBucketsCount;
- (void)addMuninBucket:(id)arg1;
- (void)clearMuninBuckets;
@property(retain, nonatomic) NSMutableArray *muninBuckets;
@property(retain, nonatomic) GEOURLInfoSet *urlInfoSet;
@property(readonly, nonatomic) _Bool hasUrlInfoSet;
@property(retain, nonatomic) NSData *flyoverRegionVersions;
@property(readonly, nonatomic) _Bool hasFlyoverRegionVersions;
@property(retain, nonatomic) NSString *muninBaseURL;
@property(readonly, nonatomic) _Bool hasMuninBaseURL;
@property(retain, nonatomic) NSString *wifiConnectionQualityProbeURLLegacy;
@property(readonly, nonatomic) _Bool hasWifiConnectionQualityProbeURLLegacy;
@property(retain, nonatomic) NSString *backgroundRevGeoURLLegacy;
@property(readonly, nonatomic) _Bool hasBackgroundRevGeoURLLegacy;
@property(retain, nonatomic) NSString *bluePOIURLLegacy;
@property(readonly, nonatomic) _Bool hasBluePOIURLLegacy;
@property(retain, nonatomic) NSString *backgroundDispatcherURLLegacy;
@property(readonly, nonatomic) _Bool hasBackgroundDispatcherURLLegacy;
@property(retain, nonatomic) NSString *proactiveRoutingURLLegacy;
@property(readonly, nonatomic) _Bool hasProactiveRoutingURLLegacy;
@property(retain, nonatomic) NSString *logMessageUsageV3URLLegacy;
@property(readonly, nonatomic) _Bool hasLogMessageUsageV3URLLegacy;
@property(retain, nonatomic) NSString *batchTrafficProbeURLLegacy;
@property(readonly, nonatomic) _Bool hasBatchTrafficProbeURLLegacy;
@property(retain, nonatomic) NSString *realtimeTrafficProbeURLLegacy;
@property(readonly, nonatomic) _Bool hasRealtimeTrafficProbeURLLegacy;
@property(retain, nonatomic) GEODataSetDescription *dataSet;
@property(readonly, nonatomic) _Bool hasDataSet;
- (id)staleResourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)staleResourcesCount;
- (void)addStaleResource:(id)arg1;
- (void)clearStaleResources;
@property(retain, nonatomic) NSMutableArray *staleResources;
- (int)StringAsActiveScenarios:(id)arg1;
- (id)activeScenariosAsString:(int)arg1;
- (void)setActiveScenarios:(int *)arg1 count:(unsigned long long)arg2;
- (int)activeScenarioAtIndex:(unsigned long long)arg1;
- (void)addActiveScenario:(int)arg1;
- (void)clearActiveScenarios;
@property(readonly, nonatomic) int *activeScenarios;
@property(readonly, nonatomic) unsigned long long activeScenariosCount;
- (int)StringAsActiveScales:(id)arg1;
- (id)activeScalesAsString:(int)arg1;
- (void)setActiveScales:(int *)arg1 count:(unsigned long long)arg2;
- (int)activeScaleAtIndex:(unsigned long long)arg1;
- (void)addActiveScale:(int)arg1;
- (void)clearActiveScales;
@property(readonly, nonatomic) int *activeScales;
@property(readonly, nonatomic) unsigned long long activeScalesCount;
@property(nonatomic) _Bool hasModelVersion;
@property(nonatomic) unsigned int modelVersion;
- (id)regionalResourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionalResourcesCount;
- (void)addRegionalResource:(id)arg1;
- (void)clearRegionalResources;
@property(retain, nonatomic) NSMutableArray *regionalResources;
- (id)activeResourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)activeResourcesCount;
- (void)addActiveResource:(id)arg1;
- (void)clearActiveResources;
@property(retain, nonatomic) NSMutableArray *activeResources;
@property(retain, nonatomic) NSString *spatialLookupURLLegacy;
@property(readonly, nonatomic) _Bool hasSpatialLookupURLLegacy;
@property(retain, nonatomic) NSData *reserved;
@property(readonly, nonatomic) _Bool hasReserved;
- (void)setHybridUnavailableRegions:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (struct GEOTileSetRegion)hybridUnavailableRegionAtIndex:(unsigned long long)arg1;
- (void)addHybridUnavailableRegion:(struct GEOTileSetRegion)arg1;
- (void)clearHybridUnavailableRegions;
@property(readonly, nonatomic) struct GEOTileSetRegion *hybridUnavailableRegions;
@property(readonly, nonatomic) unsigned long long hybridUnavailableRegionsCount;
@property(nonatomic) _Bool hasLocationShiftVersion;
@property(nonatomic) unsigned int locationShiftVersion;
- (id)locationShiftEnabledRegionAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationShiftEnabledRegionsCount;
- (void)addLocationShiftEnabledRegion:(id)arg1;
- (void)clearLocationShiftEnabledRegions;
@property(retain, nonatomic) NSMutableArray *locationShiftEnabledRegions;
@property(retain, nonatomic) NSString *logMessageUsageURLLegacy;
@property(readonly, nonatomic) _Bool hasLogMessageUsageURLLegacy;
@property(retain, nonatomic) NSString *businessPortalBaseURLLegacy;
@property(readonly, nonatomic) _Bool hasBusinessPortalBaseURLLegacy;
@property(retain, nonatomic) NSString *abExperimentURLLegacy;
@property(readonly, nonatomic) _Bool hasAbExperimentURLLegacy;
- (id)xmlChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)xmlChecksumsCount;
- (void)addXmlChecksum:(id)arg1;
- (void)clearXmlChecksums;
@property(retain, nonatomic) NSMutableArray *xmlChecksums;
- (id)xmlAtIndex:(unsigned long long)arg1;
- (unsigned long long)xmlsCount;
- (void)addXml:(id)arg1;
- (void)clearXmls;
@property(retain, nonatomic) NSMutableArray *xmls;
- (id)iconChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconChecksumsCount;
- (void)addIconChecksum:(id)arg1;
- (void)clearIconChecksums;
@property(retain, nonatomic) NSMutableArray *iconChecksums;
- (id)iconAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconsCount;
- (void)addIcon:(id)arg1;
- (void)clearIcons;
@property(retain, nonatomic) NSMutableArray *icons;
- (id)fontChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)fontChecksumsCount;
- (void)addFontChecksum:(id)arg1;
- (void)clearFontChecksums;
@property(retain, nonatomic) NSMutableArray *fontChecksums;
- (id)fontAtIndex:(unsigned long long)arg1;
- (unsigned long long)fontsCount;
- (void)addFont:(id)arg1;
- (void)clearFonts;
@property(retain, nonatomic) NSMutableArray *fonts;
- (id)textureChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)textureChecksumsCount;
- (void)addTextureChecksum:(id)arg1;
- (void)clearTextureChecksums;
@property(retain, nonatomic) NSMutableArray *textureChecksums;
- (id)textureAtIndex:(unsigned long long)arg1;
- (unsigned long long)texturesCount;
- (void)addTexture:(id)arg1;
- (void)clearTextures;
@property(retain, nonatomic) NSMutableArray *textures;
- (id)styleSheetChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)styleSheetChecksumsCount;
- (void)addStyleSheetChecksum:(id)arg1;
- (void)clearStyleSheetChecksums;
@property(retain, nonatomic) NSMutableArray *styleSheetChecksums;
- (id)styleSheetAtIndex:(unsigned long long)arg1;
- (unsigned long long)styleSheetsCount;
- (void)addStyleSheet:(id)arg1;
- (void)clearStyleSheets;
@property(retain, nonatomic) NSMutableArray *styleSheets;
@property(retain, nonatomic) GEOVersionManifest *versionManifest;
@property(readonly, nonatomic) _Bool hasVersionManifest;
@property(retain, nonatomic) NSString *problemOptInURLLegacy;
@property(readonly, nonatomic) _Bool hasProblemOptInURLLegacy;
@property(retain, nonatomic) NSString *dispatcherURLLegacy;
@property(readonly, nonatomic) _Bool hasDispatcherURLLegacy;
- (id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementsSupportedLanguagesCount;
- (void)addAnnouncementsSupportedLanguages:(id)arg1;
- (void)clearAnnouncementsSupportedLanguages;
@property(retain, nonatomic) NSMutableArray *announcementsSupportedLanguages;
@property(retain, nonatomic) NSString *announcementsURLLegacy;
@property(readonly, nonatomic) _Bool hasAnnouncementsURLLegacy;
@property(retain, nonatomic) NSString *problemCategoriesURLLegacy;
@property(readonly, nonatomic) _Bool hasProblemCategoriesURLLegacy;
@property(retain, nonatomic) NSString *reverseGeocoderVersionsURLLegacy;
@property(readonly, nonatomic) _Bool hasReverseGeocoderVersionsURLLegacy;
@property(retain, nonatomic) NSString *problemStatusURLLegacy;
@property(readonly, nonatomic) _Bool hasProblemStatusURLLegacy;
@property(retain, nonatomic) NSString *problemSubmissionURLLegacy;
@property(readonly, nonatomic) _Bool hasProblemSubmissionURLLegacy;
@property(retain, nonatomic) NSString *polyLocationShiftURLLegacy;
@property(readonly, nonatomic) _Bool hasPolyLocationShiftURLLegacy;
@property(retain, nonatomic) NSString *addressCorrectionUpdateURLLegacy;
@property(readonly, nonatomic) _Bool hasAddressCorrectionUpdateURLLegacy;
@property(retain, nonatomic) NSString *addressCorrectionInitURLLegacy;
@property(readonly, nonatomic) _Bool hasAddressCorrectionInitURLLegacy;
@property(retain, nonatomic) NSString *simpleETAURLLegacy;
@property(readonly, nonatomic) _Bool hasSimpleETAURLLegacy;
@property(retain, nonatomic) NSString *resourcesURLLegacy;
@property(readonly, nonatomic) _Bool hasResourcesURLLegacy;
@property(retain, nonatomic) NSString *releaseInfo;
@property(readonly, nonatomic) _Bool hasReleaseInfo;
@property(retain, nonatomic) NSString *batchReverseGeocoderURLLegacy;
@property(readonly, nonatomic) _Bool hasBatchReverseGeocoderURLLegacy;
@property(retain, nonatomic) NSString *etaURLLegacy;
@property(readonly, nonatomic) _Bool hasEtaURLLegacy;
@property(retain, nonatomic) NSString *directionsURLLegacy;
@property(readonly, nonatomic) _Bool hasDirectionsURLLegacy;
@property(retain, nonatomic) NSString *searchAttributionManifestURLLegacy;
@property(readonly, nonatomic) _Bool hasSearchAttributionManifestURLLegacy;
@property(retain, nonatomic) NSString *regionalResourcesURLLegacy;
@property(readonly, nonatomic) _Bool hasRegionalResourcesURLLegacy;
- (id)regionalResourceRegionAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionalResourceRegionsCount;
- (void)addRegionalResourceRegion:(id)arg1;
- (void)clearRegionalResourceRegions;
@property(retain, nonatomic) NSMutableArray *regionalResourceRegions;
- (id)regionalResourceTileAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionalResourceTilesCount;
- (void)addRegionalResourceTile:(id)arg1;
- (void)clearRegionalResourceTiles;
@property(retain, nonatomic) NSMutableArray *regionalResourceTiles;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (void)addAttribution:(id)arg1;
- (void)clearAttributions;
@property(retain, nonatomic) NSMutableArray *attributions;
@property(retain, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) _Bool hasUniqueIdentifier;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)resourcesCount;
- (void)addResource:(id)arg1;
- (void)clearResources;
@property(retain, nonatomic) NSMutableArray *resources;
- (id)tileSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)tileSetsCount;
- (void)addTileSet:(id)arg1;
- (void)clearTileSets;
@property(retain, nonatomic) NSMutableArray *tileSets;
@property(nonatomic) unsigned int identifier;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (void)enumerateFlyoverRegions:(CDUnknownBlockType)arg1;
- (unsigned int)dataVersionForFlyoverRegion:(unsigned int)arg1;
- (_Bool)hasDataVersionForFlyoverRegion:(unsigned int)arg1;
- (unsigned int)versionForFlyoverRegion:(unsigned int)arg1;
- (id)_decodedFlyoverRegionVersions;
- (void)_setDecodedFlyoverRegionVersions:(id)arg1;
- (_Bool)isMuninEnabled;
- (id)muninBucketURLForId:(unsigned short)arg1 lod:(unsigned char)arg2;
- (void)iterateActiveTileSets:(CDUnknownBlockType)arg1;
- (id)regionalResourcesForMapRect:(CDStruct_90e2a262)arg1;
- (unsigned int)largestRegionalResourceZoomLevelContainingTileKey:(const struct _GEOTileKey *)arg1;
- (id)regionalResourceKeysForMapRegions:(id)arg1 scale:(int)arg2 scenarios:(id)arg3 resourceFilter:(CDUnknownBlockType)arg4 attributionFilter:(CDUnknownBlockType)arg5;
- (id)regionalResourceKeysForTileKey:(const struct _GEOTileKey *)arg1 scale:(int)arg2 scenarios:(id)arg3;
- (_Bool)hasRegionalResourcesForTileKey:(const struct _GEOTileKey *)arg1;
- (void)_resetBestLanguages;
- (_Bool)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (_Bool)useProxyAuthForTileKey:(const struct _GEOTileKey *)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1 overrideLocale:(id)arg2;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)isHybridModeAvailableForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey *)arg1;
- (int)requestStyleForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey *)arg1;
- (id)localizationURLStringForTileKey:(const struct _GEOTileKey *)arg1;
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;
- (id)activeTileSetForStyle:(int)arg1;
- (id)activeTileSetForStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)activeTileSetForTileType:(int)arg1 scale:(int)arg2;
- (void)populateRegionalResources:(id)arg1;
- (void)clearModernFormatFields;
- (void)populateLegacyFormat;

@end
