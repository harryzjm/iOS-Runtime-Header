//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PARSession, SPAppService;

@interface SPClientSession : NSObject
{
    NSArray *_searchDomains;
    _Bool _observersAdded;
    int _prefsToken;
    PARSession *_session;
    SPAppService *_appService;
    long long _contentFilter;
    _Bool _infinitePatience;
}

+ (void)retrieveFirstTimeExperienceTextWithReply:(CDUnknownBlockType)arg1;
+ (void)initialize;
@property(nonatomic) _Bool infinitePatience; // @synthesize infinitePatience=_infinitePatience;
- (void).cxx_destruct;
- (void)dealloc;
- (void)finishRanking:(id)arg1 blendingDuration:(double)arg2;
- (void)deactivate;
- (void)activate;
- (void)preheat;
@property(readonly) NSArray *disabledBundleIds;
- (_Bool)_setSearchDomains:(id)arg1;
- (id)queryWithContext:(id)arg1;
- (long long)contentFilters;
- (id)init;

@end

