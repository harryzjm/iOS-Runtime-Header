//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IBICStickersCatalog
{
}

+ (id)catalogItemFileExtension;
+ (id)fileExtensionsToAllowInUnstructuredImport;
+ (id)contentReferenceTypeName;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(_Bool)arg2;
- (id)childrenOfType:(Class)arg1;
- (id)classesForImportingLooseFilesInImportOrder;
- (id)destinationContainerForItemsInDropIncludingReceiver:(id)arg1;
- (_Bool)shouldShowSuggestionSetsForBundleIcons;
- (void)populateMutatorsToAddRequiredChildCounterparts:(id)arg1;

@end

