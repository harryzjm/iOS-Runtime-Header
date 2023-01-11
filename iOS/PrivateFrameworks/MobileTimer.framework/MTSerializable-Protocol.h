//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSObject-Protocol.h>
#import <MobileTimer/NSSecureCoding-Protocol.h>

@protocol MTSerializer;

@protocol MTSerializable <NSObject, NSSecureCoding>
- (id)initFromDeserializer:(id <MTSerializer>)arg1;
- (void)serializeWithSerializer:(id <MTSerializer>)arg1;
@end
