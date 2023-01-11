//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLitePreparedStatement : NSObject
{
    const void *_connectionPointer;
    NSString *_SQL;
}

@property(readonly, copy, nonatomic) NSString *SQL; // @synthesize SQL=_SQL;
@property(readonly, nonatomic) const void *connectionPointer; // @synthesize connectionPointer=_connectionPointer;
- (void).cxx_destruct;
- (id)initWithConnection:(const void *)arg1 SQL:(id)arg2;

@end

