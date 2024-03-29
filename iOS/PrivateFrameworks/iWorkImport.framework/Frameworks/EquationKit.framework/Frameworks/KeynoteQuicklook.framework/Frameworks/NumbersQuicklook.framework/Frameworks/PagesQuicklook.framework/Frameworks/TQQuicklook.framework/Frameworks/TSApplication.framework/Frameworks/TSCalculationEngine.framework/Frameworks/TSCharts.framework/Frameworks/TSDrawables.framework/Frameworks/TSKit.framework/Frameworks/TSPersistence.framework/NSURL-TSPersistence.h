//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (TSPersistence)
+ (id)tsp_iWorkAVAssetURLWithUUID:(id)arg1 filename:(id)arg2 contentTypeUTI:(id)arg3;
- (id)tsp_queryDictionary;
- (id)tsp_fileIdentifier;
- (id)tsp_embeddedUTI;
- (_Bool)tsp_matchesURL:(id)arg1 canCompareFileID:(_Bool)arg2;
- (_Bool)tsp_matchesURL:(id)arg1;
@property(readonly, nonatomic) _Bool tsp_isIWorkAVAssetURL;
@end

