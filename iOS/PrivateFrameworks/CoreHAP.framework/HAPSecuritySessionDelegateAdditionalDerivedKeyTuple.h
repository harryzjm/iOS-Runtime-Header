//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface HAPSecuritySessionDelegateAdditionalDerivedKeyTuple : NSObject
{
    NSString *_name;
    NSData *_saltData;
    NSData *_infoData;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *infoData; // @synthesize infoData=_infoData;
@property(readonly, nonatomic) NSData *saltData; // @synthesize saltData=_saltData;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 saltData:(id)arg2 infoData:(id)arg3;
- (id)init;

@end
