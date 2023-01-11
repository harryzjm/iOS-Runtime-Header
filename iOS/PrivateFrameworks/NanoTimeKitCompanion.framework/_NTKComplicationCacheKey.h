//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@class NSUUID, NTKComplication;

@interface _NTKComplicationCacheKey : NSObject <NSCopying>
{
    long long _family;
    NTKComplication *_complication;
    NSUUID *_deviceUUID;
}

+ (id)keyWithFamily:(long long)arg1 complication:(id)arg2 forDevice:(id)arg3;
@property(readonly) NSUUID *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
@property(readonly) long long family; // @synthesize family=_family;
@property(readonly) NTKComplication *complication; // @synthesize complication=_complication;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

