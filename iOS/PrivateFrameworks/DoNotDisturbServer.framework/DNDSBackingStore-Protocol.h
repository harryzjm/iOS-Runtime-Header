//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class NSArray;

@protocol DNDSBackingStore <NSObject>
- (_Bool)writeAllRecords:(NSArray *)arg1 withError:(id *)arg2;
- (NSArray *)readAllRecordsWithError:(id *)arg1 lastUpdateDate:(out id *)arg2;
@end

