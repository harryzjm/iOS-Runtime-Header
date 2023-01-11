//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/NSCopying-Protocol.h>
#import <HomeKitBackingStore/NSMutableCopying-Protocol.h>

@interface HMBAction : HMFObject <NSCopying, NSMutableCopying>
{
    _Bool _shouldUpdateClients;
}

+ (id)shouldUpdateClientsAction;
@property(nonatomic) _Bool shouldUpdateClients; // @synthesize shouldUpdateClients=_shouldUpdateClients;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
