//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (SafariSharedExtras)
+ (id)safari_aboutBlankURL;
+ (id)safari_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)safari_URLWithDataAsString:(id)arg1;
+ (id)safari_URLWithUserTypedString:(id)arg1;
@property(readonly, nonatomic) _Bool safari_isSharedTabGroupURL;
@property(readonly, nonatomic) _Bool safari_isJavaScriptURL;
@property(readonly, copy, nonatomic) NSString *safari_mailToURLStatusMessage;
@property(readonly, nonatomic) NSString *safari_stringForListDisplay;
- (id)safari_stringForListDisplayWithAdditionalSimplificationOptions:(unsigned long long)arg1;
- (id)safari_relativePathToURL:(id)arg1;
- (id)safari_wellKnownResponseCodeReliabilityURL;
- (id)safari_wellKnownChangePasswordURL;
- (_Bool)safari_isWellKnownChangePasswordURL;
@property(readonly, nonatomic) _Bool safari_isURLTooLongToDisplay;
- (id)safari_userVisibleStringConsideringLongURLs;
- (_Bool)safari_shouldBeAssociatedWithFaviconFromRedirectedURL:(id)arg1;
@property(readonly, nonatomic) _Bool safari_isTopLevelURL;
- (id)safari_URLWithUniqueFilename;
- (id)safari_userVisibleHostWithoutWWWSubdomain;
@property(readonly, copy, nonatomic) NSString *safari_userVisibleHostOrExtensionDisplayName;
- (id)safari_userVisibleHost;
- (id)safari_userVisibleString;
- (id)safari_originalDataAsString;
- (id)safari_displayNameWithTitle:(id)arg1;
- (_Bool)safari_hasCharactersBeyondPath;
@property(readonly, copy, nonatomic) NSString *safari_simplifiedURLStringForDeduping;
@property(readonly, nonatomic) NSURL *safari_canonicalURLForStartPage;
- (id)safari_URLByDeletingUserAndPassword;
- (_Bool)safari_hasUserOrPassword;
- (id)safari_URLByReplacingHostWithString:(id)arg1;
- (id)safari_URLByRemovingUserAndPath;
@property(readonly, nonatomic) _Bool safari_isOTPAuthURL;
@property(readonly, nonatomic) _Bool safari_isEligibleToShowNotSecureWarning;
@property(readonly, nonatomic) _Bool safari_isLocalOrPrivateNetworkURL;
@property(readonly, nonatomic) _Bool safari_isSafariExtensionURL;
@property(readonly, nonatomic) _Bool safari_isSafariWebExtensionURL;
@property(readonly, nonatomic) _Bool safari_isAboutBlankURL;
@property(readonly, nonatomic) _Bool safari_isSafariResourceURL;
@property(readonly, nonatomic) _Bool safari_isMailtoURL;
@property(readonly, nonatomic) _Bool safari_isBlobURL;
@property(readonly, nonatomic) _Bool safari_hasCustomScheme;
@property(readonly, nonatomic) _Bool safari_isDataURL;
@property(readonly, nonatomic) _Bool safari_isSecureURL;
@property(readonly, nonatomic) _Bool safari_isHTTPSURL;
@property(readonly, nonatomic) _Bool safari_isHTTPURL;
@property(readonly, nonatomic) _Bool safari_hasLocalScheme;
- (_Bool)safari_hasScheme:(id)arg1;
@property(readonly, copy, nonatomic) NSString *safari_identityPreferenceDomain;
@property(readonly, nonatomic) NSString *safari_fileType;
- (id)safari_path;
@end

