//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXPhotosGridSettings
{
    _Bool _emulatesEmptyLibrary;
    _Bool _enableGridZero;
    _Bool _enableInTopLevelSmartAlbums;
    _Bool _enableInImportHistory;
    _Bool _enableInRecentlyDeleted;
    _Bool _enableInMediaTypes;
    _Bool _enableInPanoramas;
    _Bool _enableInUserAlbums;
    _Bool _enableInUserSmartAlbums;
    _Bool _enableInPlaces;
    _Bool _enableInSharedAlbums;
    _Bool _enableInSearch;
    _Bool _enableInMyPhotoStream;
    _Bool _enableInStandInAlbums;
    _Bool _enableInOtherAlbums;
    _Bool _enableInAppPicker;
    _Bool _enableInImagePicker;
    _Bool _enableSuperzoom;
    _Bool _enableInvisibleNavBars;
    _Bool _enableSortAction;
    _Bool _enableNewActionMenu;
    _Bool _enableContentFiltering;
    _Bool _enableAspectFitToggle;
    _Bool _enableAspectFitButton;
    _Bool _enableZoomInOutButton;
    _Bool _enableDetailsMenuAction;
    _Bool _enableFilterButton;
    _Bool _enableFilterIndicatorButton;
    _Bool _alwaysShowFilterIndicatorButton;
    _Bool _enableFilterIcons;
    _Bool _enableFilterViewControllerAnchoringToSender;
    _Bool _enableTitleLegibilityDimmingFilter;
    _Bool _backdropStyleForPlacesAndImports;
    _Bool _colorNavbarArea;
    _Bool _useGradientSectionHeaders;
    double _defaultAnimationDuration;
    double _headerTitleTopSpacing;
    double _headerTitleBottomSpacing;
    double _sectionHeaderGradientOverhang;
    double _sectionHeaderGradientAlpha;
    double _headerGradientHeight;
    double _headerGradientAlpha;
    double _behindContentBackgroundGradientAlpha;
    double _filteringTimeoutDuration;
}

+ (id)sharedInstance;
+ (id)_enableTungstenNewFeaturesActionPredicate;
+ (id)_enableTungstenNewFeaturesAction;
+ (id)settingsControllerModule;
@property(nonatomic) double filteringTimeoutDuration; // @synthesize filteringTimeoutDuration=_filteringTimeoutDuration;
@property(nonatomic) double behindContentBackgroundGradientAlpha; // @synthesize behindContentBackgroundGradientAlpha=_behindContentBackgroundGradientAlpha;
@property(nonatomic) double headerGradientAlpha; // @synthesize headerGradientAlpha=_headerGradientAlpha;
@property(nonatomic) double headerGradientHeight; // @synthesize headerGradientHeight=_headerGradientHeight;
@property(nonatomic) double sectionHeaderGradientAlpha; // @synthesize sectionHeaderGradientAlpha=_sectionHeaderGradientAlpha;
@property(nonatomic) double sectionHeaderGradientOverhang; // @synthesize sectionHeaderGradientOverhang=_sectionHeaderGradientOverhang;
@property(nonatomic) _Bool useGradientSectionHeaders; // @synthesize useGradientSectionHeaders=_useGradientSectionHeaders;
@property(nonatomic) double headerTitleBottomSpacing; // @synthesize headerTitleBottomSpacing=_headerTitleBottomSpacing;
@property(nonatomic) double headerTitleTopSpacing; // @synthesize headerTitleTopSpacing=_headerTitleTopSpacing;
@property(nonatomic) _Bool colorNavbarArea; // @synthesize colorNavbarArea=_colorNavbarArea;
@property(nonatomic) _Bool backdropStyleForPlacesAndImports; // @synthesize backdropStyleForPlacesAndImports=_backdropStyleForPlacesAndImports;
@property(nonatomic) _Bool enableTitleLegibilityDimmingFilter; // @synthesize enableTitleLegibilityDimmingFilter=_enableTitleLegibilityDimmingFilter;
@property(nonatomic) _Bool enableFilterViewControllerAnchoringToSender; // @synthesize enableFilterViewControllerAnchoringToSender=_enableFilterViewControllerAnchoringToSender;
@property(nonatomic) _Bool enableFilterIcons; // @synthesize enableFilterIcons=_enableFilterIcons;
@property(nonatomic) _Bool alwaysShowFilterIndicatorButton; // @synthesize alwaysShowFilterIndicatorButton=_alwaysShowFilterIndicatorButton;
@property(nonatomic) _Bool enableFilterIndicatorButton; // @synthesize enableFilterIndicatorButton=_enableFilterIndicatorButton;
@property(nonatomic) _Bool enableFilterButton; // @synthesize enableFilterButton=_enableFilterButton;
@property(nonatomic) _Bool enableDetailsMenuAction; // @synthesize enableDetailsMenuAction=_enableDetailsMenuAction;
@property(nonatomic) _Bool enableZoomInOutButton; // @synthesize enableZoomInOutButton=_enableZoomInOutButton;
@property(nonatomic) _Bool enableAspectFitButton; // @synthesize enableAspectFitButton=_enableAspectFitButton;
@property(nonatomic) _Bool enableAspectFitToggle; // @synthesize enableAspectFitToggle=_enableAspectFitToggle;
@property(nonatomic) _Bool enableContentFiltering; // @synthesize enableContentFiltering=_enableContentFiltering;
@property(nonatomic) _Bool enableNewActionMenu; // @synthesize enableNewActionMenu=_enableNewActionMenu;
@property(nonatomic) _Bool enableSortAction; // @synthesize enableSortAction=_enableSortAction;
@property(nonatomic) _Bool enableInvisibleNavBars; // @synthesize enableInvisibleNavBars=_enableInvisibleNavBars;
@property(nonatomic) _Bool enableSuperzoom; // @synthesize enableSuperzoom=_enableSuperzoom;
@property(nonatomic) _Bool enableInImagePicker; // @synthesize enableInImagePicker=_enableInImagePicker;
@property(nonatomic) _Bool enableInAppPicker; // @synthesize enableInAppPicker=_enableInAppPicker;
@property(nonatomic) _Bool enableInOtherAlbums; // @synthesize enableInOtherAlbums=_enableInOtherAlbums;
@property(nonatomic) _Bool enableInStandInAlbums; // @synthesize enableInStandInAlbums=_enableInStandInAlbums;
@property(nonatomic) _Bool enableInMyPhotoStream; // @synthesize enableInMyPhotoStream=_enableInMyPhotoStream;
@property(nonatomic) _Bool enableInSearch; // @synthesize enableInSearch=_enableInSearch;
@property(nonatomic) _Bool enableInSharedAlbums; // @synthesize enableInSharedAlbums=_enableInSharedAlbums;
@property(nonatomic) _Bool enableInPlaces; // @synthesize enableInPlaces=_enableInPlaces;
@property(nonatomic) _Bool enableInUserSmartAlbums; // @synthesize enableInUserSmartAlbums=_enableInUserSmartAlbums;
@property(nonatomic) _Bool enableInUserAlbums; // @synthesize enableInUserAlbums=_enableInUserAlbums;
@property(nonatomic) _Bool enableInPanoramas; // @synthesize enableInPanoramas=_enableInPanoramas;
@property(nonatomic) _Bool enableInMediaTypes; // @synthesize enableInMediaTypes=_enableInMediaTypes;
@property(nonatomic) _Bool enableInRecentlyDeleted; // @synthesize enableInRecentlyDeleted=_enableInRecentlyDeleted;
@property(nonatomic) _Bool enableInImportHistory; // @synthesize enableInImportHistory=_enableInImportHistory;
@property(nonatomic) _Bool enableInTopLevelSmartAlbums; // @synthesize enableInTopLevelSmartAlbums=_enableInTopLevelSmartAlbums;
@property(nonatomic) _Bool enableGridZero; // @synthesize enableGridZero=_enableGridZero;
@property(nonatomic) double defaultAnimationDuration; // @synthesize defaultAnimationDuration=_defaultAnimationDuration;
@property(nonatomic) _Bool emulatesEmptyLibrary; // @synthesize emulatesEmptyLibrary=_emulatesEmptyLibrary;
- (void)setDefaultValues;
- (id)parentSettings;

@end
