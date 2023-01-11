//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoSkipThresholdObserving-Protocol.h>

@class NSString;
@protocol SVVideoLoadingStateObserving, SVVideoSkipThreshold;

@interface SVVideoSkipThresholdObserver : NSObject <SVVideoSkipThresholdObserving>
{
    _Bool _loading;
    CDUnknownBlockType block;
    id <SVVideoSkipThreshold> _thresholdProvider;
    id <SVVideoLoadingStateObserving> _loadingStateObserver;
}

@property(readonly, nonatomic) id <SVVideoLoadingStateObserving> loadingStateObserver; // @synthesize loadingStateObserver=_loadingStateObserver;
@property(readonly, nonatomic) id <SVVideoSkipThreshold> thresholdProvider; // @synthesize thresholdProvider=_thresholdProvider;
@property(copy, nonatomic, setter=onChange:) CDUnknownBlockType block; // @synthesize block;
- (void).cxx_destruct;
- (void)loadingCompletedWithThreshold:(double)arg1;
@property(readonly, nonatomic) _Bool loading; // @synthesize loading=_loading;
- (id)initWithLoadingStateObserver:(id)arg1 thresholdProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

