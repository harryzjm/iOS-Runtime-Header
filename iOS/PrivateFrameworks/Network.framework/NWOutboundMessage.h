//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_nw_outbound_message;

@interface NWOutboundMessage
{
    NSObject<OS_nw_outbound_message> *_internalMessage;
}

@property(retain) NSObject<OS_nw_outbound_message> *internalMessage; // @synthesize internalMessage=_internalMessage;
- (void).cxx_destruct;
- (void)addAntecedent:(id)arg1;
@property(nonatomic) unsigned int relativePriority;
@property(nonatomic) unsigned long long deadlineMilliseconds;
- (void)setNumber:(unsigned long long)arg1 forDomain:(id)arg2 key:(id)arg3;
- (id)initWithContent:(id)arg1;
- (id)initWithInternalMessage:(id)arg1;

@end
