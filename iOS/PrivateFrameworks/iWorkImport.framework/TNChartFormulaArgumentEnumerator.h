//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSFastEnumeration-Protocol.h>

@class NSEnumerator;

__attribute__((visibility("hidden")))
@interface TNChartFormulaArgumentEnumerator : NSObject <NSFastEnumeration>
{
    NSEnumerator *mUnderlyingEnumerator;
}

- (id)nextElement;
- (id)nextObject;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithEnumerator:(id)arg1;

@end

