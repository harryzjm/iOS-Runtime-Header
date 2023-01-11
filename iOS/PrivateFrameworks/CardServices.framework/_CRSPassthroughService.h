//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CardServices/CRSCardServing-Protocol.h>
#import <CardServices/CRSIdentifiedServing-Protocol.h>

@class NSString;

@interface _CRSPassthroughService : NSObject <CRSCardServing, CRSIdentifiedServing>
{
}

@property(readonly, copy, nonatomic) NSString *serviceIdentifier;
- (_Bool)canSatisfyCardRequest:(id)arg1;
- (unsigned long long)servicePriorityForRequest:(id)arg1;
- (void)requestCard:(id)arg1 reply:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

