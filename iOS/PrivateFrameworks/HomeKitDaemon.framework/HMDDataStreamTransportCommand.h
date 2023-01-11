//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface HMDDataStreamTransportCommand : NSObject <NSCopying>
{
    long long _command;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
@property(nonatomic) long long command; // @synthesize command=_command;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithCommand:(long long)arg1;
- (id)init;

@end
