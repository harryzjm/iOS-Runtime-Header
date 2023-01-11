//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionUI/CRSCardServing-Protocol.h>
#import <AppPredictionUI/CRSIdentifiedServing-Protocol.h>

@class NSString;

@interface APUICardService : NSObject <CRSCardServing, CRSIdentifiedServing>
{
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)requestCard:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (unsigned long long)servicePriorityForRequest:(id)arg1;
- (_Bool)canSatisfyCardRequest:(id)arg1;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
