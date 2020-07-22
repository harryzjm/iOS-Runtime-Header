//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSObject-Protocol.h>

@class CSSearchableIndex, NSArray, NSData, NSString, NSURL;

@protocol CSSearchableIndexDelegate <NSObject>
- (void)searchableIndex:(CSSearchableIndex *)arg1 reindexSearchableItemsWithIdentifiers:(NSArray *)arg2 acknowledgementHandler:(void (^)(void))arg3;
- (void)searchableIndex:(CSSearchableIndex *)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(void (^)(void))arg2;

@optional
- (NSURL *)fileURLForSearchableIndex:(CSSearchableIndex *)arg1 itemIdentifier:(NSString *)arg2 typeIdentifier:(NSString *)arg3 inPlace:(_Bool)arg4 error:(out id *)arg5;
- (NSData *)dataForSearchableIndex:(CSSearchableIndex *)arg1 itemIdentifier:(NSString *)arg2 typeIdentifier:(NSString *)arg3 error:(out id *)arg4;
- (void)searchableIndexDidFinishThrottle:(CSSearchableIndex *)arg1;
- (void)searchableIndexDidThrottle:(CSSearchableIndex *)arg1;
@end

