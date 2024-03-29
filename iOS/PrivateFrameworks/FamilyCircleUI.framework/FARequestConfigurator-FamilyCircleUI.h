//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FamilyCircle/FARequestConfigurator.h>

@protocol FAURLProvider;

@interface FARequestConfigurator (FamilyCircleUI)
+ (void)addMessageEligibilityToPayload:(id)arg1;
- (id)_urlEndpointForEventType:(id)arg1;
- (void)_urlForEventType:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) id <FAURLProvider> urlProvider;
@end

