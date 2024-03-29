//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

@interface TSUMutableWarningSet : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_warnings;
}

- (void).cxx_destruct;
- (_Bool)hasWarningsOfKind:(long long)arg1;
- (id)warningsOfKind:(long long)arg1;
- (id)popAllWarningsIfContainsWarningPassingTest:(CDUnknownBlockType)arg1;
- (id)popAllWarnings;
@property(readonly, nonatomic) NSSet *allWarnings;
- (_Bool)containsWarningPassingTest:(CDUnknownBlockType)arg1;
- (id)warningsPassingTest:(CDUnknownBlockType)arg1;
- (void)addWarning:(id)arg1;
- (void)unionSet:(id)arg1;
@property(readonly) unsigned long long count;
- (id)initWithSet:(id)arg1;
- (id)init;

@end

