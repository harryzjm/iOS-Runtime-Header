//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerSnapshotCollection : NSObject
{
    NSMutableDictionary *_peerIDToTransactionNumberToSnapshot;
    NSMutableDictionary *_peerIDToTranasctionNumberToKnowledgeVector;
    NSMutableDictionary *_kvToSnapshot;
    NSMutableArray *_peerSnapshots;
    _Bool _needSort;
}

- (void)dealloc;
- (id)init;

@end
