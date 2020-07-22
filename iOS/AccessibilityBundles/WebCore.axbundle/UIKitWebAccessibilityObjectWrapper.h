//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface UIKitWebAccessibilityObjectWrapper
{
}

+ (void)initialize;
+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (unsigned long long)_axUpdatesFrequentlyTrait;
- (unsigned long long)_axTextAreaTrait;
- (unsigned long long)_axSearchFieldTrait;
- (unsigned long long)_axRadioButtonTrait;
- (unsigned long long)_axNotEnabledTrait;
- (unsigned long long)_axSelectedTrait;
- (unsigned long long)_axMenuItemTrait;
- (unsigned long long)_axAdjustableTrait;
- (unsigned long long)_axStaticTextTrait;
- (unsigned long long)_axPopupButtonTrait;
- (unsigned long long)_axToggleTrait;
- (unsigned long long)_axButtonTrait;
- (unsigned long long)_axTabButtonTrait;
- (unsigned long long)_axImageTrait;
- (unsigned long long)_axTextOperationsAvailableTrait;
- (unsigned long long)_axHasTextCursorTrait;
- (unsigned long long)_axTextEntryTrait;
- (unsigned long long)_axSecureTextFieldTrait;
- (unsigned long long)_axWebContentTrait;
- (unsigned long long)_axHeaderTrait;
- (unsigned long long)_axVisitedTrait;
- (unsigned long long)_axLinkTrait;
- (unsigned long long)_axContainedByFieldsetTrait;
- (unsigned long long)_axContainedByLandmarkTrait;
- (unsigned long long)_axContainedByTableTrait;
- (unsigned long long)_axContainedByListTrait;
- (struct CGRect)bounds;
- (void)postFocusChangeNotification;
- (void)_repostFocusChangeNotification;
- (_Bool)_axHasMultipleAccessibleChildren:(long long *)arg1;
- (_Bool)_accessibilityIsScrollable;
- (struct CGPoint)accessibilityActivationPoint;
- (struct _NSRange)_accessibilitySelectedNSRangeForObject;
- (struct _NSRange)_accessibilityRangeForTextMarkers:(id)arg1;
- (struct _NSRange)_accessibilityRangeForTextMarker:(id)arg1;
- (id)_accessibilityApplication;
- (struct CGRect)_accessibilityVisibleFrame;
- (struct CGRect)accessibilityFrame;
- (struct CGRect)accessibilityFrameForScrolling;
- (_Bool)_accessibilityVisiblePointHonorsScreenBounds;
- (id)screenReaderVersion;
- (_Bool)isScreenReaderRunning;
- (void)postValueChangedNotification;
- (void)postExpandedChangedNotification;
- (void)postScreenChangeNotification;
- (void)postLayoutChangeNotification;
- (void)postChildrenChangedNotification;
- (void)postInvalidStatusChangedNotification;
- (void)postLoadCompleteNotification;
- (void)_repostLoadCompleteNotification;
- (void)postSelectedTextChangeNotification;
- (void)_repostWebSelectionChange;
- (void)_repostWebNotificaton:(id)arg1;
- (void)postLiveRegionCreatedNotification;
- (void)postLiveRegionChangeNotification;
- (void)postScrollStatusChangeNotification;
- (id)_accessibilityMakeScrollStatus:(struct CGRect)arg1 scrollPosition:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;
- (id)_accessibilityScrollStatus;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)_performPostScrollStatus:(id)arg1;
- (id)accessibilityIdentifier;
- (_Bool)_accessibilityHandwritingAttributeAcceptsContractedBraille;
- (_Bool)_accessibilityHandwritingAttributeAcceptsRawInput;
- (_Bool)_accessibilityHasTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2;
- (void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2;
- (struct _NSRange)_accessibilitySelectedTextRangeForHandwritingWithValue:(id)arg1;
- (id)_accessibilityValueForHandwriting;
- (void)_performLiveRegionUpdate;
- (id)_accessibilityWebAreaURL;
- (void)_accessibilityMoveSelectionToMarker:(id)arg1;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (void)_accessibilityDecreaseSelection:(id)arg1;
- (void)_accessibilityModifySelection:(id)arg1 increase:(_Bool)arg2;
- (unsigned long long)accessibilityTraits;
- (_Bool)_accessibilityShouldSpeakMathEquationTrait;
- (id)accessibilityCustomRotors;
- (_Bool)_accessibilityIsTopMostWebElement;
- (id)_accessibilityCustomRotor:(long long)arg1;
- (id)_axWebKitSearchKeyForCustomRotorType:(long long)arg1;
- (id)accessibilityMathEquation;
- (id)_accessibilityProcessRootEquation;
- (id)accessibilityLabel;
- (_Bool)_accessibilityHasOtherAccessibleChildElements:(id)arg1;
- (id)_accessibilityParentLinkContainer;
- (id)ariaLandmarkRoleDescription;
- (id)description;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (id)_accessibilityHeaderElementsForRow:(unsigned long long)arg1;
- (id)_accessibilityHeaderElementsForColumn:(unsigned long long)arg1;
- (id)_axWebKitTrueLinkParent;
- (id)accessibilitySpeechHint;
- (id)accessibilityMathType;
- (_Bool)accessibilityIsMathTopObject;
- (id)accessibilityMathPrescripts;
- (id)accessibilityMathPostscripts;
- (id)accessibilityMathFencedCloseString;
- (id)accessibilityMathFencedOpenString;
- (id)accessibilityMathOverObject;
- (id)accessibilityMathUnderObject;
- (id)accessibilityMathSuperscriptObject;
- (id)accessibilityMathSubscriptObject;
- (id)accessibilityMathBaseObject;
- (id)accessibilityMathDenominatorObject;
- (id)accessibilityMathNumeratorObject;
- (id)accessibilityMathRadicandObject;
- (id)accessibilityMathRootIndexObject;
- (id)accessibilityURL;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange *)arg1;
- (id)accessibilityPlaceholderValue;
- (id)_accessibilityParentForSubview:(id)arg1;
- (id)accessibilityPostProcessHitTest:(struct CGPoint)arg1;
- (id)_accessibilityMathEquationRootObject;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (_Bool)accessibilityCanFuzzyHitTest;
- (struct _NSRange)accessibilityRowRange;
- (struct _NSRange)_accessibilityCheckRowRangeForTrait:(unsigned long long)arg1;
- (_Bool)_accessibilityShouldScrollRemoteParent;
- (_Bool)_accessibilityIsScrollDivDescendent;
- (struct CGPoint)_accessibilityScrollRectToVisible:(struct CGRect)arg1;
- (_Bool)_accessibilityScrollToVisible;
- (_Bool)_accessibilityAlwaysSpeakTableHeaders;
- (id)_accessibilityScrollAncestor;
- (id)_accessibilityDOMAttributes;
- (id)_accessibilityUserTestingElementBaseType;
- (void)_axBuildAXTreeFromElement:(id)arg1 outArray:(id)arg2;
- (id)_accessibilityUserTestingChildren;
- (struct CGRect)_accessibilityConvertSystemBoundedScreenRectToContextSpace:(struct CGRect)arg1;
- (_Bool)_accessibilitySpeakThisCanBeHighlighted;
- (id)_accessibilitySpeakThisString;
- (_Bool)_accessibilityIsSpeakThisElement;
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;
- (id)_accessibilityTextMarkerForPosition:(long long)arg1;
- (_Bool)_isIBooks;
- (id)accessibilityLanguage;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (void)accessibilityElementDidBecomeFocused;
- (_Bool)accessibilityActivate;
- (id)accessibilityPath;
- (_Bool)_accessibilitySupportsActivateAction;
- (float)_accessibilityActivationDelay;
- (_Bool)_isCheckBox;
- (id)_accessibilityMarkerForPoint:(struct CGPoint)arg1;
- (struct _NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1;
- (id)_accessibilityLineStartMarker:(id)arg1;
- (id)_accessibilityLineEndMarker:(id)arg1;
- (id)_accessibilityLinePosition:(_Bool)arg1 withMarker:(id)arg2;
- (id)_accessibilityNextMarker:(id)arg1;
- (id)_accessibilityPreviousMarker:(id)arg1;
- (id)_accessibilityMarkerPosition:(_Bool)arg1 withMarker:(id)arg2;
- (id)_accessibilityTextMarkerRange;
- (id)_accessibilityTextMarkerRangeForSelection;
- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;
- (id)accessibilityStringForTextMarkers:(id)arg1;
- (struct CGRect)accessibilityBoundsForTextMarkers:(id)arg1;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange)arg1 string:(id)arg2;
- (id)_accessibilityObjectForTextMarker:(id)arg1;
- (id)_accessibilityConvertTextMarkersToDataArray:(id)arg1;
- (id)_accessibilityConvertDataArrayToTextMarkerArray:(id)arg1;
- (_Bool)_accessibilityIsDataEmpty:(id)arg1;
- (id)_accessibilityContainerTypes;
- (id)_axAncestorTypes;
- (_Bool)isAccessibilityElement;
- (_Bool)_axIsWK2DataDetectorLink;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint)arg1;
- (id)accessibilityContainer;
- (_Bool)_accessibilityIsFrameOutOfBounds;
- (id)_accessibilityWebDocumentView;
- (id)_accessibilityWebPageObject;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (id)_accessibilityRoleDescription;
- (long long)_accessibilityExpandedStatus;
- (_Bool)_axWebKitHasPopup;
- (_Bool)_axWebKitIsAriaPressed;
- (_Bool)_axWebKitSupportsARIAPressed;
- (_Bool)_accessibilityIsPressed;
- (_Bool)_accessibilitySupportsPressedState;
- (_Bool)accessibilityRequired;
- (id)accessibilitySortDirection;
- (id)_accessibilityCurrentStatus;
- (_Bool)_axWebKitIsAriaExpanded;
- (_Bool)_axWebKitSupportsARIAExpanded;
- (unsigned int)_accessibilityContextId;
- (struct CGPoint)_accessibilityConvertPointToViewSpace:(struct CGPoint)arg1;
- (_Bool)_accessibilityRequiresContextIdConversion;
- (id)_accessibilityWebPageParent;
- (_Bool)_axIsWebKit2;
- (id)_accessibilityParentView;
- (_Bool)_prepareAccessibilityCall;
- (void)_axSetWebAreaURL:(id)arg1;
- (id)_axWebAreaURL;

@end
