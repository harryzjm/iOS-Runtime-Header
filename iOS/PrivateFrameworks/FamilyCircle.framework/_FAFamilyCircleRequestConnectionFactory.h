//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FamilyCircle/FAFamilyCircleRequestConnectionFactory-Protocol.h>

@class NSString;

@interface _FAFamilyCircleRequestConnectionFactory : NSObject <FAFamilyCircleRequestConnectionFactory>
{
}

- (id)createServiceConnectionWithInterruptionHandler:(CDUnknownBlockType)arg1 invalidationHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

