//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CKVAdminService, OS_dispatch_queue;

@interface CKVocabularyAdministrator : NSObject
{
    NSObject<CKVAdminService> *_adminService;
    double _timeout;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;
+ (id)makeAdministrator;
- (void).cxx_destruct;
- (void)enumerateAllItemsWithBatchSize:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)simulateEventHandling:(_Bool)arg1;
- (void)triggerMigration:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithAdminService:(id)arg1 timeout:(double)arg2 queue:(id)arg3;
- (id)initWithAdminService:(id)arg1 queue:(id)arg2;

@end
