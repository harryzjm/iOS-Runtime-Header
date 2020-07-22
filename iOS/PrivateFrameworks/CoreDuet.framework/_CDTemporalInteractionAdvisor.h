//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, _CDInteractionStore;
@protocol OS_dispatch_queue;

@interface _CDTemporalInteractionAdvisor : NSObject
{
    int _settingsNotifyToken;
    _CDInteractionStore *_store;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSMutableDictionary *_consumerToModelMap;
}

@property int settingsNotifyToken; // @synthesize settingsNotifyToken=_settingsNotifyToken;
@property(retain, nonatomic) NSMutableDictionary *consumerToModelMap; // @synthesize consumerToModelMap=_consumerToModelMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // @synthesize dataQueue=_dataQueue;
@property(retain) _CDInteractionStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)rankContacts:(id)arg1 usingSettings:(id)arg2;
- (id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2;
- (id)rankerForDate:(id)arg1 settings:(id)arg2;
- (void)updateConsumerModel;
- (void)dealloc;
- (id)initWithStore:(id)arg1;

@end

