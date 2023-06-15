//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessCodeDemoDataMocker : HMFObject
{
    NSMutableDictionary *_accessCodes;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) NSMutableDictionary *accessCodes; // @synthesize accessCodes=_accessCodes;
- (id)_handleRemoveRequest:(id)arg1;
- (id)_handleUpdateRequest:(id)arg1;
- (id)_handleAddRequest:(id)arg1;
- (id)_handleReadRequest:(id)arg1;
- (id)_handleListRequest;
- (id)_controlResponseForWriteRequest:(id)arg1;
- (id)_controlResponseForReadRequest:(id)arg1;
- (id)handleReadRequests:(id)arg1;
- (id)handleWriteRequests:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

