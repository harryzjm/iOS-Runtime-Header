//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTAWDMetric-Protocol.h>
#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSString, PBCodable;
@protocol NSCopying;

@interface IDSLocalMessageSentMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric>
{
    NSString *_service;
    _Bool _isToDefaultPairedDevice;
    long long _messageSize;
    unsigned long long _linkType;
    long long _priority;
}

@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned long long linkType; // @synthesize linkType=_linkType;
@property(readonly, nonatomic) long long messageSize; // @synthesize messageSize=_messageSize;
@property(readonly, nonatomic) _Bool isToDefaultPairedDevice; // @synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property(readonly) unsigned int awdIdentifier;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithService:(id)arg1 isToDefaultPairedDevice:(_Bool)arg2 messageSize:(long long)arg3 linkType:(unsigned long long)arg4 priority:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
