//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface CSIndexConnection
{
    NSMutableDictionary *_indexMap;
}

+ (id)sharedConnection;
@property(readonly, nonatomic) NSMutableDictionary *indexMap; // @synthesize indexMap=_indexMap;
- (void).cxx_destruct;
- (id)indexForID:(unsigned int)arg1;
- (void)addIndex:(id)arg1 forID:(unsigned int)arg2;
- (void)dropIndexID:(unsigned int)arg1;
- (void)handleReply:(id)arg1;
- (void)handleError:(id)arg1;

@end

