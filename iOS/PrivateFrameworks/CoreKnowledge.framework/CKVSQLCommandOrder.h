//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>

@class NSArray;

@interface CKVSQLCommandOrder : NSObject <NSCopying>
{
    long long _orderMode;
    NSArray *_columnNames;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *columnNames; // @synthesize columnNames=_columnNames;
@property(readonly, nonatomic) long long orderMode; // @synthesize orderMode=_orderMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)description;
- (id)initWithOrderMode:(long long)arg1 columnNames:(id)arg2;

@end
