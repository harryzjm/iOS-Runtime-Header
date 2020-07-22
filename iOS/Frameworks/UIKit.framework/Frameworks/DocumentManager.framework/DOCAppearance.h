//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DocumentManager/NSCopying-Protocol.h>
#import <DocumentManager/NSSecureCoding-Protocol.h>

@class NSArray, NSString, UIColor;

@interface DOCAppearance : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _showsCreateButton;
    _Bool _forceClearBackground;
    _Bool _alwaysEnableScrollInSourceView;
    _Bool _isInfoInPopoverMode;
    double _compactHorizontalTableStackSpacing;
    double _regularHorizontalTableStackSpacing;
    double _fullHorizontalTableStackSpacing;
    unsigned long long _browserUserInterfaceStyle;
    double _createButtonAspectRatio;
    NSString *_collectionCreateButtonTitle;
}

+ (_Bool)supportsSecureCoding;
+ (id)recentsWidgetAppearance;
+ (id)recentsPopoverAppearance;
+ (id)documentsPickerAppearance;
@property _Bool isInfoInPopoverMode; // @synthesize isInfoInPopoverMode=_isInfoInPopoverMode;
@property _Bool alwaysEnableScrollInSourceView; // @synthesize alwaysEnableScrollInSourceView=_alwaysEnableScrollInSourceView;
@property(retain) NSString *collectionCreateButtonTitle; // @synthesize collectionCreateButtonTitle=_collectionCreateButtonTitle;
@property double createButtonAspectRatio; // @synthesize createButtonAspectRatio=_createButtonAspectRatio;
@property(nonatomic) unsigned long long browserUserInterfaceStyle; // @synthesize browserUserInterfaceStyle=_browserUserInterfaceStyle;
@property _Bool forceClearBackground; // @synthesize forceClearBackground=_forceClearBackground;
@property _Bool showsCreateButton; // @synthesize showsCreateButton=_showsCreateButton;
@property double fullHorizontalTableStackSpacing; // @synthesize fullHorizontalTableStackSpacing=_fullHorizontalTableStackSpacing;
@property double regularHorizontalTableStackSpacing; // @synthesize regularHorizontalTableStackSpacing=_regularHorizontalTableStackSpacing;
@property double compactHorizontalTableStackSpacing; // @synthesize compactHorizontalTableStackSpacing=_compactHorizontalTableStackSpacing;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)darkModeDefaultTintColor;
- (void)applyAppearanceOnTabBar:(id)arg1;
- (void)applyAppearanceOnToolbar:(id)arg1;
- (void)applyAppearanceOnPalette:(id)arg1;
- (void)applyAppearanceOnNavigationBar:(id)arg1;
@property(readonly) long long preferredBarStyle;
@property(readonly) long long preferredStatusBarStyle;
@property(readonly) UIColor *progressViewInactiveStrokeColor;
@property(readonly) UIColor *searchBarTextColor;
@property(readonly) UIColor *separatorColor;
@property(readonly) UIColor *dimmingViewColor;
@property(readonly) UIColor *secondaryTextColor;
@property(readonly) UIColor *primaryTextColor;
@property(readonly) NSArray *backgroundGradientColors;
@property(readonly) UIColor *selectedBackgroundColor;
@property(readonly) UIColor *backgroundColor;
@property(readonly) UIColor *createBackgroundColor;

@end

