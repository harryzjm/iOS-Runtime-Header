//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserActivity.h>

@interface NSUserActivity (NSUserActivityPayloadServicesSupport)
- (void)_setDirty:(_Bool)arg1 identifier:(id)arg2;
- (void)_setPayloadIdentifier:(id)arg1 object:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 dirty:(_Bool)arg4;
- (void)_setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3;
- (CDUnknownBlockType)_payloadUpdateBlockForIdentifier:(id)arg1;
- (id)_objectForIdentifier:(id)arg1;
- (id)_payloadForIdentifier:(id)arg1;
@end

