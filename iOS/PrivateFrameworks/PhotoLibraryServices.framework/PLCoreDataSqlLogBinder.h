//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRegularExpression, NSString;

@interface PLCoreDataSqlLogBinder : NSObject
{
    NSString *_selectString;
    NSMutableArray *_bindValues;
    NSRegularExpression *_selectRegex;
    NSRegularExpression *_bindRegex;
}

- (void).cxx_destruct;
- (id)pool_boundSql;
@property(readonly, copy) NSString *boundSql;
- (void)addLogLine:(id)arg1;
- (id)init;

@end
