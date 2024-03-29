//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSApplication/TSAApplicationPropertiesProvider.h>

@class NSArray;

@interface TNAppPropertiesProvider : TSAApplicationPropertiesProvider
{
}

- (id)appChartPropertyOverrides;
- (id)applicationTemplateVariantsForLocale:(id)arg1;
- (id)bladerunnerContainerIdentifier;
- (id)cloudKitSyncContainerIdentifier;
- (id)cloudKitContainerIdentifier;
@property(readonly, copy, nonatomic) NSArray *excelDocumentTypes;
- (id)importableDocumentTypes;
- (id)nativeSFFDocumentType;
- (id)tangierEditingFormatDocumentType;
- (id)templateSFFDocumentType;
- (id)templateDocumentType;
- (id)nativeDocumentType;
- (Class)documentRootClass;
- (id)templateTypeDisplayName;
- (id)documentTypeDisplayNameForSharingInvitation;
- (id)documentTypeDisplayName;
- (id)documentShareURLScheme;
- (unsigned long long)applicationType;
- (id)applicationDisplayName;
- (id)applicationName;

@end

