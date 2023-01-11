//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoAdActionAvailabilityObserverFactory-Protocol.h>

@class NSString;
@protocol SVVideoLoadingStateObserverFactory, SVVideoProviderProviding;

@interface SVVideoAdActionAvailabilityObserverFactory : NSObject <SVVideoAdActionAvailabilityObserverFactory>
{
    id <SVVideoProviderProviding> _videoProviderProvider;
    id <SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
}

@property(readonly, nonatomic) id <SVVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property(readonly, nonatomic) id <SVVideoProviderProviding> videoProviderProvider; // @synthesize videoProviderProvider=_videoProviderProvider;
- (void).cxx_destruct;
- (id)createActionAvailabilityObserverForVideo:(id)arg1;
- (id)initWithVideoProviderProvider:(id)arg1 loadingStateObserverFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

