//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <ChronoCore/BSSharedMemoryStoreData-Protocol.h>

@class MISSING_TYPE;

@interface _TtC10ChronoCore21LocationGraceRegistry : _TtCs12_SwiftObject <BSSharedMemoryStoreData>
{
    MISSING_TYPE *timeoutByIdentifier;
}

+ (id)deserializeFromReader:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(void *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)serializeToWriter:(CDUnknownBlockType)arg1;
@property(nonatomic, readonly) long long serializedDataLength;

@end
