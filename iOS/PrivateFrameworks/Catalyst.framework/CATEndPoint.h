//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATAddress, NSData;

@interface CATEndPoint : NSObject
{
    unsigned int _port;
    NSData *_data;
    CATAddress *_address;
}

@property(readonly, nonatomic) unsigned int port; // @synthesize port=_port;
@property(readonly, nonatomic) CATAddress *address; // @synthesize address=_address;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToEndPoint:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAddress:(id)arg1 port:(unsigned int)arg2;
- (id)initWithData:(id)arg1;
- (id)init;

@end

