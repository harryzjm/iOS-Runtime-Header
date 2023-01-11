//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CKRecordValueConverter : NSObject
{
}

+ (void)_validateFieldType:(Class)arg1 typeDescription:(id)arg2 inCKRecord:(id)arg3 field:(id)arg4;
+ (_Bool)hasField:(id)arg1 inRecord:(id)arg2;
+ (id)stringsListFrom:(id)arg1 field:(id)arg2;
+ (id)stringFrom:(id)arg1 field:(id)arg2;
+ (double)doubleFrom:(id)arg1 field:(id)arg2;
+ (long long)int64From:(id)arg1 field:(id)arg2;

@end
