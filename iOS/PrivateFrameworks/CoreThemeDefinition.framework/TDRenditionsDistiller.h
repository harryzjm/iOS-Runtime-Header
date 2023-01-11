//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreThemeDocument, NSConditionLock, NSMutableArray, TDLogger;

@interface TDRenditionsDistiller : NSObject
{
    CoreThemeDocument *document;
    NSMutableArray *renditionInQueue;
    NSMutableArray *psiDataInfoOutQueue;
    NSConditionLock *inQueueLock;
    NSConditionLock *outQueueLock;
    _Bool shouldCompressCSIDataFlag;
    _Bool noMoreCSIDataInfo;
    _Bool noMoreRenditions;
    TDLogger *_logger;
}

@property(retain) TDLogger *logger; // @synthesize logger=_logger;
- (id)nextCSIDataInfoFromQueue;
- (void)enqueueRenditionSpec:(id)arg1;
- (void)enqueueAbortFlag;
- (void)enqueueLastRenditionFlag;
- (void)detachDistillationThread;
- (void)_distill:(id)arg1;
- (id)_nextObjectFromInQueue;
- (void)_enqueueDistillingAbortedInfo;
- (void)_enqueueLastCSIDataInfoFlag;
- (void)_enqueueCSIDataInfo:(id)arg1;
- (void)_enqueueOnOutQueueTheObject:(id)arg1;
- (void)_enqueueOnInQueueTheObject:(id)arg1;
- (void)_enqueueOnQueue:(id)arg1 withQueueLock:(id)arg2 object:(id)arg3;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 shouldCompressCSIDataFlag:(_Bool)arg2;

@end

