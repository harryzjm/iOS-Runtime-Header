//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface HDSQLiteQueryPlanRow : NSObject
{
    long long _selectID;
    long long _order;
    long long _from;
    NSString *_detail;
}

@property(readonly, copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) long long from; // @synthesize from=_from;
@property(readonly, nonatomic) long long order; // @synthesize order=_order;
@property(readonly, nonatomic) long long selectID; // @synthesize selectID=_selectID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSelectID:(long long)arg1 order:(long long)arg2 from:(long long)arg3 detail:(id)arg4;

@end

