//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestions/SGRecordId.h>

@interface SGRecordId (Internal)
+ (id)recordIdForEventWithRowId:(long long)arg1;
+ (id)recordIdForContactDetailWithRowId:(long long)arg1;
+ (id)recordIdForContactWithRowId:(long long)arg1;
+ (id)recordIdForEmailWithRowId:(long long)arg1;
+ (id)recordIdWithTableId:(unsigned char)arg1 rowId:(long long)arg2;
- (long long)rowId;
- (unsigned char)tableId;
@end

