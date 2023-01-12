//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SUCoreEventReporter;

__attribute__((visibility("hidden")))
@interface SUCoreEventReporterDelegate : NSObject
{
    SUCoreEventReporter *_reporter;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SUCoreEventReporter *reporter; // @synthesize reporter=_reporter;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)initWithReporter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

