//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLPhotoEditDataExporter-Protocol.h>
#import <PhotoLibraryServices/PLPhotoEditDataImporter-Protocol.h>

@class NSString;

@interface PLPhotoEditPFDataConverter : NSObject <PLPhotoEditDataImporter, PLPhotoEditDataExporter>
{
}

+ (id)_settingsDictionaryForLegacyAutoEnhanceFilters:(id)arg1;
+ (id)_filtersForLegacyAutoEnhanceSettingsDictionary:(id)arg1;
+ (id)dataFromPhotoEditModel:(id)arg1 outFormatIdentifier:(id *)arg2 outFormatVersion:(id *)arg3 exportProperties:(id)arg4;
+ (void)_sanitizeDictionary:(id)arg1;
+ (id)_validStatisticsValueTypes;
+ (id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
+ (_Bool)_validateValueTypesForKeys:(id)arg1 requiredKeys:(id)arg2 inDictionary:(id)arg3 error:(id *)arg4;
+ (_Bool)validateAdjustmentsEnvelope:(id)arg1;
+ (_Bool)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 importProperties:(id)arg5;
+ (id)_supportedAdjustments;
+ (long long)_supportLevelForSettings:(id)arg1 typesForKnownKeys:(id)arg2 requiredKeys:(id)arg3;
+ (_Bool)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
+ (id)_knownFormatIdentifiers;
+ (id)_knownFormatVersions;
+ (id)_formatVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

