//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, TSDRep, TSDTextureContext;

@protocol TSDMagicMoveMatching

@optional
+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(TSDRep *)arg1 incomingObject:(TSDRep *)arg2;
+ (NSArray *)magicMoveMatchesBetweenOutgoingObjects:(NSArray *)arg1 andIncomingObjects:(NSArray *)arg2 textureContext:(TSDTextureContext *)arg3;
@end
