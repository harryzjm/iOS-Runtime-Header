//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, REHTMLElement;

@interface REHTMLPageBuilder : NSObject
{
    REHTMLElement *_stylesheetsElement;
    REHTMLElement *_scriptsElement;
    REHTMLElement *_pageDescriptionElement;
    REHTMLElement *_navigationLinksElement;
    NSArray *_stylesheets;
    NSArray *_loadingScripts;
    NSString *_pageDescription;
    NSArray *_links;
}

+ (id)_safariIcon;
+ (id)_largeFavicon;
+ (id)_smallFavicon;
+ (id)_iosIcon;
+ (id)_viewportElement;
+ (id)_mainNavigationElement;
+ (id)_bodyElement;
+ (id)_scriptElementWithLocation:(id)arg1;
+ (id)_stylesheetElementWithLocation:(id)arg1;
+ (id)_headElement;
+ (id)_htmlElement;
+ (id)_docTypeElement;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *links; // @synthesize links=_links;
@property(retain, nonatomic) NSString *pageDescription; // @synthesize pageDescription=_pageDescription;
@property(retain, nonatomic) NSArray *loadingScripts; // @synthesize loadingScripts=_loadingScripts;
@property(retain, nonatomic) NSArray *stylesheets; // @synthesize stylesheets=_stylesheets;
- (id)pageWithTitle:(id)arg1 content:(id)arg2 backLocation:(id)arg3;
- (id)init;

@end
