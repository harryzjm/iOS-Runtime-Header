//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UNSNotificationRecord;

@interface UNSNotificationRecordReplaceUpdate
{
    UNSNotificationRecord *_replacedNotificationRecord;
}

+ (id)updateWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2;
@property(readonly, nonatomic) UNSNotificationRecord *replacedNotificationRecord; // @synthesize replacedNotificationRecord=_replacedNotificationRecord;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_initWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2;

@end

