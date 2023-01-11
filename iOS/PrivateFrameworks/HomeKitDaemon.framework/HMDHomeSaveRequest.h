//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSDictionary, NSString;

@interface HMDHomeSaveRequest : HMFObject
{
    _Bool _objectChange;
    _Bool _incrementGeneration;
    HMDHome *_home;
    NSString *_reason;
    NSDictionary *_information;
    unsigned long long _saveOptions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool incrementGeneration; // @synthesize incrementGeneration=_incrementGeneration;
@property(readonly, nonatomic) _Bool objectChange; // @synthesize objectChange=_objectChange;
@property(readonly, nonatomic) unsigned long long saveOptions; // @synthesize saveOptions=_saveOptions;
@property(readonly, nonatomic) NSDictionary *information; // @synthesize information=_information;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) HMDHome *home; // @synthesize home=_home;
- (void)_updateSaveOptions:(_Bool)arg1 reason:(id)arg2;
- (id)initWithReason:(id)arg1 information:(id)arg2 saveOptions:(unsigned long long)arg3;
- (id)initWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(_Bool)arg3;
- (id)initWithHome:(id)arg1 reason:(id)arg2 information:(id)arg3 postSyncNotification:(_Bool)arg4 objectChange:(_Bool)arg5;
- (id)_initWithHome:(id)arg1 reason:(id)arg2 information:(id)arg3 postSyncNotification:(_Bool)arg4 objectChange:(_Bool)arg5 saveOptions:(unsigned long long)arg6;

@end
