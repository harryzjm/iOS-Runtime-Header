//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GDLazyGraphTripleRow, NSString;

__attribute__((visibility("hidden")))
@interface GDSQLTripleRowIterator : NSObject
{
    GDLazyGraphTripleRow *_lazyTripleRow;
    _Bool _internalIteratorStarted;
    NSString *_iterateSubjectValue;
}

- (void).cxx_destruct;
- (id)relationshipIdIterator;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithColumns:(unsigned long long)arg1 statement:(id)arg2 subjectOverride:(id)arg3;

@end

