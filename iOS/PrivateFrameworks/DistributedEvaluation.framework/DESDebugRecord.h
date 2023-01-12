//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESUserDefaultsStoreRecord, NSDictionary, NSMutableDictionary, NSString;

@interface DESDebugRecord : NSObject
{
    NSMutableDictionary *_debugInfo;
    DESUserDefaultsStoreRecord *_storeRecord;
    NSString *_recordID;
}

+ (id)recordIDFromPluginID:(id)arg1 taskSource:(long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
- (_Bool)commitWithError:(id *)arg1;
- (void)addForTaskID:(id)arg1 result:(long long)arg2 description:(id)arg3;
@property(readonly, nonatomic) NSDictionary *debugInfo;
- (id)stringForResult:(id)arg1;
- (id)description;
- (id)initWithRecordID:(id)arg1 debugInfo:(id)arg2;
- (id)initWithPluginID:(id)arg1 taskSource:(long long)arg2;
- (id)initFromStoreWithPluginID:(id)arg1 taskSource:(long long)arg2;

@end
