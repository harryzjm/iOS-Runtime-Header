//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSUIWebClientContext, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebMetricsAction
{
    _Bool _shouldFlush;
    NSArray *_events;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldFlush; // @synthesize shouldFlush=_shouldFlush;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
- (id)runAction;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

