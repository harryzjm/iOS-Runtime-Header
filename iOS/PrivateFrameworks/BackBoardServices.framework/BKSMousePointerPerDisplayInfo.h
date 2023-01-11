//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, NSSet;

@interface BKSMousePointerPerDisplayInfo : NSObject
{
    BSCompoundAssertion *_pointerSuppressionAssertion;
    BSCompoundAssertion *_globalEventsAssertion;
    NSSet *_previouslyRoutedContextIDs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *previouslyRoutedContextIDs; // @synthesize previouslyRoutedContextIDs=_previouslyRoutedContextIDs;
@property(retain, nonatomic) BSCompoundAssertion *globalEventsAssertion; // @synthesize globalEventsAssertion=_globalEventsAssertion;
@property(retain, nonatomic) BSCompoundAssertion *pointerSuppressionAssertion; // @synthesize pointerSuppressionAssertion=_pointerSuppressionAssertion;

@end
