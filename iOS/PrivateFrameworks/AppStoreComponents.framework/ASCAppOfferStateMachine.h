//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCAppOfferSavedState, ASCAppOfferStateCenter, NSMutableArray, NSString;
@protocol ASCOffer;

__attribute__((visibility("hidden")))
@interface ASCAppOfferStateMachine : NSObject
{
    id <ASCOffer> _offer;
    ASCAppOfferStateCenter *_stateCenter;
    NSMutableArray *_delegates;
    ASCAppOfferSavedState *_mostRecentState;
    NSString *_mostRecentStatusText;
    ASCAppOfferSavedState *_overrideState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASCAppOfferSavedState *overrideState; // @synthesize overrideState=_overrideState;
@property(copy, nonatomic) NSString *mostRecentStatusText; // @synthesize mostRecentStatusText=_mostRecentStatusText;
@property(retain, nonatomic) ASCAppOfferSavedState *mostRecentState; // @synthesize mostRecentState=_mostRecentState;
@property(readonly, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) __weak ASCAppOfferStateCenter *stateCenter; // @synthesize stateCenter=_stateCenter;
@property(readonly, nonatomic) id <ASCOffer> offer; // @synthesize offer=_offer;
- (void)invalidateTemporaryStateForcingUpdate:(_Bool)arg1;
- (void)installTemporaryWaitingState;
- (id)performActionWithActivity:(id)arg1 inContext:(id)arg2;
- (void)offerStatusTextDidChange:(id)arg1;
- (void)offerStateDidChange:(id)arg1 withMetadata:(id)arg2 flags:(long long)arg3;
- (void)enumerateDelegatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithOffer:(id)arg1 stateCenter:(id)arg2;

@end

