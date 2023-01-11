//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class LSAppLink, NSString;

@interface NSURL (SafariServicesExtras)
+ (void)_sf_urlsFromDragItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)_sf_canCreateURLsFromDropSession:(id)arg1;
@property(readonly, nonatomic) NSString *_sf_highLevelDomainFromHostFallingBackToHostOrAbsoluteString;
@property(readonly, nonatomic) NSString *_sf_topLevelDomain;
@property(readonly, nonatomic) _Bool sf_isFacetimeURL;
@property(readonly, nonatomic) NSString *sf_absoluteStringWithoutFragment;
@property(readonly, nonatomic) LSAppLink *sf_appLink;
@property(readonly, nonatomic) _Bool sf_isTestWebArchiveURL;
@property(readonly, nonatomic) _Bool sf_isOfflineReadingListURL;
@property(readonly, nonatomic) _Bool sf_isWebSearchURL;
@end

