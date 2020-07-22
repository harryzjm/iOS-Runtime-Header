//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class NSArray, NSNumber, NSString, SSURLRequestProperties;

@interface SUStorePageProtocol : NSObject <NSCopying>
{
    NSArray *_allowedOrientations;
    NSString *_copyright;
    NSArray *_expectedClientIdentifiers;
    NSNumber *_focusedItemIdentifier;
    NSArray *_navigationButtons;
    NSArray *_navigationHistoryItems;
    NSArray *_navigationMenus;
    SSURLRequestProperties *_overlayBackgroundURLRequestProperties;
    NSString *_rootSectionIdentifier;
    _Bool _shouldDisplayInOverlay;
    _Bool _shouldExcludeFromNavigationHistory;
    _Bool _shouldReplaceRootViewController;
}

@property(nonatomic) _Bool shouldReplaceRootViewController; // @synthesize shouldReplaceRootViewController=_shouldReplaceRootViewController;
@property(nonatomic) _Bool shouldExcludeFromNavigationHistory; // @synthesize shouldExcludeFromNavigationHistory=_shouldExcludeFromNavigationHistory;
@property(nonatomic) _Bool shouldDisplayInOverlay; // @synthesize shouldDisplayInOverlay=_shouldDisplayInOverlay;
@property(retain, nonatomic) NSString *rootSectionIdentifier; // @synthesize rootSectionIdentifier=_rootSectionIdentifier;
@property(retain, nonatomic) SSURLRequestProperties *overlayBackgroundURLRequestProperties; // @synthesize overlayBackgroundURLRequestProperties=_overlayBackgroundURLRequestProperties;
@property(copy, nonatomic) NSArray *navigationMenus; // @synthesize navigationMenus=_navigationMenus;
@property(retain, nonatomic) NSArray *navigationHistoryItems; // @synthesize navigationHistoryItems=_navigationHistoryItems;
@property(copy, nonatomic) NSArray *navigationButtons; // @synthesize navigationButtons=_navigationButtons;
@property(retain, nonatomic) NSNumber *focusedItemIdentifier; // @synthesize focusedItemIdentifier=_focusedItemIdentifier;
@property(copy, nonatomic) NSArray *expectedClientIdentifiers; // @synthesize expectedClientIdentifiers=_expectedClientIdentifiers;
@property(retain, nonatomic) NSString *copyright; // @synthesize copyright=_copyright;
@property(retain, nonatomic) NSArray *allowedOrientations; // @synthesize allowedOrientations=_allowedOrientations;
- (id)_newNavigationMenusFromArray:(id)arg1;
- (id)_newNavigationHistoryItemsFromArray:(id)arg1;
- (id)_newNavigationButtonsFromArray:(id)arg1;
- (void)setValuesFromStorePageDictionary:(id)arg1;
- (void)setOverlayBackgroundURLRequest:(id)arg1;
- (id)overlayBackgroundURLRequest;
- (id)navigationMenuForLocation:(long long)arg1;
- (id)navigationButtonForLocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)_initCommon;

@end

