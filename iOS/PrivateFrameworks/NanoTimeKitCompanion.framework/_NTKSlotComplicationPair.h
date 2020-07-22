//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@class NSString, NTKComplication;

@interface _NTKSlotComplicationPair : NSObject <NSCopying>
{
    NSString *_slot;
    NTKComplication *_complication;
}

+ (id)pairWithSlot:(id)arg1 complication:(id)arg2;
@property(readonly, copy) NSString *slot; // @synthesize slot=_slot;
@property(readonly) NTKComplication *complication; // @synthesize complication=_complication;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

