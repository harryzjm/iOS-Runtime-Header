//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/WKNavigationResponse.h>

@class NSString;

@interface WKNavigationResponse (SafariServicesExtras)
- (long long)_sf_responsePolicy:(long long *)arg1 uti:(id *)arg2;
- (_Bool)_sf_allowReloadingInMainFrame;
@property(readonly, nonatomic) NSString *_sf_suggestedFilename;
@end
