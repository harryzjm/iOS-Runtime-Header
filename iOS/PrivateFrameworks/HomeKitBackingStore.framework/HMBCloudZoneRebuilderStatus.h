//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMBModelObjectCoder-Protocol.h>
#import <HomeKitBackingStore/NSCopying-Protocol.h>

@class NSString;

@interface HMBCloudZoneRebuilderStatus : HMFObject <HMBModelObjectCoder, NSCopying>
{
    long long _keyStatus;
    NSString *_message;
    unsigned long long _rebuildState;
}

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;
+ (id)keyStatusString:(long long)arg1;
+ (id)rebuilderStateString:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long rebuildState; // @synthesize rebuildState=_rebuildState;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) long long keyStatus; // @synthesize keyStatus=_keyStatus;
- (id)attributeDescriptions;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithState:(unsigned long long)arg1 message:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
