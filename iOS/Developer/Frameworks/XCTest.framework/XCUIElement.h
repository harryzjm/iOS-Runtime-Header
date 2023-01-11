//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTest/XCTNSPredicateExpectationObject-Protocol.h>
#import <XCTest/XCUIElementAttributes-Protocol.h>
#import <XCTest/XCUIElementAttributesPrivate-Protocol.h>
#import <XCTest/XCUIElementSnapshotProviding-Protocol.h>
#import <XCTest/XCUIElementTypeQueryProvider-Protocol.h>
#import <XCTest/XCUIScreenshotProviding-Protocol.h>

@class NSString, XCElementSnapshot, XCTLocalizableStringInfo, XCUIApplication, XCUICoordinate, XCUIElementQuery;

@interface XCUIElement : NSObject <XCUIScreenshotProviding, XCUIElementSnapshotProviding, XCTNSPredicateExpectationObject, XCUIElementAttributesPrivate, XCUIElementAttributes, XCUIElementTypeQueryProvider>
{
    _Bool _safeQueryResolutionEnabled;
    XCUIElementQuery *_query;
    XCElementSnapshot *_lastSnapshot;
}

+ (id)standardAttributeNames;
+ (_Bool)_dispatchEvent:(CDUnknownBlockType)arg1 inContext:(id)arg2 withSnapshot:(id)arg3 applicationSnapshot:(id)arg4 process:(id)arg5 error:(id *)arg6;
+ (_Bool)_isInvalidEventDuration:(double)arg1;
@property _Bool safeQueryResolutionEnabled; // @synthesize safeQueryResolutionEnabled=_safeQueryResolutionEnabled;
@property(retain) XCElementSnapshot *lastSnapshot; // @synthesize lastSnapshot=_lastSnapshot;
@property(readonly) XCUIElementQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
@property(readonly, copy) XCUIElementQuery *statusItems;
@property(readonly, copy) XCUIElementQuery *otherElements;
@property(readonly, copy) XCUIElementQuery *handles;
@property(readonly, copy) XCUIElementQuery *layoutItems;
@property(readonly, copy) XCUIElementQuery *layoutAreas;
@property(readonly, copy) XCUIElementQuery *cells;
@property(readonly, copy) XCUIElementQuery *levelIndicators;
@property(readonly, copy) XCUIElementQuery *grids;
@property(readonly, copy) XCUIElementQuery *rulerMarkers;
@property(readonly, copy) XCUIElementQuery *rulers;
@property(readonly, copy) XCUIElementQuery *dockItems;
@property(readonly, copy) XCUIElementQuery *mattes;
@property(readonly, copy) XCUIElementQuery *helpTags;
@property(readonly, copy) XCUIElementQuery *colorWells;
@property(readonly, copy) XCUIElementQuery *relevanceIndicators;
@property(readonly, copy) XCUIElementQuery *splitters;
@property(readonly, copy) XCUIElementQuery *splitGroups;
@property(readonly, copy) XCUIElementQuery *valueIndicators;
@property(readonly, copy) XCUIElementQuery *ratingIndicators;
@property(readonly, copy) XCUIElementQuery *timelines;
@property(readonly, copy) XCUIElementQuery *decrementArrows;
@property(readonly, copy) XCUIElementQuery *incrementArrows;
@property(readonly, copy) XCUIElementQuery *steppers;
@property(readonly, copy) XCUIElementQuery *webViews;
@property(readonly, copy) XCUIElementQuery *maps;
@property(readonly, copy) XCUIElementQuery *menuBarItems;
@property(readonly, copy) XCUIElementQuery *menuBars;
@property(readonly, copy) XCUIElementQuery *menuItems;
@property(readonly, copy) XCUIElementQuery *menus;
@property(readonly, copy) XCUIElementQuery *textViews;
@property(readonly, copy) XCUIElementQuery *datePickers;
@property(readonly, copy) XCUIElementQuery *secureTextFields;
@property(readonly, copy) XCUIElementQuery *textFields;
@property(readonly, copy) XCUIElementQuery *staticTexts;
@property(readonly, copy) XCUIElementQuery *scrollBars;
@property(readonly, copy) XCUIElementQuery *scrollViews;
@property(readonly, copy) XCUIElementQuery *searchFields;
@property(readonly, copy) XCUIElementQuery *icons;
@property(readonly, copy) XCUIElementQuery *images;
@property(readonly, copy) XCUIElementQuery *links;
@property(readonly, copy) XCUIElementQuery *toggles;
@property(readonly, copy) XCUIElementQuery *switches;
@property(readonly, copy) XCUIElementQuery *pickerWheels;
@property(readonly, copy) XCUIElementQuery *pickers;
@property(readonly, copy) XCUIElementQuery *segmentedControls;
@property(readonly, copy) XCUIElementQuery *activityIndicators;
@property(readonly, copy) XCUIElementQuery *progressIndicators;
@property(readonly, copy) XCUIElementQuery *pageIndicators;
@property(readonly, copy) XCUIElementQuery *sliders;
@property(readonly, copy) XCUIElementQuery *collectionViews;
@property(readonly, copy) XCUIElementQuery *browsers;
@property(readonly, copy) XCUIElementQuery *outlineRows;
@property(readonly, copy) XCUIElementQuery *outlines;
@property(readonly, copy) XCUIElementQuery *tableColumns;
@property(readonly, copy) XCUIElementQuery *tableRows;
@property(readonly, copy) XCUIElementQuery *tables;
@property(readonly, copy) XCUIElementQuery *statusBars;
@property(readonly, copy) XCUIElementQuery *toolbars;
@property(readonly, copy) XCUIElementQuery *tabGroups;
@property(readonly, copy) XCUIElementQuery *tabs;
@property(readonly, copy) XCUIElementQuery *tabBars;
@property(readonly, copy) XCUIElementQuery *navigationBars;
@property(readonly, copy) XCUIElementQuery *keys;
@property(readonly, copy) XCUIElementQuery *keyboards;
@property(readonly, copy) XCUIElementQuery *popovers;
@property(readonly, copy) XCUIElementQuery *toolbarButtons;
@property(readonly, copy) XCUIElementQuery *menuButtons;
@property(readonly, copy) XCUIElementQuery *comboBoxes;
@property(readonly, copy) XCUIElementQuery *popUpButtons;
@property(readonly, copy) XCUIElementQuery *disclosureTriangles;
@property(readonly, copy) XCUIElementQuery *checkBoxes;
@property(readonly, copy) XCUIElementQuery *radioGroups;
@property(readonly, copy) XCUIElementQuery *radioButtons;
@property(readonly, copy) XCUIElementQuery *buttons;
@property(readonly, copy) XCUIElementQuery *dialogs;
@property(readonly, copy) XCUIElementQuery *alerts;
@property(readonly, copy) XCUIElementQuery *drawers;
@property(readonly, copy) XCUIElementQuery *sheets;
@property(readonly, copy) XCUIElementQuery *windows;
@property(readonly, copy) XCUIElementQuery *groups;
@property(readonly, copy) XCUIElementQuery *touchBars;
- (id)coordinateWithNormalizedOffset:(struct CGVector)arg1;
@property(readonly, copy) XCUICoordinate *hitPointCoordinate;
@property(readonly) _Bool isTopLevelTouchBarElement;
@property(readonly) _Bool isTouchBarElement;
@property(readonly, getter=isHittable) _Bool hittable;
@property(readonly, nonatomic) long long interfaceOrientation;
@property(readonly) _Bool hasKeyboardFocus;
- (unsigned long long)traits;
@property(readonly, copy) XCTLocalizableStringInfo *localizableStringInfo;
@property(readonly) long long horizontalSizeClass;
@property(readonly) long long verticalSizeClass;
@property(readonly) unsigned long long elementType;
@property(readonly, copy) NSString *label;
@property(readonly, getter=isSelected) _Bool selected;
@property(readonly, getter=isEnabled) _Bool enabled;
@property(readonly) NSString *identifier;
@property(readonly) NSString *placeholderValue;
@property(readonly, copy) NSString *title;
@property(readonly) struct CGRect frame;
@property(readonly) id value;
- (_Bool)resolveHandleUIInterruption:(_Bool)arg1 error:(id *)arg2;
- (void)resolveHandleUIInterruption:(_Bool)arg1;
- (void)resolve;
- (_Bool)waitForNonExistenceWithTimeout:(double)arg1;
- (id)makeNonExistenceExpectation;
- (_Bool)waitForExistenceWithTimeout:(double)arg1;
- (_Bool)_waitForExistenceWithTimeout:(double)arg1;
- (_Bool)evaluatePredicateForExpectation:(id)arg1 debugMessage:(id *)arg2;
- (id)_debugDescriptionWithSnapshot:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) XCUIElement *firstMatch;
- (id)childrenMatchingType:(unsigned long long)arg1;
- (id)descendantsMatchingType:(unsigned long long)arg1;
@property(readonly) _Bool exists;
@property(readonly, nonatomic) XCUIApplication *application;
@property(readonly, copy) NSString *description;
- (id)elementBoundByAccessibilityElement;
- (id)initWithElementQuery:(id)arg1;
- (id)screenshot;
- (id)_screen;
- (id)snapshotWithError:(id *)arg1;
- (_Bool)_shouldDispatchEvent:(id *)arg1;
- (void)_dispatchEvent:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_dispatchEvent:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)typeText:(id)arg1;
- (void)rotate:(double)arg1 withVelocity:(double)arg2;
- (void)pinchWithScale:(double)arg1 velocity:(double)arg2;
- (void)swipeRight;
- (void)swipeLeft;
- (void)swipeDown;
- (void)swipeUp;
- (void)_swipe:(unsigned long long)arg1;
- (void)pressForDuration:(double)arg1 thenDragToElement:(id)arg2;
- (void)pressForDuration:(double)arg1;
- (void)_tapWithNumberOfTaps:(unsigned long long)arg1 numberOfTouches:(unsigned long long)arg2 activityTitle:(id)arg3;
- (id)_highestNonWindowAncestorOfElement:(id)arg1 notSharedWithElement:(id)arg2;
- (id)_pointsInFrame:(struct CGRect)arg1 numberOfTouches:(unsigned long long)arg2;
- (void)tapWithNumberOfTaps:(unsigned long long)arg1 numberOfTouches:(unsigned long long)arg2;
- (void)twoFingerTap;
- (void)doubleTap;
- (void)tap;
- (id)_hitPointByAttemptingToScrollToVisibleSnapshot:(id)arg1 error:(id *)arg2;
@property(readonly) double normalizedSliderPosition;
- (void)adjustToNormalizedSliderPosition:(double)arg1;
- (void)adjustToPickerWheelValue:(id)arg1;
- (void)tapOrClick;
- (void)forcePress;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

