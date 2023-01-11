//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryVisitPredicate-Protocol.h>

@class NSString, WBSSetInt64;

@interface WBSHistoryVisitsMatchingOriginsPredicate : NSObject <WBSHistoryVisitPredicate>
{
    WBSSetInt64 *_origins;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)evaluateServiceVisit:(id)arg1;
- (_Bool)evaluateVisit:(id)arg1;
- (id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id *)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrigins:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
