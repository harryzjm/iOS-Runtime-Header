//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICollectionViewCellAppearanceState : NSObject
{
    _Bool _hasLifted;
    _Bool _hasBeganCancelling;
    int _dragState;
}

@property(nonatomic) int dragState; // @synthesize dragState=_dragState;
@property(nonatomic) _Bool hasBeganCancelling; // @synthesize hasBeganCancelling=_hasBeganCancelling;
@property(nonatomic) _Bool hasLifted; // @synthesize hasLifted=_hasLifted;
- (id)description;
- (void)didEnd;
@property(readonly, nonatomic) _Bool hasBeganDroppingInto;
@property(readonly, nonatomic) _Bool enrouteToOrReachedTerminalState;
- (void)didCompleteDropping;
- (void)didCompleteCancelling;
- (void)didBeginCancelling;
- (void)willBeginCancelling;
- (void)didBeginDroppingInto;
- (void)didBeginDropping;
- (void)didMove;
- (void)didCompleteLift;
- (void)didBeginLift;
@property(readonly, nonatomic) long long appearance;
- (id)init;

@end

