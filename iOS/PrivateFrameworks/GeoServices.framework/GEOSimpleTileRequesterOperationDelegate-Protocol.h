//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSData, NSError, _GEOSimpleTileRequesterOperation;

@protocol GEOSimpleTileRequesterOperationDelegate <NSObject>
- (NSData *)verifyDataIntegrity:(NSData *)arg1 checksumMethod:(int)arg2;
- (int)checksumMethodForIncomingTileDataWithKey:(const struct _GEOTileKey *)arg1;
- (void)operationFailed:(_GEOSimpleTileRequesterOperation *)arg1 error:(NSError *)arg2;
- (void)operationFinished:(_GEOSimpleTileRequesterOperation *)arg1;
@end
