//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOVersionManifest, NSMutableArray, NSString, PBUnknownFields;

@interface GEOResources : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_abExperimentURL;
    NSString *_addressCorrectionInitURL;
    NSString *_addressCorrectionUpdateURL;
    NSMutableArray *_announcementsSupportedLanguages;
    NSString *_announcementsURL;
    NSMutableArray *_attributions;
    NSString *_authProxyURL;
    NSString *_authToken;
    NSString *_backgroundDispatcherURL;
    NSString *_backgroundRevGeoURL;
    NSString *_batchReverseGeocoderURL;
    NSString *_batchTrafficProbeURL;
    NSString *_bluePOIDispatcherURL;
    NSString *_businessPortalBaseURL;
    NSMutableArray *_dataSetURLOverrides;
    NSMutableArray *_dataSets;
    NSString *_directionsURL;
    NSString *_dispatcherURL;
    NSString *_etaURL;
    NSMutableArray *_fontChecksums;
    NSMutableArray *_fonts;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    NSMutableArray *_locationShiftEnabledRegions;
    unsigned int _locationShiftVersion;
    NSString *_logMessageUsageURL;
    NSString *_logMessageUsageV3URL;
    NSString *_polyLocationShiftURL;
    NSString *_proactiveRoutingURL;
    NSString *_problemCategoriesURL;
    NSString *_problemOptInURL;
    NSString *_problemStatusURL;
    NSString *_problemSubmissionURL;
    NSString *_realtimeTrafficProbeURL;
    NSMutableArray *_regionalResources;
    NSString *_releaseInfo;
    NSMutableArray *_resources;
    NSString *_resourcesURL;
    NSString *_reverseGeocoderVersionsURL;
    NSString *_searchAttributionManifestURL;
    NSString *_simpleETAURL;
    NSString *_spatialLookupURL;
    NSMutableArray *_styleSheetChecksums;
    NSMutableArray *_styleSheets;
    NSMutableArray *_textureChecksums;
    NSMutableArray *_textures;
    NSMutableArray *_tileGroups;
    NSMutableArray *_tileSets;
    NSMutableArray *_urlInfoSets;
    GEOVersionManifest *_versionManifest;
    NSString *_wifiConnectionQualityProbeURL;
    NSMutableArray *_xmlChecksums;
    NSMutableArray *_xmls;
    struct {
        unsigned int locationShiftVersion:1;
    } _has;
}

+ (Class)urlInfoSetType;
+ (Class)dataSetURLOverrideType;
+ (Class)dataSetType;
+ (Class)resourceType;
+ (Class)locationShiftEnabledRegionType;
+ (Class)announcementsSupportedLanguagesType;
+ (Class)xmlChecksumType;
+ (Class)iconChecksumType;
+ (Class)fontChecksumType;
+ (Class)textureChecksumType;
+ (Class)styleSheetChecksumType;
+ (Class)attributionType;
+ (Class)xmlType;
+ (Class)regionalResourceType;
+ (Class)iconType;
+ (Class)fontType;
+ (Class)textureType;
+ (Class)styleSheetType;
+ (Class)tileSetType;
+ (Class)tileGroupType;
@property(retain, nonatomic) NSMutableArray *urlInfoSets; // @synthesize urlInfoSets=_urlInfoSets;
@property(retain, nonatomic) NSString *authProxyURL; // @synthesize authProxyURL=_authProxyURL;
@property(retain, nonatomic) NSString *wifiConnectionQualityProbeURL; // @synthesize wifiConnectionQualityProbeURL=_wifiConnectionQualityProbeURL;
@property(retain, nonatomic) NSString *backgroundRevGeoURL; // @synthesize backgroundRevGeoURL=_backgroundRevGeoURL;
@property(retain, nonatomic) NSString *bluePOIDispatcherURL; // @synthesize bluePOIDispatcherURL=_bluePOIDispatcherURL;
@property(retain, nonatomic) NSString *backgroundDispatcherURL; // @synthesize backgroundDispatcherURL=_backgroundDispatcherURL;
@property(retain, nonatomic) NSString *logMessageUsageV3URL; // @synthesize logMessageUsageV3URL=_logMessageUsageV3URL;
@property(retain, nonatomic) NSString *proactiveRoutingURL; // @synthesize proactiveRoutingURL=_proactiveRoutingURL;
@property(retain, nonatomic) NSString *batchTrafficProbeURL; // @synthesize batchTrafficProbeURL=_batchTrafficProbeURL;
@property(retain, nonatomic) NSString *realtimeTrafficProbeURL; // @synthesize realtimeTrafficProbeURL=_realtimeTrafficProbeURL;
@property(retain, nonatomic) NSMutableArray *dataSetURLOverrides; // @synthesize dataSetURLOverrides=_dataSetURLOverrides;
@property(retain, nonatomic) NSMutableArray *dataSets; // @synthesize dataSets=_dataSets;
@property(retain, nonatomic) NSString *spatialLookupURL; // @synthesize spatialLookupURL=_spatialLookupURL;
@property(retain, nonatomic) NSMutableArray *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSMutableArray *locationShiftEnabledRegions; // @synthesize locationShiftEnabledRegions=_locationShiftEnabledRegions;
@property(retain, nonatomic) NSString *logMessageUsageURL; // @synthesize logMessageUsageURL=_logMessageUsageURL;
@property(retain, nonatomic) NSString *businessPortalBaseURL; // @synthesize businessPortalBaseURL=_businessPortalBaseURL;
@property(retain, nonatomic) NSString *abExperimentURL; // @synthesize abExperimentURL=_abExperimentURL;
@property(retain, nonatomic) GEOVersionManifest *versionManifest; // @synthesize versionManifest=_versionManifest;
@property(retain, nonatomic) NSString *problemOptInURL; // @synthesize problemOptInURL=_problemOptInURL;
@property(retain, nonatomic) NSString *dispatcherURL; // @synthesize dispatcherURL=_dispatcherURL;
@property(retain, nonatomic) NSMutableArray *announcementsSupportedLanguages; // @synthesize announcementsSupportedLanguages=_announcementsSupportedLanguages;
@property(retain, nonatomic) NSString *announcementsURL; // @synthesize announcementsURL=_announcementsURL;
@property(retain, nonatomic) NSString *problemCategoriesURL; // @synthesize problemCategoriesURL=_problemCategoriesURL;
@property(retain, nonatomic) NSString *reverseGeocoderVersionsURL; // @synthesize reverseGeocoderVersionsURL=_reverseGeocoderVersionsURL;
@property(retain, nonatomic) NSString *problemStatusURL; // @synthesize problemStatusURL=_problemStatusURL;
@property(retain, nonatomic) NSString *problemSubmissionURL; // @synthesize problemSubmissionURL=_problemSubmissionURL;
@property(retain, nonatomic) NSString *polyLocationShiftURL; // @synthesize polyLocationShiftURL=_polyLocationShiftURL;
@property(retain, nonatomic) NSString *addressCorrectionUpdateURL; // @synthesize addressCorrectionUpdateURL=_addressCorrectionUpdateURL;
@property(retain, nonatomic) NSString *addressCorrectionInitURL; // @synthesize addressCorrectionInitURL=_addressCorrectionInitURL;
@property(retain, nonatomic) NSMutableArray *xmlChecksums; // @synthesize xmlChecksums=_xmlChecksums;
@property(retain, nonatomic) NSMutableArray *iconChecksums; // @synthesize iconChecksums=_iconChecksums;
@property(retain, nonatomic) NSMutableArray *fontChecksums; // @synthesize fontChecksums=_fontChecksums;
@property(retain, nonatomic) NSMutableArray *textureChecksums; // @synthesize textureChecksums=_textureChecksums;
@property(retain, nonatomic) NSMutableArray *styleSheetChecksums; // @synthesize styleSheetChecksums=_styleSheetChecksums;
@property(retain, nonatomic) NSString *simpleETAURL; // @synthesize simpleETAURL=_simpleETAURL;
@property(retain, nonatomic) NSString *batchReverseGeocoderURL; // @synthesize batchReverseGeocoderURL=_batchReverseGeocoderURL;
@property(retain, nonatomic) NSString *releaseInfo; // @synthesize releaseInfo=_releaseInfo;
@property(retain, nonatomic) NSString *etaURL; // @synthesize etaURL=_etaURL;
@property(retain, nonatomic) NSString *directionsURL; // @synthesize directionsURL=_directionsURL;
@property(retain, nonatomic) NSString *searchAttributionManifestURL; // @synthesize searchAttributionManifestURL=_searchAttributionManifestURL;
@property(retain, nonatomic) NSString *resourcesURL; // @synthesize resourcesURL=_resourcesURL;
@property(retain, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property(retain, nonatomic) NSMutableArray *xmls; // @synthesize xmls=_xmls;
@property(retain, nonatomic) NSMutableArray *regionalResources; // @synthesize regionalResources=_regionalResources;
@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSMutableArray *fonts; // @synthesize fonts=_fonts;
@property(retain, nonatomic) NSMutableArray *textures; // @synthesize textures=_textures;
@property(retain, nonatomic) NSMutableArray *styleSheets; // @synthesize styleSheets=_styleSheets;
@property(retain, nonatomic) NSMutableArray *tileSets; // @synthesize tileSets=_tileSets;
@property(retain, nonatomic) NSMutableArray *tileGroups; // @synthesize tileGroups=_tileGroups;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)urlInfoSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlInfoSetsCount;
- (void)addUrlInfoSet:(id)arg1;
- (void)clearUrlInfoSets;
@property(readonly, nonatomic) _Bool hasAuthProxyURL;
@property(readonly, nonatomic) _Bool hasWifiConnectionQualityProbeURL;
@property(readonly, nonatomic) _Bool hasBackgroundRevGeoURL;
@property(readonly, nonatomic) _Bool hasBluePOIDispatcherURL;
@property(readonly, nonatomic) _Bool hasBackgroundDispatcherURL;
@property(readonly, nonatomic) _Bool hasLogMessageUsageV3URL;
@property(readonly, nonatomic) _Bool hasProactiveRoutingURL;
@property(readonly, nonatomic) _Bool hasBatchTrafficProbeURL;
@property(readonly, nonatomic) _Bool hasRealtimeTrafficProbeURL;
- (id)dataSetURLOverrideAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataSetURLOverridesCount;
- (void)addDataSetURLOverride:(id)arg1;
- (void)clearDataSetURLOverrides;
- (id)dataSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataSetsCount;
- (void)addDataSet:(id)arg1;
- (void)clearDataSets;
@property(readonly, nonatomic) _Bool hasSpatialLookupURL;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)resourcesCount;
- (void)addResource:(id)arg1;
- (void)clearResources;
@property(nonatomic) _Bool hasLocationShiftVersion;
@property(nonatomic) unsigned int locationShiftVersion; // @synthesize locationShiftVersion=_locationShiftVersion;
- (id)locationShiftEnabledRegionAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationShiftEnabledRegionsCount;
- (void)addLocationShiftEnabledRegion:(id)arg1;
- (void)clearLocationShiftEnabledRegions;
@property(readonly, nonatomic) _Bool hasLogMessageUsageURL;
@property(readonly, nonatomic) _Bool hasBusinessPortalBaseURL;
@property(readonly, nonatomic) _Bool hasAbExperimentURL;
@property(readonly, nonatomic) _Bool hasVersionManifest;
@property(readonly, nonatomic) _Bool hasProblemOptInURL;
@property(readonly, nonatomic) _Bool hasDispatcherURL;
- (id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementsSupportedLanguagesCount;
- (void)addAnnouncementsSupportedLanguages:(id)arg1;
- (void)clearAnnouncementsSupportedLanguages;
@property(readonly, nonatomic) _Bool hasAnnouncementsURL;
@property(readonly, nonatomic) _Bool hasProblemCategoriesURL;
@property(readonly, nonatomic) _Bool hasReverseGeocoderVersionsURL;
@property(readonly, nonatomic) _Bool hasProblemStatusURL;
@property(readonly, nonatomic) _Bool hasProblemSubmissionURL;
@property(readonly, nonatomic) _Bool hasPolyLocationShiftURL;
@property(readonly, nonatomic) _Bool hasAddressCorrectionUpdateURL;
@property(readonly, nonatomic) _Bool hasAddressCorrectionInitURL;
- (id)xmlChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)xmlChecksumsCount;
- (void)addXmlChecksum:(id)arg1;
- (void)clearXmlChecksums;
- (id)iconChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconChecksumsCount;
- (void)addIconChecksum:(id)arg1;
- (void)clearIconChecksums;
- (id)fontChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)fontChecksumsCount;
- (void)addFontChecksum:(id)arg1;
- (void)clearFontChecksums;
- (id)textureChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)textureChecksumsCount;
- (void)addTextureChecksum:(id)arg1;
- (void)clearTextureChecksums;
- (id)styleSheetChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)styleSheetChecksumsCount;
- (void)addStyleSheetChecksum:(id)arg1;
- (void)clearStyleSheetChecksums;
@property(readonly, nonatomic) _Bool hasSimpleETAURL;
@property(readonly, nonatomic) _Bool hasBatchReverseGeocoderURL;
@property(readonly, nonatomic) _Bool hasReleaseInfo;
@property(readonly, nonatomic) _Bool hasEtaURL;
@property(readonly, nonatomic) _Bool hasDirectionsURL;
@property(readonly, nonatomic) _Bool hasSearchAttributionManifestURL;
@property(readonly, nonatomic) _Bool hasResourcesURL;
@property(readonly, nonatomic) _Bool hasAuthToken;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (void)addAttribution:(id)arg1;
- (void)clearAttributions;
- (id)xmlAtIndex:(unsigned long long)arg1;
- (unsigned long long)xmlsCount;
- (void)addXml:(id)arg1;
- (void)clearXmls;
- (id)regionalResourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionalResourcesCount;
- (void)addRegionalResource:(id)arg1;
- (void)clearRegionalResources;
- (id)iconAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconsCount;
- (void)addIcon:(id)arg1;
- (void)clearIcons;
- (id)fontAtIndex:(unsigned long long)arg1;
- (unsigned long long)fontsCount;
- (void)addFont:(id)arg1;
- (void)clearFonts;
- (id)textureAtIndex:(unsigned long long)arg1;
- (unsigned long long)texturesCount;
- (void)addTexture:(id)arg1;
- (void)clearTextures;
- (id)styleSheetAtIndex:(unsigned long long)arg1;
- (unsigned long long)styleSheetsCount;
- (void)addStyleSheet:(id)arg1;
- (void)clearStyleSheets;
- (id)tileSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)tileSetsCount;
- (void)addTileSet:(id)arg1;
- (void)clearTileSets;
- (id)tileGroupAtIndex:(unsigned long long)arg1;
- (unsigned long long)tileGroupsCount;
- (void)addTileGroup:(id)arg1;
- (void)clearTileGroups;
- (id)preferedURLSetFor:(id)arg1;
- (void)workAround24919568IfNecessary;
- (void)convertFromLegacyFormat;

@end

