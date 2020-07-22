//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoRegistry/NRMutableStateParentDelegate-Protocol.h>
#import <NanoRegistry/NSFastEnumeration-Protocol.h>

@class NRMutableDevice, NSMutableDictionary, NSUUID;

@interface NRMutableDeviceCollection <NRMutableStateParentDelegate, NSFastEnumeration>
{
    NSMutableDictionary *_deviceCollection;
    NSMutableDictionary *_childMap;
}

+ (_Bool)supportsSecureCoding;
+ (void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)diffFrom:(id)arg1 to:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *childMap; // @synthesize childMap=_childMap;
@property(retain, nonatomic) NSMutableDictionary *deviceCollection; // @synthesize deviceCollection=_deviceCollection;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (id)applyDiff:(id)arg1 upOnly:(_Bool)arg2 notifyParent:(_Bool)arg3 unconditional:(_Bool)arg4;
@property(readonly, nonatomic, getter=paired) _Bool isPaired;
- (id)_diffsToChangeActiveDeviceToDeviceID:(id)arg1;
@property(retain, nonatomic) NSUUID *activeDeviceID;
@property(readonly, nonatomic) NRMutableDevice *activeDevice;
- (unsigned long long)count;
- (id)allPairingIDs;
- (id)deviceForBluetoothID:(id)arg1;
- (id)deviceForPairingID:(id)arg1;
- (void)removeDeviceForPairingID:(id)arg1;
- (void)setDevice:(id)arg1 forPairingID:(id)arg2;
- (id)init;

@end

