//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StocksUI/NSObject-Protocol.h>

@class NSArray, NSDictionary;

@protocol FCTagRanking <NSObject>
- (void)prepareForUseWithCompletionHandler:(void (^)(void))arg1;
- (NSDictionary *)scoresForTagIDs:(NSArray *)arg1;
- (NSArray *)rankTagIDsDescending:(NSArray *)arg1;
@end

