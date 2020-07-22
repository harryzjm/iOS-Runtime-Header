//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpotlightDaemon/NSCopying-Protocol.h>

@protocol OS_xpc_object;

@interface CSSearchClientConnectionKey : NSObject <NSCopying>
{
    NSObject<OS_xpc_object> *_connection;
}

+ (id)keyWithConnection:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConnection:(id)arg1;

@end
