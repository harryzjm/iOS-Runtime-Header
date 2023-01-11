//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSString;

@interface IDSLocalDeliverySocketOpenedMetric : NSObject <CUTCoreAnalyticsMetric>
{
    _Bool _isToDefaultPairedDevice;
    NSString *_service;
    unsigned long long _openError;
    unsigned long long _socketError;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long socketError; // @synthesize socketError=_socketError;
@property(readonly, nonatomic) unsigned long long openError; // @synthesize openError=_openError;
@property(readonly, nonatomic) _Bool isToDefaultPairedDevice; // @synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
- (id)initWithService:(id)arg1 isToDefaultPairedDevice:(_Bool)arg2 openError:(unsigned long long)arg3 socketError:(unsigned long long)arg4;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
