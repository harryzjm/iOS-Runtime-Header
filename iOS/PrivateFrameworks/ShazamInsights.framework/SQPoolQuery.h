//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SQPoolQuery
{
}

+ (id)poolsFromServerData:(id)arg1 error:(id *)arg2;
- (void)deletePool:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchClustersWithPoolID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cachePoolForRegion:(id)arg1 date:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchPoolsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
