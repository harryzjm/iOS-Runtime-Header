//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GDLazyGraphTripleRow, GDSQLTripleRowIterator;

@interface GDSQLEntityIterator : NSObject
{
    GDLazyGraphTripleRow *_lazyTripleRow;
    GDSQLTripleRowIterator *_innerIterator;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithColumns:(unsigned long long)arg1 statement:(id)arg2;

@end

