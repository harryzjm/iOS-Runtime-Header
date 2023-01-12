//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@class NSString;

@interface NSUUID (HMB)
+ (id)hmbUUIDFromData:(id)arg1;
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;
+ (id)hmbDecodeQueryableParameter:(id)arg1;
+ (id)hmbEncodeQueryableParameter:(id)arg1;
+ (id)hmbUUIDWithSQLite3Column:(struct sqlite3_stmt *)arg1 column:(int)arg2;
- (id)data;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

