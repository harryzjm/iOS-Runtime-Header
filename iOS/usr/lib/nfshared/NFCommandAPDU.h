//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface NFCommandAPDU : NSObject
{
    unsigned char _class;
    unsigned char _instruction;
    unsigned char _p1;
    unsigned char _p2;
    struct _NSRange _payloadRange;
    unsigned int _lengthExpected;
    NSData *_data;
}

- (void).cxx_destruct;
- (_Bool)isGetMoreVasDataCommand;
- (_Bool)isGetVasDataCommand;
- (_Bool)isSendCertificateCommand;
- (_Bool)isSelectCommand;
- (id)initWithData:(id)arg1 uniformLengthCheck:(_Bool)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithBytes:(const char *)arg1 length:(unsigned long long)arg2;
@property(readonly, nonatomic) NSData *payload;
@property(readonly, nonatomic) const char *payloadBytes;
@property(readonly, nonatomic) unsigned int lengthExpected;
@property(readonly, nonatomic) unsigned int payloadLength;
@property(readonly, nonatomic) unsigned char p2;
@property(readonly, nonatomic) unsigned char p1;
@property(readonly, nonatomic) unsigned char instruction;
@property(readonly, nonatomic) unsigned char clss;

@end
