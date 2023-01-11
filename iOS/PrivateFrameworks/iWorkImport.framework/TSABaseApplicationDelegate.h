//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, TSADocumentRoot;
@protocol TSADownloadDelegate;

__attribute__((visibility("hidden")))
@interface TSABaseApplicationDelegate
{
    TSADocumentRoot *mDocumentRoot;
    id <TSADownloadDelegate> _downloadDelegate;
}

+ (void)resetSharedConfigurations;
+ (id)sharedDelegate;
@property(retain, nonatomic) id <TSADownloadDelegate> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
@property(nonatomic) TSADocumentRoot *documentRoot; // @synthesize documentRoot=mDocumentRoot;
- (void)setAppTextDefaults:(id)arg1 passphraseVerifier:(id)arg2;
- (id)iWorkTextDefaultsPassphraseVerifier;
- (id)appTextDefaults;
- (id)appTextDefaultsKey;
- (void)setIWorkAuthorPrivateID:(id)arg1;
- (id)iWorkAuthorPrivateID;
@property(readonly, nonatomic) NSArray *iWorkAuthorPrivateIDs;
- (void)clearIWorkAuthorPrivateID;
- (_Bool)isValidIWorkAuthorColorIndex:(unsigned long long)arg1;
- (void)setIWorkAuthorColorIndex:(unsigned long long)arg1;
- (unsigned long long)iWorkAuthorColorIndex;
- (id)iWorkAuthorName;
- (_Bool)hasIWorkAuthorName;
- (void)setIWorkAuthorName:(id)arg1;
- (void)setICloudPreferences:(id)arg1 forKvsDocumentKey:(id)arg2;
- (id)iCloudPreferencesForKvsDocumentKey:(id)arg1;
- (id)validICloudPreferencesForPreferences:(id)arg1 invalidKeys:(id *)arg2;
- (_Bool)isICloudDocumentPreference:(id)arg1 validForKey:(id)arg2;
- (id)iCloudDocumentPreferenceKeyForKvsDocumentKey:(id)arg1 isMatchingKey:(_Bool *)arg2;
- (void)ubiquitousKeyValueStoreDidChange:(id)arg1;
- (id)iCloudPreferenceKeys;
- (unsigned long long)collaboratorColorIndexForKvsDocumentKey:(id)arg1;
- (id)collaboratorNameForDocumentInfo:(id)arg1 firstName:(id *)arg2 lastName:(id *)arg3;
- (void)clearIWorkAuthorColorIndex;
- (void)clearIWorkAuthorName;
- (void)clearICloudDocumentPreferences;
- (id)documentPreferenceKeyPrefix;
- (void)registerICloudPreferences;
- (id)existingNestedDocumentPathForPath:(id)arg1;
- (_Bool)showChineseNamedPointSizes;
- (_Bool)openURL:(id)arg1 withDocumentRoot:(id)arg2;
- (_Bool)openURL:(id)arg1;
- (double)maximumAspectRatioForPreviewImage;
- (double)mimimumAspectRatioForPreviewImage;
- (Class)drawableInfoSubclassForClass:(Class)arg1 unarchiver:(id)arg2;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale *)arg1;
@property(readonly, nonatomic) NSArray *applicationTemplateVariants;
- (void)registerDefaults;
- (_Bool)isReadableDocumentType:(id)arg1;
@property(readonly, nonatomic) NSArray *importableDocumentTypes;
@property(readonly, nonatomic) NSArray *readableDocumentTypes;
@property(readonly, nonatomic) NSArray *nativeDocumentTypes;
@property(readonly, nonatomic) NSString *nativeSFFDocumentType;
@property(readonly, nonatomic) NSString *tangierEditingFormatDocumentType;
@property(readonly, nonatomic) NSString *templateDocumentExtension;
@property(readonly, nonatomic) NSString *templateSFFDocumentType;
@property(readonly, nonatomic) NSString *templateDocumentType;
@property(readonly, nonatomic) NSString *nativeDocumentExtension;
@property(readonly, nonatomic) NSString *nativeDocumentType;
- (void)persistenceError:(id)arg1;
- (void)wakeUpDownloadManager;
- (void)registerSOSClassTypeMappings;
- (Class)documentRootClass;
- (void)dealloc;
- (id)init;

@end

