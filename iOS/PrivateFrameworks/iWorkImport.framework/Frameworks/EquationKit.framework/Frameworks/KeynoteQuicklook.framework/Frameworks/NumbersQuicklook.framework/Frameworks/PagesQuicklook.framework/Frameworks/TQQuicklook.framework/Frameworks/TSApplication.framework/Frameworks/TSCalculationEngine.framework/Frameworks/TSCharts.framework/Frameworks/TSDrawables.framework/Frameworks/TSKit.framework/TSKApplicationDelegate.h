//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface TSKApplicationDelegate : NSObject
{
    NSArray *_availableLanguages;
    NSString *_initialInputLanguage;
}

+ (id)documentDirectoryPath;
+ (id)sharedPropertiesProvider;
+ (id)sharedDelegate;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *initialInputLanguage; // @synthesize initialInputLanguage=_initialInputLanguage;
@property(readonly, nonatomic) NSArray *availableLanguages; // @synthesize availableLanguages=_availableLanguages;
- (void)donateAddBodyRowAtBottomIntentWithInfo:(id)arg1;
- (unsigned long long)operationStoragePruningThresholdWithDocumentRoot:(id)arg1;
@property(readonly, nonatomic) unsigned long long smallOperationStorageSize;
@property(readonly, nonatomic) unsigned long long maxOperationStorageSize;
@property(readonly, nonatomic) double minOperationStorageEntryAge;
@property(readonly, nonatomic) NSDate *applicationLaunchTime;
@property(copy, nonatomic) NSString *iWorkAuthorPrivateID; // @dynamic iWorkAuthorPrivateID;
@property(nonatomic) unsigned long long iWorkAuthorColorIndex;
@property(copy, nonatomic) NSString *iWorkAuthorName;
@property(readonly, getter=isInBackground) _Bool inBackground;
@property(readonly, getter=isActivating) _Bool activating;
@property(readonly, nonatomic) _Bool performanceModeEnabled;
- (id)defaultHyperlinkURLWithDocumentRoot:(id)arg1;
- (_Bool)openURL:(id)arg1 displayAlertOnError:(_Bool)arg2;
- (_Bool)openURL:(id)arg1;
- (id)appChartPropertyOverrides;
- (void)customizeHyperlinkViewController:(id)arg1 documentRoot:(id)arg2;
- (id)previewImageForType:(id)arg1;
@property(readonly, nonatomic) _Bool imageGalleryCaptionsUsePlaceholderText;
- (_Bool)shouldValidateMasterLayoutWhileInsertingRows;
@property(readonly, nonatomic) _Bool supportsLinkedTextBoxes;
- (_Bool)supportsAutosizingTextboxes;
- (_Bool)supportsShrinkTextToFit;
- (_Bool)sidebarPositionRespectsUserInterfaceLayoutDirection;
- (_Bool)supportsRTL;
@property(readonly, nonatomic) _Bool supportsCommentsInMasters;
@property(readonly, nonatomic) _Bool supportsFreehandAnimationUI;
@property(readonly, nonatomic) _Bool supportsPastingIntoGroups;
- (_Bool)shouldRenderLargeImages;
- (_Bool)shouldRenderCurvedShadow;
- (_Bool)shouldRenderContactShadow;
- (id)createCompatibilityDelegate;
- (void)configureSharedPropertiesProvider:(id)arg1;
@property(readonly, nonatomic) Class propertiesProviderClass;
- (void)p_setUpSharedPropertiesProviderIfNeeded;
- (id)init;
@property(readonly, nonatomic) _Bool textInspectorShowsMoreSubpane;
@property(readonly, nonatomic) _Bool tableCellInspectorShowsNaturalAlignment;
@property(readonly, nonatomic) _Bool tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property(readonly, nonatomic) _Bool tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property(readonly, nonatomic) _Bool tableHeaderInspectorShowsFreezeHeaderRowsSwitch;

@end
