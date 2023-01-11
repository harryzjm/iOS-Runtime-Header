//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/MNCommuteDestinationObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MNCommuteDestinationNavigabilityScore <MNCommuteDestinationObserver>
{
    _Bool _destinationInvalid;
}

+ (double)weight;
- (id)descriptionExtras;
- (void)commuteDestination:(id)arg1 didChangeRoute:(id)arg2;
- (void)_checkDestinationRoute:(id)arg1;
- (_Bool)destinationInvalid;
- (void)updateScoreIfPossible;
- (id)initWithDestination:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

