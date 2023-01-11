//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface HDHealthServiceOOBInfo : NSObject
{
    NSData *_oobData;
    NSData *_randomValue;
    NSData *_confirmationValue;
    NSData *_btAddress;
}

+ (id)reverseData:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *btAddress; // @synthesize btAddress=_btAddress;
@property(readonly, nonatomic) NSData *confirmationValue; // @synthesize confirmationValue=_confirmationValue;
@property(readonly, nonatomic) NSData *randomValue; // @synthesize randomValue=_randomValue;
@property(readonly, nonatomic) NSData *oobData; // @synthesize oobData=_oobData;
- (id)description;
- (id)initWithOOBData:(id)arg1 btAddress:(id)arg2;

@end
