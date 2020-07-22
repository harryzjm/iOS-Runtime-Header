//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/MDSearchQueryDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_semaphore;

@interface _CDMDSearchQueryDelegate : NSObject <MDSearchQueryDelegate>
{
    NSObject<OS_dispatch_semaphore> *_mdQuerySem;
    NSMutableArray *_recentMDSearchQueryResults;
}

@property(retain, nonatomic) NSMutableArray *recentMDSearchQueryResults; // @synthesize recentMDSearchQueryResults=_recentMDSearchQueryResults;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *mdQuerySem; // @synthesize mdQuerySem=_mdQuerySem;
- (void).cxx_destruct;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

