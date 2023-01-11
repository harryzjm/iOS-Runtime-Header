//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMTransferServicesCompressionController : NSObject
{
    NSMutableDictionary *_blockMap;
}

+ (id)sharedInstance;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (void)compressFileTransfer:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_blockForCopier:(id)arg1;
- (void)_unmapCopier:(id)arg1;
- (void)_mapCopier:(id)arg1 toBlock:(CDUnknownBlockType)arg2;

@end
