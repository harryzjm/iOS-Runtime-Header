//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDPersistence/IMDBridgedRecord-Protocol.h>

@class NSDictionary, NSString;

@interface IMDChatRecord <IMDBridgedRecord>
{
}

+ (id)keyPathsToColumns;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(readonly, copy, nonatomic) NSString *groupID;
@property(readonly, copy, nonatomic) NSString *serviceName;
@property(readonly, copy, nonatomic) NSDictionary *properties;
@property(readonly, copy, nonatomic) NSString *guid;
@property(readonly, nonatomic) long long rowID;
- (int)_propertyIDForProperty:(long long)arg1;
- (CDStruct_7ef4fb35)_propertyDescriptorForProperty:(long long)arg1;
- (struct __CFArray *)_localCache;
- (void *)_fetchUpdatedRecord;
- (struct _IMDChatRecordStruct *)cfChatRecord;
- (unsigned long long)_cfTypeID;

@end
